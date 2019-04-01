#include<bits/stdc++.h>
using namespace std;

int main(){
    string path;
    cin>>path;
    char dir = 'x';
    int x = 0, y = 0;
    for(int i=0; i<path.length(); i++){
        if(path[i] == 'G'){
            if(dir == 'x')
                x++;
            else if(dir == 'X')
                x--;
            else if(dir == 'y')
                y++;
            else if(dir == 'Y')
                y--;
        }else if(path[i]=='L'){
            if(dir == 'x')
                dir = 'y';
            else if(dir == 'X')
                dir = 'Y';
            else if(dir == 'y')
                dir = 'X';
            else if(dir == 'Y')
                dir = 'x';
        } else if(path[i]=='R'){
            if(dir == 'x')
                dir = 'Y';
            else if(dir == 'X')
                dir = 'y';
            else if(dir == 'y')
                dir = 'x';
            else if(dir == 'Y')
                dir = 'X';
        }
    }
    if(x==0 && y==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
