#include<stdio.h>
int main()
{
    int num[5];
    int i;
    printf("Enter 5 Integers\n");
    for(i=0;i<5;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<5;i++)
    {
    if(num[i]%2 == 0)
    {
        printf("%d is even at index [%d]\n",num[i],i);
    }
}
return 0;
}