#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40};
    int *p = arr;
    int **pp = &p;

    printf("%p\n", (void*)arr);

    for (int i = 0; i < 4; i++) {
        printf("%p %ld\n", (void*)(pp + i), (long)((char*)(pp + i) - (char*)pp));
    }

    return 0;
}