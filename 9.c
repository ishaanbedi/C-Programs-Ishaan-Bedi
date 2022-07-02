// Write a Program to store records of a student in a student file. The data must be stored using Binary File. Read the record stored in the "Student.txt" file in Binary code. Edit the record stored in Binary File, Append a record in the Student file.

#include <stdio.h>
void create()
{
    printf("Writing content to the file\n");
    char name[50];
    int marks, i, num;
    printf("Enter number of students: ");
    scanf("%d", &num);
    FILE *fptr;
    fptr = fopen("student.bin", "wb");
    for (i = 0; i < num; ++i)
    {
        printf("\nName of student %d: ", i + 1);
        scanf("%s", name);

        printf("Marks of %s: ", name);
        scanf("%d", &marks);

        fprintf(fptr, "\nName: %s \nMarks=%d \n", name, marks);
    }
    fclose(fptr);
}

void read()
{
    printf("Reading content from the file\n");
    FILE *fptr;
    fptr = fopen("student.bin", "rb");
    char ch[100];
    int ret = fread(ch, 1, 100, fptr);
    ch[ret] = '\0';
    printf("%s\n", ch);
    fclose(fptr);
}

void append()
{
    printf("Appending content to the file\n");
    FILE *fptr;
    fptr = fopen("student.bin", "ab");
    char name[50];
    int marks, i, num;
    printf("Enter number of students you'd like to append: ");
    scanf("%d", &num);
    for (i = 0; i < num; ++i)
    {
        printf("\nName of student %d: ", i + 1);
        scanf("%s", name);
        printf("Marks of %s: ", name);
        scanf("%d", &marks);
        fprintf(fptr, "\nName: %s \nMarks=%d \n", name, marks);
    }

    fclose(fptr);
}

void menu()
{
    printf("Press 1 to create file!\n");
    printf("Press 2 to read file!\n");
    printf("Press 3 to append in file!\n");
    printf(">>> ");
}
int main()
{
    menu();
    int num;
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        create();
        break;
    case 2:
        read();
        break;
    case 3:
        append();
        break;

    default:
        printf("Invalid Option selected\n");
    }
    return 0;
}