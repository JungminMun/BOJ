#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y, chicken;
    scanf("%d%d%d", &x, &y, &chicken);

    if(chicken * 2 > x + y){
        printf("%d", x + y);
    }
    else{
        printf("%d", (x + y) - (chicken * 2));
    }

    return 0;
}