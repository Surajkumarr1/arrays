#include <stdio.h>
int main() {
    int a[n], i, sum = 0;

    printf("Enter n numbers:\n");

    for(i = 0; i < n; i++) {  // write any number in place of  n
        scanf("%d", &a[i]); 
        sum += a[i];
    }

    printf("Sum = %d", sum);

    return 0;
}
