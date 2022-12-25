void login()
{
    char user[10];
    char pass[10];
    int i, a = 0 ;

    do
    {
        printf("\n\n*** LOGIN FORM ***\n");
        printf("\nEnter Username: ");
        scanf("%s", user);
        printf("Enter Password: ");

        for(i=0; i<4; i++)
        {
            pass[i] = getch();
            printf("*");
        }

        pass[i] = '\0';

        if((strcmpi(pass, "1234") == 0) && (strcmp(user, "user") == 0))
        {
            printf(" \n\nWELCOME TO LIBRARY MANAGEMENT SYSTEM! \n\nPress ANY key to continue...");
            getch();
            break;
        }
        else
            printf("\n\nLogin is unsuccessful! \n\nPress ANY key to try again.");

        a++;
        getch();

    } while(a);
}
