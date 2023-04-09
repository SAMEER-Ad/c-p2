#include <stdio.h>

int main() {
    int a[1000],b, n, i, j ;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                b= a[i];
                a[i] = a[j];
                a[j] = b;
            }
        }
    }
    printf("The array in ascending order is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                b = a[i];
                a[i] = a[j];
                a[j] = b;
            }
        }
    }
   printf("\n");
    printf("The array in descending order is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
