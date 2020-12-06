#include <bits/stdc++.h>
using namespace std;

int d[99];

int main(){
    int n;
    scanf("%d", &n);

    d[0] = 0;
    d[1] = 1;

    for(int i = 2; i <= n; i ++){
        d[i] = d[i - 1] + d[i - 2];
    }

    printf("%d", d[n]);

    return 0;
}