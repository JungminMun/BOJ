#include <bits/stdc++.h>
using namespace std;

int maxx = -9999, maxxi;

int main(){
    for(int i = 0; i < 5; i ++){
        int score, sum = 0;
        for(int j = 0; j < 4; j ++){
            scanf("%d", &score);

            sum += score;
        }

        if(sum > maxx){
            maxx = sum;
            maxxi = i;
        }
    }

    printf("%d %d", maxxi + 1, maxx);

    return 0;
}