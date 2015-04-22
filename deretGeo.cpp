#include <iostream>
//#include <math.h>

using namespace std;

int main()
{
    int i,a,r,n,jumlah=0;
    cout<<"Program Deret Bilangan \n";
    cout<<"======================\n";
    cout<<"Masukkan Bilangan Pertama: ";
    cin>>a;
    cout<<"Masukkan Banyak Bilangan: ";
    cin>>n;
    cout<<"======================\n";
    cout<<"Deret Bilangan adalah: ";

    //jumlah=0;

    for(i=1; i<=n; i++)
    {
        // r=pow((i+1),2);
        r=(i+1)*(i+1);
        cout<<a<<" ";
        jumlah=jumlah+a;
        a=a+r;
    }
    cout<<"\n";
    cout<<"Jumlah bilangan:" << jumlah <<"\n";
    return 0;
}
