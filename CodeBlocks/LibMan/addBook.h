struct books
{
    int id;
    char bookName[100];
    char authorName[100];
    char date[12];
}b;

struct student
{
    int id;
    char sName[50];
    char sClass[50];
    int sRoll;
    char bookName[100];
    char date[12];
}s;

FILE *fp;

void addBook()
{
    char myDate[12];
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    sprintf(myDate, "%02d/%02d/%d", tm.tm_mon+1, tm.tm_year + 1900);
    strcpy(b.date, myDate);

    fp = fopen("books.txt", "ab");

    printf("\n*** ADD BOOK ***\n\n");
    printf("Enter Book ID     : ");
    scanf("%d", &b.id);

    printf("Enter Book Name   : ");
    fflush(stdin);
    gets(b.bookName);

    printf("Enter Author Name : ");
    fflush(stdin);
    gets(b.authorName);

    printf("\nBook Added Successfully!\n");

    fwrite(&b, sizeof(b), 1, fp);

    fclose(fp);
}
