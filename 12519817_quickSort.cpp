#include<iostream>
using namespace std;

    void quick(int arr[],int n){
      for(int k=0;k<n-1;k++){
        int abc=arr[k];
        for(int i=k+1;i<n;i++){
          if(arr[i]<abc){
          int temp=arr[i];
            for(int j=i;j>k;j--){
            arr[j]=arr[j-1];
            }
          arr[k]=temp;
          abc=arr[k];
          }
        }
    }
 cout<<"\nSorted Array:\n";
 for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
 }
}

int main(){
 int n;
 cout<<"Enter Number of Elements: ";
 cin>>n;

 int* arr=new int[n];

 for(int i=0;i<n;i++){
  cout<<"Enter Element ["<<i<<"] : ";
  cin>>arr[i];
 }

 cout<<"\nYour Array:\n";
 for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
 }

 quick(arr,n);
 
}




