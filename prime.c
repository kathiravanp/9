#include<stdio.h>
int main()
{
    int i,num,count;
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
          {
            count++;
    }
    }

        if(count==0)
            printf("%d is a prime number",i);
            else
                printf("%d is a not a prime number",i);

}

