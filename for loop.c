#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("\n Enter A Number : ");
    scanf("%d", &n);
    for (i = 1; i < n / 2; i++)

    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
        
    }
 if ( sum == n && n != 0)
 {
    printf("It Is A Perfect Number");
 }
 else
 {
    printf("It Is Not A Perfect Number");
    return 0;
 }
 
}