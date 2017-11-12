#include<stdio.h>
int main()
    {

        int x,y,p;

        printf("Give the value for the base: ");
        scanf("%d",&x);
        printf("\nGive the value for the exponent: ");
        scanf("%d",&y);

        int power(int base,int exponent)
        {

            int i,x=1;

            for(i=1;i<=exponent;i++)
            {
                x=x*base;
            }
            return x;
        }

        p=power(x,y);
        printf("The value after using the function power is: ");
        printf("%d",p);

    }
