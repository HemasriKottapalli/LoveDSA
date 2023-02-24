#include <iostream>
#include<vector>
using namespace std;

int main() {
  vector<int> arr{10,1,6,14,9};
  int n=arr.size();

  //insertion sort
  for(int round=1; round<n; round++)
  {
    //step1
    int val=arr[round];
    //step2 :compare
    int j=round-1;
    for(;j>=0;j--)
    {
       if(arr[j]>val)
       {
         //step 3:shift
         arr[j+1]=arr[j];
       }
       else{
         //stop
         break;
       }
    }
    //step4:copy 
    // loops exits at j=-1 so do j+1
    arr[j+1]=val;
  }
  //display
  for(int i=0; i<n; i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;
}