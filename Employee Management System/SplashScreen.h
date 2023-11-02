void SplashScreen(void)
{
    //declaring pointer and variables
    FILE *fp;
    char c;
    //opening file
    fp = fopen("Splash.txt","r");
    //in case file did not open or cannot be found
    if (fp==NULL)
    {
        printf("Error");
    }
    //reading contents from file
    c = fgetc(fp);
    //running loop until end of file
    while(c!=EOF)
    {
        printf("%c",c);
        c = fgetc(fp);
    }
    fclose(fp);
}
