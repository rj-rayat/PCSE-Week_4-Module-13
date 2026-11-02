#include <stdio.h>


int even_odd_1(int a)
{
    if(a % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int even_odd_2 ()
{
    int a;
    scanf("%d", &a);

    if (a % 2 ==0 )
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
}
void even_odd_3 ()
{
    

    // if (a % 2 ==0 )
    // {
    //     printf("Even\n");
    // }
    // else
    // {
    //     printf("Odd\n");
    // }
}
int main()
{
    int a;
    scanf("%d", &a);

    int result1 = even_odd_1(a);

    if (result1 == 1)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }

   

    even_odd_2();

    int s;
    scanf("%d", &s);

    even_odd_3();
   
}