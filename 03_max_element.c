#include<stdio.h>
int main()
{
    int num[5];
    int i,max;
    printf("Enter 5 Integers\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
    }
    max=num[0];
    for(i=0;i<5;i++)
    {
        if(num[i]>max)
        {
            max=num[i];
        }
    }
    printf("The Maximum Number is: %d\n",max);
    return 0;
}