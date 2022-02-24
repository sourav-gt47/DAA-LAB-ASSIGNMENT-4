#include<iostream>
#include<limits.h>

int max,min;

void maxmin(int arr[] , int i, int j)
{
 int max1, min1, mid;
 if(i==j)
 {
  max = min = arr[i];
 }
 else
 {
  if(i == j-1)
  {
   if(arr[i] <arr[j])
   {
    max = arr[j];
    min = arr[i];
   }
   else
   {
    max = arr[i];
    min = arr[j];
   }
  }
  else
  {
   mid = (i+j)/2;
   maxmin(arr , i, mid);
   max1 = max; min1 = min;
   maxmin(arr , mid+1, j);
   if(max <max1)
    max = max1;
   if(min > min1)
    min = min1;
  }
 }
}
int main ()
{ int n,i;

scanf("%d",&n);
int arr[n];

for(  i=0;i<n;i++)
scanf("%d",&arr[i]);
min=INT_MAX;
max=INT_MIN;
maxmin(arr ,0,n-1);
printf("MAX::%d\n",max);
printf("MIN::%d\n",min);
 return 0;
}
