#include<stdio.h>
#include<dos.h>
#include<conio.h>
#include"SplashScreen.h"
#include"Login.h"
int main()
{
    int c;
    SplashScreen();
    sleep(5);
    system("cls");
    printf("Press 1 to Register\nPress 2 to Login\n");
    scanf("%d",&c);
    if(c==1)
    {
        system("CLS");
        regi();
    }
    else if(c==2)
    {
        system("CLS");
        login();
    }

    return 0;
}
