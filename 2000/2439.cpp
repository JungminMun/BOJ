#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i ++){
        for(int j = 1; j <= n - i; j ++){
            printf(" ");
        }
        for(int j = n - i; j <= n - 1; j ++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}