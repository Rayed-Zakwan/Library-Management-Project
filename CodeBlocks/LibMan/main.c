#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "splash.h"
#include "addBook.h"
#include "bookList.h"
#include "logIn.h"

int main(void)
{
    int ch;

    splash();
    sleep(1);
    system("cls");

    login();

    while(1)
    {
        system("cls");
        printf("LIBRARY MANAGEMENT SYSTEM\n\n");
        printf("1. Add Book\n");
        printf("2. Books List\n");
        printf("3. Remove Book\n");
        printf("4. Issue Book\n");
        printf("5. Issued Book List\n\n");
        printf("0. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
        case 0:
            exit(0);

        case 1:
            addBook();
            break;

        case 2:
            booksList();
            break;

        /*case 3:
            del();
            break;

        case 4:
            issueBook();
            break;

        case 5:
            issueList();
            break;*/

        default:
            printf("Invalid Choice...\n\n");

        }
        printf("\nPress ANY key to continue...");
        getch();
    }

    return 0;
}
