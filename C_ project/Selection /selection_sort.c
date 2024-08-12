#include <stdio.h>
#include <stdlib.h>

void display(int a[], int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
}
int main()

{

int i,j,n,loc, temp, min, a [30];

setbuf (stdout, NULL);
printf("Enter the size of array:\n");
scanf("%d",&n);
printf("Enter n elements:\n");

for(i=0;i<n;i++)

{

scanf("%d",&a[i]);

}
printf("\n");
//computation of selection sort

for(i=0;i<n-1;i++)

{

printf("Pass %d:\n",i+1);
display(a, n);
printf("\n");

min=a[i];
loc=i;

for(j=i+1;j<n;j++)

{

if(min>a[j])

{

min=a[j];
loc=j;

}

}

temp=a[i];
a[i]=a[loc];
a[loc]=temp;

display(a, n);
printf("\n\n");

}

printf("\nThe sorted array after Selection sort is:\n");

display(a, n);
printf("\n");
return 0;

}
