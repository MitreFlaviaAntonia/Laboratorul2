#include<stdio.h>
int main()
    {
    int x,i,test=1;
    printf("Give the value for x: ");
    scanf("%d",&x);

        for(i=2;i<=x/2;i++)
        {
        if (x%i==0)
                test=0;
        }

            if(test==1)
                printf("The number is prime.");
            else
                printf("The number isn't prime.");
    }
