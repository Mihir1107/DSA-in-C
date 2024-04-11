#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};       //sample array 
    printf("Value at poition 3 of the array is %d\n",arr[3]); //printing value normally
    printf("Address of the array elements are\n");  
    printf("Address of first element: %d\n",arr);   //printing the address of the array using pointeer
    printf("Address of second element: %d",arr+1);  //printing the address of the next element of the array
    //+1 in address increases the position of array by sizeof(var)
    //in char the address will be incremented by 1 position
    //whereas in int the address will be incremented by 4 position
    //this varies from architecture to architecture
    //but usually size of int datatype is 4
    
    //dereferencing the pointer array using * operator
    printf("\nValue of address at index 0: %d",*(&arr[0])); //dereferencing the address of arr[0]
    printf("\nValue of address at index 0: %d",*(arr));     //dereferencing arr(by default position is 0)
     printf("\nValue of address at index 1: %d",*(&arr[1]));//similar as above
     printf("\nValue of address at index 1: %d",*(arr+1));   
    //arr++ is not valid because arr is a constant(array);

    int* arrayptr;
    arrayptr=arr;
    arrayptr++;
    printf("\nvalue of arrayptr: %d",arrayptr);
    return 0;
}