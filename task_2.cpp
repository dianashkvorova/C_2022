#include <stdio.h>
int main()
{
    int i;
    int s=0;
    while (i<=1000)
    {
        if(i%7==0)
        {
         s=s+i;   
        }
        i=i+4;  
    }
    printf ("Сумма чисел, кратных 7: %d", s);
    return 0;
}
