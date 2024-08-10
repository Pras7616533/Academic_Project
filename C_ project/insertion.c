#include<stdio.h>
//#include<conio.h>

void display (int a[], int n)
{
  int i;
  for (i=0; i<n; i++)
  {
    printf ("%d ", a[i]);
  }
}

void insertion (int a[], int n)
{
  int i, j, temp;
  for (i = 1; i < n; i++)
  {
    printf ("Pass %d:\n", i);
    display (a, n);
    printf ("\n");
    temp = a[i];
    for (j=i-1; j>=0 && a[j]>temp; j--)
    {
      a[j+1] = a[j];
    }
    a[j+1] = temp;
    display (a, n);
    printf ("\n\n");
  }
}

int main ()
{
  int a[50], n, i;
  printf ("\nEnter the number of element:\n");
  scanf("%d", &n);
  printf ("Enter the array element:\n");
  for (i=0; i<n; i++)
  {
    scanf ("%d", &a[i]);
  }
  printf ("\n");
  insertion (a, n);
  printf ("Sorted array is:\n");
  display (a, n);
  printf ("\n");
  return 0;
}
