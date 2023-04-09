#include <stdio.h>

int main() {
    int a;
    printf("Enter an integer :");
    scanf("%d", &a);

    if (a%2 == 0) {
        printf("%d is even number\n", a);
    }
    else {
        printf("%d is odd number\n", a);
    }
    return 0;
}