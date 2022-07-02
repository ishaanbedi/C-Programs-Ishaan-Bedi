//Write a program to copy one file to another, and use command-line arguments.
#include <stdio.h>
int main()
{
	FILE *fp1, *fp2;
	fp1 = fopen("file1.txt", "r");
	fp2 = fopen("file2.txt", "w");
	char c = fgetc(fp1);
	while (c != EOF)
	{
		fputc(c, fp2);
		c = fgetc(fp1);
	}
    printf("Task completed successfully!");
	fclose(fp1);
	fclose(fp2);
	return 0;
}
