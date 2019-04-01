#include<bits/stdc++.h>
using namespace std;

string diff(string str11, string str22){
    string str = "";
    int n1 = str11.length(), n2 = str22.length();

    reverse(str11.begin(), str11.end());
    reverse(str22.begin(), str22.end());
    int car = 0;

    for (int i=0; i<n2; i++){
        int sub = ((str11[i]-'0')-(str22[i]-'0')-car);
        if (sub < 0){
            sub = sub + 10;
            car = 1;
        }else
            car = 0;

        str.push_back(sub + '0');
    }

    for (int i=n2; i<n1; i++){
        int sub = ((str11[i]-'0') - car);
        if (sub < 0){
            sub = sub + 10;
            car = 1;
        }else
            car = 0;
        str.push_back(sub + '0');
    }
    reverse(str.begin(), str.end());
    return str;
}

string division(string number, int divisor){
    string ans;
    int idx = 0;
    int temp = number[idx] - '0';
    while (temp < divisor)
       temp = temp * 10 + (number[++idx] - '0');
    while (number.size() > idx){
        ans += (temp / divisor) + '0';
        temp = (temp % divisor) * 10 + number[++idx] - '0';
    }
    if (ans.length() == 0)
        return "0";
    return ans;
}

string multi(string num1, string num2){
    int n1 = num1.size();
    int n2 = num2.size();
    if (n1 == 0 || n2 == 0)
    return "0";

    vector<int> result(n1 + n2, 0);
    int i_n1 = 0;
    int i_n2 = 0;

    for (int i=n1-1; i>=0; i--){
        int car = 0;
        int n1 = num1[i] - '0';

        i_n2 = 0;
        for (int j=n2-1; j>=0; j--){
            int n2 = num2[j] - '0';
            int sum = n1*n2 + result[i_n1 + i_n2] + car;
            car = sum/10;
            result[i_n1 + i_n2] = sum % 10;
            i_n2++;
        }

        if (car > 0)
            result[i_n1 + i_n2] += car;
        i_n1++;
    }
    int i = result.size() - 1;
    while (i>=0 && result[i] == 0)
        i--;
    if (i == -1)
        return "0";

   string s = "";
    while (i >= 0)
        s += std::to_string(result[i--]);

    return s;
}

int main(){
    string str;
    cin>>str;
    string n = division(str, 2);
    str = diff(str, "1");
    cout << multi(str, n);
    return 0;
}
