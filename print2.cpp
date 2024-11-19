#include<iostream>
using namespace std;
int main()
{
    int arr[2][3];
    cout<<"Enter Six number :\n";
    for(int r=0; r<2; r++)
    {
        for(int c=0; c<3; c++)
        {
            cin>>arr[r][c];
        }
        
    }
    cout<<"\n output \n";
    for(int r=0; r<2; r++)
    {
        for(int c=0; c<3; c++)
        {
            cout<<arr[r][c]<<"\t";
        }
        cout<<"\n";
    }
}
