#include <stdio.h>

void display(int a[], int n)
{
  int i;
  for (i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }
}

int main(void)
{
  int a[50], n, pass, i, j, temp = 0;
  setbuf (stdout, NULL);
  printf("Enter the value of n:\n");
  scanf("%d", &n);
  printf("Enter n elements:\n");
  for (i=0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("\n");
//computation of bubble sort
  for (pass = 1; pass <= n-1; pass++)
  {
    printf("pass %d:\n",pass);
    for (j=0; j<n-pass; j++)
    {
      if (a[j] > a[j+1])
      {
        temp = a[j+1];
        a[j+1] = a[j]; a[j] = temp;
      }
      display(a, n);
      printf("\n");
    }
    printf("\n");
  }
  printf("The sorted array after Bubble sort is:\n");
  display(a, n);
  printf("\n");
  return 0;
}
