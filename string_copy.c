#include<stdio.h>
int main()
{
    char src[100];
    char dest[100];
    int i=0;
    printf("Enter the elements to be copied:\n");
    scanf("%99[^\n]", src);
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    printf("The elements in source:%s\n",src);
    printf("The elements in the destination:%s\n",dest);
    return 0;
}


