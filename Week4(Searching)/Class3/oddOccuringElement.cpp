#include<iostream>
#include<vector>
using namespace std;

int findOdd(vector<int> arr)
{
    int s=0;
    int e= arr.size()-1;
    int mid = s+(e-s)/2;

    while(s<=e)
    {
        if(s==e)
        {
            return arr[s];
        }

        //mid is evn
        if(mid%2==0)
        {
            if(arr[mid]==arr[mid+1])
            {
                s=mid+2;
            }
            else{
                e=mid;
            }
        }
        else{
            if(arr[mid]==arr[mid-1])
            {
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

int main()
{
   vector<int> arr{1,1,2,2,3,3,4,4,5,6,6};
   int oddOne = findOdd(arr);
   cout<<oddOne;
}