#include <bits/stdc++.h>
using namespace std;

int score[1002];

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i ++){
        int x, averlist = 0;
        double ascore = 0;
        scanf("%d", &x);

        for(int j = 0; j < x; j ++){
            scanf("%d", &score[j]);

            ascore += score[j];
        }

        ascore = (double)ascore / x;

        for(int j = 0; j < x; j ++){
            if(score[j] > ascore){
                averlist ++;
            }
        }

        printf("%.3f%%\n", ((double) averlist / x) * 100);
    }

    return 0;
}