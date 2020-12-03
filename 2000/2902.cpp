#include <bits/stdc++.h>
using namespace std;

char input[105];

int main(){
    scanf("%s", &input);

    for(int i = 0; i < strlen(input); i ++){
        if(input[i] >= 'A' && input[i] <= 'Z'){
            printf("%c", input[i]);
        }
    }

    return 0;
}