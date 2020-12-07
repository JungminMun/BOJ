#include <bits/stdc++.h>
using namespace std;

int maxx = -99999, maxxi;

int main(){
    int x;

    for(int i = 0; i < 9; i ++){
        scanf("%d", &x);

        if(x > maxx){
            maxx = x;
            maxxi = i;
        }
    }

    printf("%d\n%d", maxx, maxxi + 1);

    return 0;
}