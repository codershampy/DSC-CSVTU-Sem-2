#include<stdio.h>
int main()
{
    char str[]="hello";
    char reversed[100];
    int length,i;

    for(length=0;str[length]!='\0';length++);

    for(i=0;i<length;i++)
    {
        reversed[i]= str[length-1-i];
    }
    reversed[length]='\0';
    printf("Reversed string:%s\n",reversed);
    return 0;
}