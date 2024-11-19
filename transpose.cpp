#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter size of aow\n";
    cin>>x;
    cout<<"Enter size of colum\n";
    cin>>y;
    int arr[x][y];
    cout<<"Enter"<<x*y<<"values\n";
    for(int r=0; r<x; r++)
    {
        for(int c=0; c<y; c++)
        {
            cin>>arr[r][c];
        }
    }
    for(int r=0; r<x; r++)
    {
        for(int c=0; c<y; c++)
        {
            cout<<arr[r][c]<<"\t";
        }
        cout<<"\n";
    }
    if(x==y)
    {
        cout<<"\nAfter Applying Transpose Concept\n";
        for(int c=0; c<x; c++)
        {
            for(int r=0; r<y; r++)
            {
                cout<<arr[r][c]<<"\t";
            }
            cout<<"\n";
        }
    }
    else
    {
        cout<<"Not Allowed,bcz row and colum sizes are not square\n";
    }
}
