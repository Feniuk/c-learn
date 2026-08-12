#include <stdio.h>

int main() {
    char x[50] = "Messi";
    char *p = &x[0];
    printf("%p, %c \n", p, *p);
}