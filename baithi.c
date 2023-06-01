#include <stdio.h>

int isEvenNumber( int a);
    int main()
{
    int n, m;
    printf("Please, enter a num ber: \n + n: ");
    scanf("%d", &n);
    printf(" + m: ");
    scanf("%d", &m);
    printf("The event numbers between 1 and 8: \n");
    for( int i = n +1; i < m; i++)
    {
        if(isEvenNumber(i) == 1)
            printf("%d\n", i);
    }
   return 0;
}
int isEvenNumber( int a)
{   if(a % 2 == 0)
        return 1;
    else
        return 0;
}