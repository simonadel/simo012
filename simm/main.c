#include <stdio.h>
#include <stdlib.h>

int main()
{
    // the firs
   /* int x,ave=0,sum=0;
    int arr[5];
    for(int i=0; i<=5; i++){
    printf("enter grade %i!\n" ,i+1);
    scanf("%i",&arr[i]);
    sum+=arr[i];
    }
    ave=sum/5;
     for(int i=0; i<=5; i++){
    printf("the grade of student %i is %i!\n" ,i+1,arr[i]);

    }
    printf("average = %i",ave);*/

   // the second


/* int sum[3]={};
 int avg [4]={};
   int sgr[3][4];
    for(int i=0; i<3; i++){
             for(int j=0; j<4; j++){
                 printf("enter grade %i in course %i\n",i+1,j+1 );
                   scanf("%i",&sgr[i][j]);

             }
    }
     for(int i=0; i<3; i++){
             for(int j=0; j<4; j++){
                 printf("print grade %i in course %i is %i\n",i+1,j+1,sgr[i][j] );

                 sum[i]+=sgr[i][j];
                   avg[j]+=sgr[i][j];

                    }
             }
             for (int i=0;i<3; i++){
                  printf("print sum = %i is %i\n",i+1,sum[i] );

             }
                 for (int i=0;i<4; i++){
                  printf("print average = %i is %i\n",i+1,avg[i]);

             }*/
int stu[3][4];
 int sum[3]={0}, avr[4]={};
 int i, j;
 for (i=0; i<3; i++) {
  for (j=0; j<4; j++) {
   printf("Enter grade for student %i in course \n", i+1, j+1);
   scanf("%i", &stu[i][j]);
   sum[i] += stu[i][j];
   avr[j]+= stu[i][j];
  }
 }

 for (i=0; i<3; i++) {
  for (j=0; j<4; j++) {
   printf("The grade for student %i in course %i is %i \n", i+1, j+1, stu[i][j]);
   //scanf("%i", &stu[i][j]);
   /*sum[i] += stu[i][j];
   avr[j] += stu[i][j];*/
  }
 }

 for (i=0; i<3; i++) {
  printf("The sumetion of student %i is %i \n", i+1, sum[i]);
 }

 for (i=0; i<4; i++) {
  printf("The avrage of course %i is %i \n", i+1, avr);

 }

    return 0;
}
