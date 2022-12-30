void del()
{
    int id, f=0;

    system("cls");
    printf("<== Remove Books ==>\n\n");
    printf("Enter Book id to remove: ");
    scanf("%d", &id);

    FILE *ft;

    fp = fopen("books.txt", "rb");
    ft = fopen("temp.txt", "wb");

    while(fread(&b, sizeof(b), 1, fp) == 1)
        {
        if(id == b.id)
            {
            f=1;
            }
        else
            {
            fwrite(&b, sizeof(b), 1, ft);
            }
        }

    if(f == 1)
        {
        printf("\n\nDeleted Successfully.");
        }
    else
        {
        printf("\n\nRecord Not Found !");
        }

    fclose(fp);
    fclose(ft);

    remove("books.txt");
    rename("temp.txt", "books.txt");
}
