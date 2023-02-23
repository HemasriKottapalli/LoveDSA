#include <iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int target)
{
  int s=0;//start
  int e=arr.size()-1;//end
  int mid = (s+e)/2;
  int ans;
  while(s<=e)
  {
     if(arr[mid]==target)
  {
    ans=mid;
    //search right
     s=mid+1;
  }
  else if(arr[mid]>target)
  {
    e=mid-1;
  }
  else{
    s=mid+1;
  }
  mid = (s+e)/2;
  }
   return ans;
}

int main() {
 vector<int> arr{1,2,3,3,3,3,4,5,6,7,8};
 int target = 3; //last occurance
 int index = binarySearch(arr,target);
 cout<<"Elemet found at index: "<<index;
  return 0;
}