#include<stdio.h>
int main(){
    int xA,yA;
    printf("Abscisa punctului A este: ");
    scanf("%d",&xA);
    printf("\n Ordonata punctului A este: ");
    scanf("%d",&yA);
    if ((xA==0)&&(yA==0))

            printf("\nNiciun cadran, punctul A este originea sistemului.");

    if((xA>0)&&(yA>0))

        printf("Cadranul I");

    if((xA<0)&&(yA>0))

        printf("Cadranul II");

    if((xA<0)&&(yA<0))

        printf("Cadranul III");

     if((xA>0)&&(yA<0))

        printf("Cadranul IV");
    }
