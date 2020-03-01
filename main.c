#include <stdio.h>

int main() {
    int i, max;
    max = 100;
    for(i = 1; i  <= max;  i ++) {
        if((i % 3) == 0) {
            printf("Fizz");
        }
        if((i % 5) == 0) {
            printf("Buzz");
        }
        if(i % 3 && i % 5) {
            printf("%d",i);
        }
        putchar('\n');
    }
    return 0;
}