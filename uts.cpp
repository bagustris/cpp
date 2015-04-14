#include <iostream>

using namespace std;

main()
{
int i,j,n;
cout<<"Entry Bilangan Bulat: ";
cin>>n;
for(i=0; i<n; i++)
{
    for(j=0;j<n; j++)
    {
        if(j<=((n-1)/2))
        {
            if(i<=((n-1)/2))
                cout<<"o ";
            else
                cout<<"* ";
        }
        else
        {
            if(i<=((n-1)/2))
                cout<<"* ";
            else
                cout<<"o ";
        }
    }
    cout<<"\n";
}
return 0;
}
