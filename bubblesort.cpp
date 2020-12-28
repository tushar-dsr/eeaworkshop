#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int arr[] = {1,2,3,4,5};
  sort(arr, arr+5);
  cout<<"Sorted"<<endl;
  cout<<arr[0]<<arr[1]<<endl;
  return 0;
}
