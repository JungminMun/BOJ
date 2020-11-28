#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i ++){
        int x, y;
        scanf("%d%d", &x, &y);
        printf("Case %d: %d\n", i, x + y);
    }

    return 0;
}