#include <bits/stdc++.h>
using namespace std;

int total;

int main(){
    int total_price, price;

    scanf("%d", &total_price);

    for(int i = 0; i < 9; i ++){
        scanf("%d", &price);

        total += price;
    }

    printf("%d", total_price - total);

    return 0;
}