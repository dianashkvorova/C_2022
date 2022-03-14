#include <stdio.h>
int main()
{
    printf ("Числа, кратные 3: ");
    for (int i=0; i<=100; i++)
    {
        if (i%3==0) 
       {
        printf ("%d  ", i);
        }
    }
    return 0;
}
