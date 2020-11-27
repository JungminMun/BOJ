#include <bits/stdc++.h>
using namespace std;

int minn = 1000001, maxx = -1000001;
 
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        int x;
        scanf("%d", &x);
        if (x > maxx){
            maxx = x;
        }
        if (x < minn){
            minn = x;
        }
    }
    printf("%d %d", minn, maxx);
 
    return 0;
}
