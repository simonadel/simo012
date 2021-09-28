#include <stdio.h>
#include <stdlib.h>

struct employe{
int id;
char mobil[12];
char name[12];
float sal;

};


int main()
{
    struct employe emp[4];
//fill
for(int i=0; i<4; i++){


    printf("enter employee %i id ",i+1);
    scanf("%i", &emp[i].id);
 printf("enter employee %i name ",i+1);
    scanf("%s",emp[i].name);
     printf("enter employee %i mobil ",i+1);
    scanf("%s",emp[i].mobil);
     printf("enter employee %i sal",i+1);
    scanf("%f",&emp[i].sal);
}
//display
for(int i=0; i<4; i++){
    printf("employee %i id is %i \n ",i+1,emp[i].id);
    printf("employee %i name is %s \n ",i+1,emp[i].name);
    printf("employee %i mobil is %s \n ",i+1,emp[i].mobil);
    printf("employee %i sal is %f \n ",i+1,emp[i].sal);
}
    return 0;
}
