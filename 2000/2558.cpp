#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    scanf("%d%d", &x, &y);

    printf("%d\n", x*(y%10));
    printf("%d\n", x*((y/10)%10));
    printf("%d\n", x*((y/10)/10));
    printf("%d", x*y);

    return 0;
}