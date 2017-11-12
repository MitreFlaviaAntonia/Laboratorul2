#include<stdio.h>

int second(int si, int sf)
{
    int st;

    if(sf>=si)
            st=sf-si;
        else
            st=60+sf-si;

                return st;
}



int minute(int mi, int mf)
{
    int mt;

    if(mf>=mi)
            mt=mf-mi;
        else
            mt=60+mf-mi;

                return mt;
}


int hour(int hi, int hf)
{
    int ht;

    ht=hf-hi;

        return ht;
}



int main()
{

    int initialsecond,finalsecond,totalofseconds,initialhour,finalhour,totalofhours,initialminute,finalminute,totalofminutes;

    printf("Give the initial hour: ");
    scanf("%d",&initialhour);

    printf("\nGive the initial minute: ");
    scanf("%d",&initialminute);

    printf("\nGive the initial second: ");
    scanf("%d",&initialsecond);

    printf("\nGive the final hour: ");
    scanf("%d",&finalhour);

    printf("\nGive the final minute: ");
    scanf("%d",&finalminute);

    printf("\nGive the final second: ");
    scanf("%d",&finalsecond);


        if ( finalsecond-initialsecond >= 0)

            totalofseconds=second (initialsecond ,finalsecond);

                else
                {
                    totalofseconds=second (initialsecond ,finalsecond);
                    initialminute=initialminute+1;
                }


                    if(finalminute-initialminute>=0)

                        totalofminutes=minute(initialminute,finalminute);

                            else
                            {
                            totalofminutes=minute(initialminute,finalminute);initialhour=initialhour+1;
                            }


                                totalofhours=hour(initialhour,finalhour);

                                printf("The total time of the race is: ");
                                printf("%d",totalofhours);
                                printf(":");
                                printf("%d",totalofminutes);
                                printf(":");
                                printf("%d",totalofseconds);
}
