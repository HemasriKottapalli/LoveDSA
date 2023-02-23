#include<iostream>
using namespace std;
int solve(int divident, int divisor)
{ 
  int ans=0;
  int start = 0;
  //using abs() to make it work for -ve s
  int end = abs(divident);
  
  int mid=start+(end-start)/2;

  while(start<=end)
  {
    if(abs(divisor*mid)==abs(divident))
  { 
    ans=mid;
    break;
  }
  if(abs(divisor*mid)>abs(divident))
  {
    end=mid-1;
  }
  if(abs(divisor*mid)< abs(divident))
  { //store ans & right search
    ans=mid;
    start=mid+1;
  }
  mid=start+(end-start)/2;
  }
  if((divisor>0 && divident>0) || (divisor<0 && divident<0))
  {
    return ans;
  }
  else{
    return -ans;
  }
}
int main()
{
  int divident =-22;
  int divisor =7;

  int ans = solve(divident, divisor);
  cout<<"ans:"<<ans;
 // cout<<280*2;
}