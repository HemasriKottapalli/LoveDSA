#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int target)
{
    int start=0;
    int end= arr.size()-1;
    int mid =start+(end-start)/2;

    while(start<end)
    {
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(arr[mid]>target)
        {
            start=mid+1;
        }
        else {
            end=mid-1;
        }
        mid=(start+(end-start))/2;
    }
}
int main()
{
    vector<int> arr{1,2,3,4,5,67,89};
    int target =89;
    int index = binarySearch(arr,target);
    if(index==-1)
    {
        cout<<"element not found";
    }
    else{
        cout<<"Index of Target element is :"<<index;
    }

}