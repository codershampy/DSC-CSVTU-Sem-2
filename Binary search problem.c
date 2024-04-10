#include<stdio.h>
int main()
{
    int i,n,l,h,mid,key;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements in the sorted order\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("Enter the elements to search:");
    scanf("%d",&key);
    l=0;
    h=n-1;
    while(l<=h){
        mid=l+h/2;
        if(array[mid]==key)
        {
            printf("%d found at the location %d",key,mid);
        }
        else if(array[mid]<key)
        l=mid+1;
        else
        h=mid-1;
    }
    if(l>h){
        printf("The element is not found");
    }
    return 0;
}