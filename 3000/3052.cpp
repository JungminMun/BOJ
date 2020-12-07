#include <bits/stdc++.h>
using namespace std;

bool check[1009];
int countt;

int main(){
    int x;
    for(int i = 0; i < 10; i ++){
        scanf("%d", &x);

        if(check[x % 42] == false){
            countt ++;
            check[x % 42] = true;
        }
    }

    printf("%d", countt);

    return 0;
}