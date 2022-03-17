#include <iostream>

using namespace std;

int max(int i,int arr[]){
    int large=arr[0];
    for(int k=0;k<=i;k++){
        
        if(arr[k]>large){
            large=arr[k];
        }
    }
    cout<<"\n";
    return large;
    
}


int main()
{
  
int n;
cout<<"Enter size of array=";
cin>>n;
int arr[n];
cout<<"\nEnter elements of the array::";
 for(int a=0;a<n;a++){
     cin>>arr[a];
 }
 
 for(int c=0;c<n;c++){
     cout<<max(c,arr);
     
 }
 return 0;
}