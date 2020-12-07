#include <bits/stdc++.h>
using namespace std;

char input[82];

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i ++){
        int countt = 0, score = 0;
        scanf("%s", &input);

        for(int j = 0; j < strlen(input); j ++){
            if(input[j] == 'O'){
                countt ++;
            }
            else{
                countt = 0;
            }
            score += countt;
        }

        printf("%d\n", score);
    }

    return 0;
}