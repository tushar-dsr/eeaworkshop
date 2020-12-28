#include <iostream>

using namespace std;

int main()
{
    int n=10;
    int arr[]={13,23,432,4,2,66,2,66,99,100};
  //Bubble sort
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
