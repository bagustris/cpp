#include <iostream>
using namespace std;

int main()
{
    int i, a[5];
    // int a[5]={0,1,5,10,20};
    a[0]=0;
    a[1]=1;
    a[2]=5;
    a[3]=10;
    a[4]=20;
    for(i=0; i<5; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
