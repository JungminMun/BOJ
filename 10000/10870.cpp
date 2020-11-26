#include <bits/stdc++.h>
using namespace std;

int f(int x){
    if(x > 1){
        return f(x - 1) + f(x - 2);
    }
    else{
        return x;
    }
}

int main(){
    int n;
    scanf("%d", &n);

    printf("%d", f(n));
    
    return 0;
}