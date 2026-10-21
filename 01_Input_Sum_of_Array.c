#include<stdio.h>
int main()
{
    int num[5];
    int sum=0;
    int i;
    printf("Enter 5 Integers:\n");
    for(i=0;i<5;i++)
    {
        printf("Enter the integer for index [%d] \n",i);
        scanf("%d",&num[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+num[i];
    }
    printf("\n---Results---\n");
    printf("The Number you entered are:");
    for(i=0;i<5;i++)
    {
        printf("%d ",num[i]);
    }
    printf("\nThe total of all the numbers: %d\n",sum);
    return 0;
}