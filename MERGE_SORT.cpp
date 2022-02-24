#include<bits/stdc++.h>
using namespace std;

//1
void merge(int arr[] ,int l ,int mid, int r){
int i=l , j= mid +1 , k=l, aux[10];
while(i <=mid && j<=r)
{ 
 if(arr[i]<arr[j])
   aux[k++]=arr[i++];
else
  aux[k++]=arr[j++];

}
//copying remaining element 

while( i<=mid ){

    aux[k++]=arr[i++];
}

while( j<=r ){
    aux[k++]=arr[j++];

}
//copying back to original array
for(int i=l ;i<=r ; i++){
    arr[i]=aux[i];
}

}


//2
void mergesort(int arr[], int l , int r){

if(l<r){
int mid= (l + r)/2;
mergesort(arr , l , mid );
mergesort(arr , mid +1,r );
merge(arr , l , mid , r);

}

}


int  main(){

int arr[]={4,8,2,10,1};
int size=sizeof(arr)/sizeof(arr[0]);
mergesort(arr , 0, size-1);
for(int i=0 ;i<size;i++)
cout<<arr[i]<<" ";
cout<<endl;
return 0;

}