#include<stdio.h>
int main()
{
    int r,c,i,j;
    int mat[10][10];
    printf("Enter the Dimensions of Array: \n");
    scanf("%d,%d",&r,&c);
    if(r<1 || r>10 || c<1 || c>10)
    {
        fprintf(stderr, "Error: The dimensions must be between 1 and 10\n");
        return 1;
    }
    printf("Enter the data entries:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("The Matrix is given as:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}