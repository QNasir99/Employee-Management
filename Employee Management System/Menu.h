#include<windows.h>
menu()
{
    int choice;
    FILE *fpt;
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
