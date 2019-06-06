#include<stdio.h>
int main()
{
    int num,i;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(num%2==0)
        {
            printf("even");
        }
        else
        {
        printf("odd");
        }
    }
}
