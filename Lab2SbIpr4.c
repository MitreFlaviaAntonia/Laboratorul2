#include<stdio.h>
int main()
{

    int v[100],nrpassexam,numberofstudents,procent,i;
    float percent;

    nrpassexam=0;
    procent=0;

    printf("The number of students is:");
    scanf("%d",&numberofstudents);


        for(i=1;i<=numberofstudents;i++)
            {
                printf("v[");
                printf("%d",i);
                printf("]=");
                scanf("%d",&v[i]);
                printf("\n");

                    if(v[i]>=5)

                        nrpassexam=nrpassexam+1;


                        if(v[i]<=8)

                            procent=procent+1;

            }

                                percent=(float)procent/ (float)numberofstudents;

                                    printf("The number of the students that had pass the exam is:%d",nrpassexam);

                                        printf("\nThe percent of students that had grades under 8 is:%f",percent);
}
