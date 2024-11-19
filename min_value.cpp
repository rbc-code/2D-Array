#include<iostream>
using namespace std;
int main()
{
    int arr[2][3]={3,4,6,2,7,6};
    int len= sizeof(arr)/size(arr[0]);
    for(int r=0; r<2; r++)
    {
        for(int c=0; c<3; c++)
        {
            cout<<arr[r][c]<<"\t";
            cout<<len;
        }
        cout<<"\n";
    }
}