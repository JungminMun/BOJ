#include <bits/stdc++.h>
using namespace std;

int main(){
    int score;
    scanf("%d" ,&score);

    if(score >= 90 && score <= 100){
        printf("A");
    }
    else if(score >= 80 && score <= 89){
        printf("B");
    }
    else if(score >= 70 && score <= 79){
        printf("C");
    }
    else if(score >= 60 && score <= 69){
        printf("D");
    }
    else{
        printf("F");
    }

    return 0;
}