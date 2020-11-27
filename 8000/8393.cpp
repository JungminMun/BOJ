#include <bits/stdc++.h>
using namespace std;

int output;

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i ++){
        output += i;
    }

    printf("%d", output);

    return 0;
}