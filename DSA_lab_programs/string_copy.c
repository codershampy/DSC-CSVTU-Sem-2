#include<stdio.h>
int main()
{
    char scr[]="hello";
    char dest[100];
    int i;
    for(i=0;scr[i]!='\0';i++)
    {
        dest[i]=scr[i];
    }
    dest[i]='\0';
    printf("Copied String:%s\n",dest);
    return 0;
}