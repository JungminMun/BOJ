#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    scanf("%d%d", &x, &y);

    if(x > 0 && y > 0){
        printf("1");
    }
    else if(x > 0 && y < 0){
        printf("4");
    }
    else if(x < 0 && y > 0){
        printf("2");
    }
    else{
        printf("3");
    }

    return 0;
}