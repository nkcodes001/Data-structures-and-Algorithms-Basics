#include <iostream>

using namespace std;

int main()
{
    int i,j,n;
    int arr[n];
    cout<<"Enter number of elements in Array=";
    cin>>n;
     cout<<"Enter"<<n<<"of elements in Array=";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
     for(i=0;i<n;i++){
        cout<<"\nArray before sorted : "<<arr[i];
    }
    
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                 temp=arr[i];
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<"\nArray after sorted : "<<arr[i];
    }
    
    

    return 0;
}

/*
idea behind selection sort 
find minimum element in the unsorted array and swap it with the beginning element


*/

