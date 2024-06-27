#include<stdio.h>
int elie ( int n )
{
    int u = n, s = 0;
    while ( u )
    {
        s += u % 10;
        u /= 10;
    }
    if ( s == 0 )
        return 1;
    else if ( n % s == 0 )
        return 1;
    else
        return 0; 
}
int main ()
{
    int k, i = 0;
    printf(" so... how many navin numbers do you wanna have? ");
    scanf ("%d", &k);
    printf("there you go honey %d navin numbers for you: ", k);
    while ( k )
    {
        if ( elie ( i ) )
        {
            printf("%d\t", i);
            k--;
        }
        i++;
    }
    return 0;
}
