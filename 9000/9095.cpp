#include <bits/stdc++.h>
using namespace std;

int d[20];

int main(){
    int n;
    scanf("%d", &n);

    d[0] = 0;
    d[1] = 1;
    d[2] = 2;
    d[3] = 4;

    for(int i = 4; i <= 11; i ++){
        d[i] = d[i - 1] + d[i - 2] + d[i - 3];
    }

    for(int i = 0; i < n; i ++){
        int x;
        scanf("%d", &x);

        printf("%d\n", d[x]);
    }

    return 0;
}