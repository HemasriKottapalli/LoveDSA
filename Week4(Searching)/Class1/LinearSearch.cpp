#include <iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int> arr, int target)
{
     int k=-1;
    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i]==target)
        {
           k=i;
        }
    }
    return k;
}
int main()
{
    vector<int> arr{1,45,63,2,8,7,76};
    int target = 2;
    int index = linearSearch(arr,target);
    if(index==-1)
    {
        cout<<"Element not found";
    }
    else{
        cout<<"Index of target element is:"<<index;
    }
}
