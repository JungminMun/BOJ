#include <bits/stdc++.h>
using namespace std;

int cute;

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i ++){
        int x;
        scanf("%d", &x);

        if(x == 0){
            cute --;
        }
        else{
            cute ++;
        }
    }

    if(cute > 0){
        printf("Junhee is cute!");
    }
    else{
        printf("Junhee is not cute!");
    }

    return 0;
}