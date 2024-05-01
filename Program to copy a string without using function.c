#include<stdio.h>
int main()
{
    char s1[20]="Computer";
    char s2[20];
    int i;
    for(i=0;s1[i]!='\0';i++)
    {
        s2[i]=s1[i];
    }
    s2[i]='\0';
    printf("output %s",s2);
    return 0;

}