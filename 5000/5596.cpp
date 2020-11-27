#include <bits/stdc++.h>
using namespace std;

int misum, masum;

int main(){
    int score;

    for(int i = 0; i < 4; i ++){
        scanf("%d", &score);

        misum += score;
    }
    for(int i = 0; i < 4; i ++){
        scanf("%d", &score);

        masum += score;
    }

    printf("%d", max(misum, masum));
}