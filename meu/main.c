
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

#define normalcolor 15
#define highlightcolor 121

struct employee
{
    int id;
    char name[20];
    float salary;
    char mobile[12];
};

void textattr(int i)
{
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);

}
void gotoxy(int x,int y)
{
   COORD coord={0,0};
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }

void drowmenu(char * , int , int);
void fillemployee (struct employee *);
void displayemployee (struct employee *);

int main()
{

    int size = 5;
    char menuitems[5][25] = {"fill employee", "edit", "print employee", "print employee all", "Exit"};
    int currentitem = 0;
    int quit = 0;
    char c;
    int number;

    struct employee emp_arr[5];
    struct employee * emp_ptr;
    emp_ptr = emp_arr;





   textattr(normalcolor);
      struct employee *emp_p;
   emp_p=malloc(5*sizeof(struct employee));

do{
       drawmenu(menuitems , size , currentitem);
        c = getch();
        switch(c)
        {
        case -32:
            c = getch();
            switch(c)
            {
            case 72:  ///up
                if(currentitem > 0)
                {
                    currentitem--;
                }
                break;
            case 80:  ///down
                if(currentitem < size-1)
                {
                    currentitem++;
                }
                break;

            default:
                printf("\nASCII of this key is %i", c);
                getch();
                break;
            }
            break;

        case 13:  //enter
              system("cls");
          printf("%s \n",menuitems[currentitem]);
          getch();
            switch(currentitem)
            {
            case 0:  ///fill
                system("cls");
                for(int i=0 ; i<5 ; i++)
                {
                    printf("enter data of emp1 %i : \n",i+1);
                    fillemployee(&emp_ptr[i]);
                }
                getchar();
                break;
            case 1:  /// edit
                 system("cls");
                printf("Enter the number of employee you want to edit his data: ");
                scanf("%i", &number);
                fillemployee(&emp_ptr[number-1]);
                getch();

                break;
            case 2:  /// display
                system("cls");
                int index , x;
                    printf("enter index to display: \n");
                    scanf("%i",&index);
                    displayemployee(&emp_ptr[index-1]);
                    scanf("%i",&x);
                break;
            case 3:  ///display all
                 system("cls");
                for(int i=0 ; i<5 ; i++)
                {
                    displayemployee(&emp_ptr[index-1]);
                }
                scanf("%i",&x);
                break;
            case 4:  ///exit
                quit = 1;
                break;
            }
            break;
        case 27:
            quit = 1;
            break;
        }
    }while(quit == 0);

    printf("size= %i \n",sizeof(struct employee));
free(emp_p);
getch();
    return 0;
}

//fun implementation:
void fillemployee (struct employee *emp_ptr)
{
        printf("enter employee id : ");
        scanf("%i",&emp_ptr->id);

        printf("enter employee name : ");
        scanf("%s",&emp_ptr->name);

        printf("enter employee salary : ");
        scanf("%f",&emp_ptr->salary);

        printf("enter employee mobile : ");
        scanf("%s",&emp_ptr->mobile);


}
void displayemployee (struct employee *emp_ptr)
{
        printf("employee id is %i : \n",emp_ptr->id);

        printf("employee name is %s : \n",emp_ptr->name);

        printf("employee salary is %f : \n",emp_ptr->salary);

        printf("employee mobile is %s : \n",emp_ptr->mobile);

}

 void drawmenu(char *menu , int size , int currentitem)
    {
        int col = 40 , row = 7;
        system("cls");
        gotoxy(col,row-1);
        printf("main menu : \n");
for(int i = 0; i < 5; i++)
        {
            gotoxy(col, row+i);
if(currentitem == i)
            {
                textattr(highlightcolor);
                printf("%s", menu);
            }
            else
            {
                textattr(normalcolor);
                printf("%s", menu);
            }
            textattr(normalcolor);
            menu +=25 ;
        }
    }
