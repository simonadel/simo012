#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <string.h>
#define normalcolor 15
#define highlighcolor 121
 void gotoxy(int x,int y)
 {
   COORD coord={0,0};
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }


void textattr(int i)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);

}

int main()
{
    int c=40,r=7,size=4,curit=0,quit=0;
    char cr;
    char mainmeun[4][12]={"add","exit","edit","enter"};
    textattr(normalcolor);




do{
  textattr(normalcolor);
    system("cls");
getch();
 gotoxy(c,5);
printf("main meun\n");
for(int i=0; i<5;i++){

gotoxy(c,r+i);
if(curit==i){

    textattr(highlighcolor);
    printf("%s",mainmeun[i]);
}
else{

    textattr(normalcolor);
    printf("%s",mainmeun[i]);
}
textattr(normalcolor);

}

cr=getch();

switch(cr){

case -32: //keys up and down
    cr=getch();

    switch(cr){
     case 72: //up
      if (curit>0){
        curit --;
     }
   break;
     case 80:  //down
     if (curit<size-1){
        curit ++;
     }
   break;

    }

     default:
        printf(" ascii code of this ext key is %i",cr);
        getch();
        break;
    break;
     case 13: //enter
      system("cls");
          printf("%s",mainmeun[curit]);
        getch();
   break;

    case 27: //esc
    quit=1;
  break;
}

}while(quit==0);

   /*char arr[15];
      printf( "enter your name :");
    scanf("%s",arr);
        printf("name %s \n" ,arr);*/


 /*char arr[3][6];

    for (int i=0; i<3; i++){
    printf( "enter your name %i:",i+1);
    scanf("%s",arr[i]);
    }
for ( int i=0; i<3; i++){
    printf("welcome %s \n" ,arr[i]);
}*/


    return 0;
}
