#include<windows.h>
FILE *fpt;
struct emp {
    char name[50];
    float salary;
    int age;
    int id;
};
struct emp e;

long int size =sizeof(e);
void adddata()
{
    system("cls");
    fseek(fpt, 1, SEEK_END);
    char another = 'y';

    while (another == 'y') {
        printf("\nEnter Name : ");
        scanf("%s", e.name);

        printf("\nEnter Age : ");
        scanf("%d", &e.age);

        printf("\nEnter Salary : ");
        scanf("%f", &e.salary);

        printf("\nEnter EMP-ID : ");
        scanf("%d", &e.id);

        fwrite(&e, size, 1, fpt);

        printf("\nWant to add another"
               " record (Y/N) : ");
        fflush(stdin);

        scanf("%c", &another);
    }
}

menu()
{
    int choice;
    fpt = fopen("Database.txt","r");
    if(fpt==NULL)
    {
        fpt=fopen("Database.txt","r");
    }
    printf("\n\n\n\n\t\t\t\t============="
           "============================="
           "===========");
    printf("\n\t\t\t\t~~~~~~~~~~~~~~~~~~~"
           "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
           "~~~~~");
    printf("\n\t\t\t\t==================="
           "============================="
           "=====");
    printf("\n\t\t\t\t[|:::>:::>:::>::>  "
           "EMPLOYEE MANAGEMENT SYSTEM  <::<:::<:::"
           "<:::|]\t");
    printf("\n\t\t\t\t==================="
           "============================="
           "=====");
    printf("\n\t\t\t\t~~~~~~~~~~~~~~~~~~~~"
           "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
           "~~~");
    printf("\n\t\t\t\t====================="
           "==============================\n");
    system("pause");

    while (1)
    {
        system("CLS");
        printf("\n1. ADD NEW DATA\n");
        printf("\n2. DELETE DATA\n");
        printf("\n3. VIEW DATA\n");
        printf("\n4. EDIT DATA\n");
        printf("\n5. EXIT\n");
        printf("\nENTER YOUR CHOICE\n");
        fflush(stdin);
        scanf("%d",&choice);
    }
           switch(choice)
           {
            case 1:
            adddata();
            break;

            case 2:
            deletedata();
            break;

            case 3:
            viewdata();
            break;

            case 4:
            editdata();
            break;

            case 5:
            fclose(fpt);
            exit(0);
            break;

            default:
            printf("\nINVALID CHOICE");
           }
}
