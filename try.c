#include <stdio.h>

void meow(int n);
int get_positive_int(void);

int main(void)
{
    int times = get_positive_int();
    meow(times);
}

void meow(int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Kit tu mamu meow\n");
    }
}

int get_positive_int(void)
{
    int n;
    do 
    {
        n = get_int("Enter how many times: \n");
    } while( n < 1);
    meow(n);
    return n;
}