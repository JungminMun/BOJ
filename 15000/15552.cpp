#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i ++){
        int a, b;
        scanf("%d%d", &a, &b);

        printf("%d\n", a + b);
    }

    return 0;
}