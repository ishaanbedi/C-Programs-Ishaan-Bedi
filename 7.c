// An array of records contains information about managers and workers of a company. Print all the data of managers and workers


#include<stdio.h>
 
int main()
{
char mg[6][6],ws[6][6];
int n,m,i,j,k;
printf("Enter number of managers to enter data- ");
scanf("%d",&n);
printf("Enter data in format (Name,Age,Sex)\n");
for (i=0;i<n;i++) {
    printf("Enter details of manager%d-\n",i+1);
    for (j=0;j<3;j++) {
        scanf("%s",&mg[i][j]);
    }
}
printf("Enter number of workers to enter data- ");
scanf("%d",&m);
for (i=0;i<m;i++) {
    printf("Enter details of worker%d-\n",i+1);
    for (j=0;j<3;j++) {
        scanf("%s",&ws[i][j]);
    }
}
printf("Manager's details is-\n");
for (i=0;i<n;i++) {
    for (j=0;j<n;j++) {
        printf("%c  ",mg[i][j]);
    }
    printf("\n");
}
printf("Worker's details is-\n");
for (i=0;i<m;i++) {
    for (j=0;j<m;j++) {
        printf("%c  ",ws[i][j]);
    }
    printf("\n");
}
return 0;
}
