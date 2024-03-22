#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    char b[] = "UUDDLRLRBA";
    char a[10000];
    scanf("%[^\n]", a);
    int l = strlen(a);
    int c = 0;
    char d[10000];

    for (int i = 0; i <l; i++) {
        strncpy(d, &a[i], strlen(b));
        d[strlen(b)] = '\0'; // Null-terminate the copied substring
        if (strcmp(d, b) == 0)
        {
            c++; // Increment count if the copied substring matches "UUDDLRLRBA"
        i+=strlen(b); ///start count from the next and escape words because they are counted
        i--;
        }
    }
    printf("%d\n", c);
    return 0;
}
