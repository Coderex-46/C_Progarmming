#include<stdio.h>
int main()
{
    int arr[50];
    int n,i,key,count=0;
    printf("Enter the number of entries:\n");
    scanf("%d",&n);
    if(n>50 || n<=0)
    {
        printf("Invalid size; Must be between 1 and 50\n");
        return 1;
    }
    printf("Enter the entries in the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the Number to be searched:\n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(arr[i] == key)
        {
            printf("Key found at %d\n",i);
            count=count+1;
        }
    }
    if(count == 0)
    {
        printf("Key not found\n");
    }
    else
    {
        printf("Count of key is : %d\n",count);
    }
    return 0;
}