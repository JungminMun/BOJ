#include <bits/stdc++.h>
using namespace std;

stack <int> s;

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i ++){
        string input;
        cin >> input;

        if(input == "push"){
            int X;
            scanf("%d", &X);

            s.push(X);
        }
        else if(input == "pop" || input == "top" ){
            if(s.empty()){
                printf("-1\n");
            }
            else if(input == "pop"){
                printf("%d\n", s.top());
                s.pop();
            }
            else{
                printf("%d\n", s.top());
            }
        }
        else if(input == "size"){
            cout << s.size() << "\n";
        }
        else{
            printf("%d\n", s.empty());
        }
    }

    return 0;
}