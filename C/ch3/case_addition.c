#include<stdio.h>

int main(void) {
    int a, b, t, i;

    scanf("%d", &t);

    for(i = 0; i < t; i++) {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n", i+1, a+b);
    }

    return 0;
}