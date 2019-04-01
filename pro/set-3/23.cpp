#include<bits/stdc++.h>
using namespace std;

int main(){
    string paths;
    cin>>paths;
    char direction = 'x';
    int x = 0, y = 0;
    for(int i=0; i<paths.length(); i++){
        if(paths[i] == 'G'){
            if(direction == 'x')
                x++;
            else if(direction == 'X')
                x--;
            else if(direction == 'y')
                y++;
            else if(direction == 'Y')
                y--;
        }else if(paths[i]=='L'){
            if(direction == 'x')
                direction = 'y';
            else if(direction == 'X')
                direction = 'Y';
            else if(direction == 'y')
                direction = 'X';
            else if(direction == 'Y')
                direction = 'x';
        } else if(paths[i]=='R'){
            if(direction == 'x')
                direction = 'Y';
            else if(direction == 'X')
                direction = 'y';
            else if(direction == 'y')
                direction = 'x';
            else if(direction == 'Y')
                direction = 'X';
        }
    }
    if(x==0 && y==0)
        cout<<"yes";
    else
        cout<<"no";
    return 0;
}
