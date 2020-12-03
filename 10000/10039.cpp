#include <bits/stdc++.h>
using namespace std;

int totalscore;

int main(){
    for(int i = 0; i < 5; i ++){
        int score;
        scanf("%d", &score);

        if(score < 40){
            score = 40;
        }

        totalscore += score;
    }

    printf("%d", totalscore / 5);

    return 0;
}