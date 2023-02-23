#include <iostream>
#include<vector>
using namespace std;
//1
int firstOccurance(vector<int> arr, int target)
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
    //search left
     e=mid-1;
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
//2
int lastOccurance(vector<int> arr, int target)
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
 vector<int> arr{1,2,3,3,3,3,3,3,4,5,6,7,8};
 int target = 3; //first occurance
 int firstIndex = firstOccurance(arr,target);
 int lastIndex = lastOccurance(arr,target);
 int freequency = lastIndex-firstIndex+1;
 //(total no.of occurances)
 cout<<"Elemet found at index: "<<freequency;
  return 0;
}