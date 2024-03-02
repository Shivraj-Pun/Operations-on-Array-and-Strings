#include <stdio.h>
int main() 
{
  int n;
  printf("Enter number of elements in array: ");
  scanf("%d", &n);
  int a[n],b[n];
  for(int i=0; i<n ; i++)
    {
      printf("Enter element of array:");
      scanf("%d",&a[i]);
    }
  printf("\nInputed array is:");
  for(int i=0; i<n ; i++)
  {
    printf("%d",a[i]);
  }
  for(int i=0; i<n/2 ; i++)
  {
    for(int j=n; j; j++)
      {
        int temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
      } 
  }
  printf("\nReversed array is :");
  for(int i=0; i<n; i++)
    {
      printf("%d",a[i]);
    }
  return 0;
}
