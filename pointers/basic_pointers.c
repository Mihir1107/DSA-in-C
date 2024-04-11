#include<stdio.h>
int main()
{
    int a;       //normal integer
    int* ptra;  // pointer to store the address of a
    printf("Enter value for a: ");
    scanf("%d",&a);

    ptra=&a;    //Assigning address of a to ptra

    printf("Address of a: %p\n",&a);
    printf("Address of a using pointer: %p\n",ptra);

    printf("Address of pointer: %p",&ptra);
    
    printf("\n\nValue of a: %d",a);
    printf("\nValue of a using pointer: %d\n",*ptra); //getting value of a using dereferencing operator(*)

    return 0;
}