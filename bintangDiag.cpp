#include <iostream>

using namespace std;

int main()
{
    int i,j,n;
    cout<<"masukkan jumlah baris: ";
    cin>>n;

    for ( i =0; i < n; i++)
    { 
        for (j = 0; j < n; j++)
        { 
            if ( i == j)
            {
                cout<<"*";
            }
            else
                cout<<"o";
        }
        cout<<"\n";
    }
    return 0;
}
