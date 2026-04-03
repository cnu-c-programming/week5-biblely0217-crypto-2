#include <stdio.h>

int main() {
    int a = 10, b = 20;

    int *const p = &a;

    *p = 30;

    printf("%d\n", *p);

    return 0;
}