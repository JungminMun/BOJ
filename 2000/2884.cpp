#include <bits/stdc++.h>
using namespace std;

int totaltime;

int main(){
    int h, m;
    scanf("%d%d", &h, &m);

    totaltime = (h * 60) + m;

    if(totaltime >= 45){
        totaltime = totaltime - 45;
        printf("%d %d", (totaltime/60), totaltime - (60*(totaltime/60)));
    }
    else{
        printf("23 %d", totaltime + 15);
    }

    return 0;
}