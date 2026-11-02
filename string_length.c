#include<stdio.h>
int main()
{
    char name[100];
    int count=0;
    printf("Enter you name:\n");
    scanf("%99s",name);
    while(name[count] != 0)
    {
        count=count+1;
    }
    printf("The number if words: %d\n",count);
    return 0;
}