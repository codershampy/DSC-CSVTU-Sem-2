#include<stdio.h>
int main()
{
    char s1[]="csvtu";
    int length =0;
    int i;
    for(int i=0;s1[i]!=0;i++)
    {
        length++;
    }
    printf("Length of string:%d\n",length);
    return 0;
    
}