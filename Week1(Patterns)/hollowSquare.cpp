#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    for(int row=0; row<n; row++)
    {
        //first and last rows have n stars
        if(row==0 || row==n-1)
        {
            for(int col=0; col<n; col++)
            {
                cout<<"* ";
            }
        }
        else 
        {
            //rest of the rows have stars at start and end rest all spaces
            for(int col=0; col<n; col++)
            {
                if(col==0 || col==(n-1))
                {
                    cout<<"* ";
                }
                else{
                    cout<<" ";
                }
            }

        }
           cout<<endl;
    }
}