#include <iostream>

using namespace std;

int main()
{
int i, sp, r, bs, jd=0;
cout<<"Suku pertama= ";
cin>>sp;
cout<<"Rasio= ";
cin>>r;
cout<<"Banyak suku= ";
cin>>bs;
cout<<"Deret Geometri= ";
for(i=1; i<=bs; i++)
{
    jd=jd+sp;
    cout<<sp;
    cout<<" ";
    sp=sp*r;
}
cout<<"\nJumlah deret= "<<jd;
cout<<endl;
}
