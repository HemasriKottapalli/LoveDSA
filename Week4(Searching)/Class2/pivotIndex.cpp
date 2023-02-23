#include <iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr)
{
  int s=0;
  int e=arr.size()-1;
  int mid=s+(e-s)/2;

  while(s<=e)
  {
    if(s==e)
    {
      return s;
    }
    else if(mid+1<e && arr[mid]>arr[mid+1])
    {
       return mid;
    }
     else if(mid-1>s && arr[mid-1]>arr[mid])
    {
       return mid-1;
    }
    if(arr[mid]<arr[s])
    {
      e=mid-1;
    }
    else{
      s=mid+1;
    }
    mid=s+(e-s)/2;
  }
  return -1;
}
int main() {
  vector<int> arr{9,10,2,4,6,8};
  int pivot = binarySearch(arr);
  cout<<pivot;
  return 0;
}