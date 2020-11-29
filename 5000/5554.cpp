#include <bits/stdc++.h>
using namespace std;

int totaltime;

int main(){
    int sec;

    for(int i = 0; i < 4; i ++){
        scanf("%d", &sec);

        totaltime += sec;
    }

    printf("%d %d", (totaltime/60), totaltime - (60 * (totaltime / 60)));

    return 0;
}