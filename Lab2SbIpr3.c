#include<stdio.h>
int main()
{

    int n,min,max,x,i;
    i=1;

        printf("The number of elements is: ");
        scanf("%d", &n);

        printf("The first value of the sequence is: ");
        scanf("%d", &x);

        max=x;
        min=x;

                while(i<n)
                {
                   i++;
                   printf("\nRead the next value of the sequence: ");
                   scanf("%d", &x);

                    if(x>max)
                                max=x;

                    if(x<min)
                                min=x;
                }

                        printf("\n The maximum value of the sequence is: %d", max);
                        printf("\n The minimum value of the sequence is: %d", min);

                            return 0;
}
