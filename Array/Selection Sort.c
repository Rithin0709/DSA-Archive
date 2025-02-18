#include<stdio.h>
#include<stdlib.h>

void SelectionSort(int *arr,int size)
{
  for(int i=0; i<size; i++)
    {
      int min = i;
      
}
int main()
{  
  int size;
  printf("Enter the Size of The array\n");
  scanf("%d",&size);
  int *arr = (int *) malloc(size * sizeof(int));

   if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1; 
    }
  
  for(int i=0; i<size; i++)
    {
      scanf("%d",&arr[i]);
    }
  SelectionSort(arr,size);
}
