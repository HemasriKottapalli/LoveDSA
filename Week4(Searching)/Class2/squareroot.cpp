#include <iostream>
using namespace std;

int sqrt(int target)
{  
  int start=0;
  int end=target;
  int mid=start+(end-start)/2;
  int ans;

  while(start<=end)
  {
    if((mid*mid) == target)
    {
      return mid;
    }
    else if((mid*mid) < target)
    {  
       ans=mid;
       start=mid+1;
    }
    else{
      end=mid-1;
    }
     mid=start+(end-start)/2;
  }
  return ans;
}

int main() {
  int target = 10;
  int num = sqrt(target);
  cout<<"square root of "<<target<<" is "<<num;
  return 0;
}