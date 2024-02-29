#include <stdio.h>

int main() {
    long long int i, n, rim = 1;

    scanf("%lld", &n);

    for (i = 1; i <= n; i++) {
        rim = (i * rim)%10000;
        //printf("     %d",rim);
    }
   // printf("\n");
    if (n == 0)
        printf("0\n");
    if (rim == 0)
        printf("0000\n");
    else
        printf("%lld\n", rim);

    return 0;
}
