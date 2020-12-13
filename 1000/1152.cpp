#include <bits/stdc++.h>
using namespace std;

int countt;
string str;

int main(){
    getline(cin,str);

    for(int i = 0; i < str.length(); i ++){
        if(str[i] == ' '){
            countt++;
        }
    }

    if(str[0] == ' '){
        countt --;
    }
    if(str[str.length() - 1] == ' '){
        countt --;
    }

    printf("%d", countt + 1);

    return 0;
}