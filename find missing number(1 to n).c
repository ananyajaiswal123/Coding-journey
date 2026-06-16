#include <stdio.h>

int main() {
    int n, i, sum = 0, total;

    printf("Enter size (n-1): ");
    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    total = (n+1)*(n+2)/2;

    printf("Missing number = %d", total - sum);
    return 0;
}