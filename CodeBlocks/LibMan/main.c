#include <stdio.h>
#include <stdlib.h>
#include "splash.h"

int main(void)
{
    splash();
    sleep(5);

    int ch;

    while(1)
    {
        system("cls");
        printf("1. Add Book         : \n");
        printf("2. Book List        : \n");
        printf("3. Remove Book      : \n");
        printf("4. Issue Book       : \n");
        printf("5. Issue Book List  : \n\n");
        printf("0. Exit \n\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 0:
            exit(0);

        case 1:
           addBook();
            break;

        case 2:
            bookList();
            break;

        case 3:
            del();
            break;

        case 4:
            issueBook();
            break;

        case 5:
            issueList();
            break;

        default:
            printf("Invalid Choice! \n\n");
        }
        printf("Press any key to continue...");
        getchar();
    }


}
