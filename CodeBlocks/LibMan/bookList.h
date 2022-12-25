void booksList()
{
    system("cls");
    printf("*** AVAILABLE BOOKS ***\n\n");
    printf("%-10s %-30s %-20s %s\n\n", "Book ID", "Book Name", "Author", "Date");

    fp = fopen("books.txt", "rb");

    while(fread(&b, sizeof(b), 1, fp) == 1)
        {
        printf("%-10d %-30s %-20s %s\n", b.id, b.bookName, b.authorName, b.date);
        }

    fclose(fp);
}
