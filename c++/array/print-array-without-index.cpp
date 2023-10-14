/*author : @akash*/

#include<iostream>
using namespace std;


int main()
{
    int a[]={1,2,3,4,5};

    int n=sizeof(a[0])/sizeof(a);

    // for(int i=0;i<n;i++)
    // {
        cout<<*(a+1)<<"\t";
    // }
    
    return 0;
}