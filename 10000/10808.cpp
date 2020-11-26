#include <bits/stdc++.h>
using namespace std;

int main(){
    char S[103];
    int output[26] = {0};

    scanf("%s", &S);
    
    for(int i = 0; i < strlen(S); i ++){
        output[S[i] - 'a'] ++;
    }

    for(int i = 0; i < 26; i ++){
        printf("%d ", output[i]);
    }

    return 0;
}