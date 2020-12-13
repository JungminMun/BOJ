#include <bits/stdc++.h>
using namespace std;

char input[102];
int countt;

int main() {
    scanf("%s", input);

    for (int i = 0; i < strlen(input); i ++) {
        if (input[i] == 'n' || input[i] == 'l') {
            if (input[i + 1] == 'j'){
                continue;
            }
        }
        else if (input[i] == 'c' || input[i] == 's' || input[i] == 'z') {
            if (input[i + 1] == '=' || input[i + 1] == '-'){
                continue;
            }
        }
        else if (input[i] == 'd') {
            if (input[i + 1] == '-'){
                continue;
            }
            if (input[i + 1] == 'z' && input[i + 2] == '='){
                continue;
            }
        }

        countt++;
    }

    printf("%d", countt);

    return 0;
}
