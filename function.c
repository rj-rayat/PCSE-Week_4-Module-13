#include <stdio.h>


int sum(int a, int b);
int mul(int a, int b);

int main()
{
    int total = sum(10, 15);
    int multi = mul(10, 15);
    printf("%d %d\n", total, multi);
}

int sum(int a, int b)
{
    int total = a + b;
    return total;
}
int mul(int a, int b)
{
    int total = a * b;
    return total;
}