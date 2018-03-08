#include <stdio.h>

int main() {
    int a, b, x;
    char op;

    do {
        //printf here
        scanf("%d %d", &a, &b);

        x = (-b) / a;

        printf("%d", x);

        printf("\n Wanna leave? Type 'y' if you wanna leave.\n");
        op = getchar();

    }while(op != 'y');

    return 0;
}