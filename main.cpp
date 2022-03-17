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
    
 // bibble sort code|||||
   int counter=1;
   while(counter<n-1){
       for(i=0;i<n-counter;i++){
           if(arr[i]>arr[i+1]){
               int temp=arr[i];
               arr[i]=arr[i+1];
               arr[i+1]=temp;
           }
           
       }
       counter++;
   }
 
 
 
 
    for(i=0;i<n;i++){
        cout<<"\nArray after sorted : "<<arr[i];
    }
    
    

    return 0;
}