#include<stdio.h>
int main()
{
    int n;
    printf("Enter no of values u want to enter: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the values: \n");
    for(int i=0;i<n;i++)
    {
        printf("Index %d: ",i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the element you would like to search: ");
    int key,count=0;
    scanf("%d", &key);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            printf("key found at index %d",i);
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("\nKey not found!");
    }
    return 0;
}