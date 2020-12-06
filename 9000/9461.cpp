#include <bits/stdc++.h>
using namespace std;

long long int d[111];

int main(){
    int n;
    scanf("%d", &n);

    d[1] = 1;
    d[2] = 1;
    d[3] = 1;

    for(int i = 4; i <= 101 ; i ++){
        d[i] = d[i - 2] + d[i - 3];
    }

    for(int i = 0; i < n; i ++){
        int x;
        scanf("%d", &x);

        printf("%lld\n", d[x]);
    }

    return 0;
}