#include <bits/stdc++.h>
using namespace std;

int score[1002], maxx = -99999;
double totscore;

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i ++){
        scanf("%d", &score[i]);

        if(score[i] > maxx){
            maxx = score[i];
        }
    }

    for(int i = 0; i < n; i ++){
        totscore += ((double)score[i] / maxx) * 100;
    }

    printf("%.2f", totscore / n);

    return 0;
}