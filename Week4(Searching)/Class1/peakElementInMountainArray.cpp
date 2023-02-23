#include <iostream>
#include<vector>
using namespace std;

int peak (vector<int> arr)
{
  int s=0;
  int e = arr.size()-1;

  int mid = s+(e-s)/2;
  
  while(s<=e)
  {  if(s==e)
    {
      return s;
    }
    if(arr[mid]<arr[mid+1])
    {
      s=mid+1;
    }
    else{
      e=mid;
    }
    mid=(s+(e-s))/2;
  }
}

int main() {
  //vector<int> arr{0,10,5,2};
  vector<int> arr {5,7,20,4,3,2};
  int peakIndex = peak(arr);
  cout<< arr[peakIndex];
  return 0;
}