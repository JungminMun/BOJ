#include <bits/stdc++.h>
using namespace std;

int countt;

int main(){
    int n, keep, x, y;
    scanf("%d", &n);
    keep = n;

    while (1){
        x = n / 10;
        y = n % 10;
        n = (y * 10) + ((x + y) % 10);

        countt ++;
        if(n == keep){
            break;
        }
    }

    printf("%d", countt);

    return 0;
}