// Recursive C program to reverse an array
#include <stdio.h>
 
/* Function to reverse arr[] from start to end*/
void rvereseArray(int arr[], int start, int end)
{
   int temp;
   if (start >= end)
     return;
   temp = arr[start];   
   arr[start] = arr[end];
   arr[end] = temp;
   rvereseArray(arr, start+1, end-1);   
}     
 
/* Utility that prints out an array on a line */
void printArray(int arr[], int size)
{
  int i;
  for (i=0; i < size; i++)
    printf("%d ", arr[i]);
 
  printf("\n");
} 
 
/* Driver function to test above functions */
int main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    printArray(arr, 5);
    rvereseArray(arr, 0, 4);
    printf("Reversed array is \n");
    printArray(arr, 5);    
    return 0;
}
