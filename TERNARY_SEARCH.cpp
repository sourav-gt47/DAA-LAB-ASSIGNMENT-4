#include<bits/stdc++.h>
using namespace std;

int ternary(int arr[],int l ,int r ,int x){


int mid1= l + ((r-l)/3) ;
int mid2= r - ((r-l)/3);

if(l <= r){

if(arr[mid1] == x)
return mid1 + 1;

if(arr[mid2] == x)
return mid2 + 1;

 if(x < arr[mid1])
return ternary(arr , l , mid1-1 ,x );

else if(x > arr[mid2])
return ternary(arr, mid2+1 , r , x );

else 
return ternary (arr , mid1+1 , mid2-1, x);

}

 
return -1;



}
int main()
{
    
int arr[]= {1,12,14,15,16};
int n=sizeof(arr)/sizeof(arr[0]);
int x;
cin>>x;
 (ternary(arr , 0 , n-1 , x) == -1) ?
 cout<<"not found!!\n" :
 cout<<"Found at::"<<  
 ternary(arr , 0 , n-1 , x)<<endl;
 
return 0; 
}

