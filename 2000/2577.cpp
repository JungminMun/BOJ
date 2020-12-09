#include <bits/stdc++.h>
using namespace std;

int firstre;
int check[10];

int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    firstre = a * b * c;

    while(1){
        check[firstre % 10] ++;
        firstre = firstre / 10;

        if(firstre < 10){
            check[firstre] ++;
            break;
        }
    }

    for(int i = 0; i < 10; i ++){
        printf("%d\n", check[i]);
    }

    return 0;
}