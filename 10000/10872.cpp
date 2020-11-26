#include <bits/stdc++.h>
using namespace std;

int f(int x){
    if(x > 1){
        return x * f(x - 1);
    }
    else{
        return x;
    }
}

int main(){
    int n;
    scanf("%d", &n);

    if(n == 0 || n == 1){
        printf("1");
    }
    else{
        printf("%d", f(n));
    }

    return 0;
}