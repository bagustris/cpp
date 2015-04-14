#include <iostream.h>
main()
{
int i,j,n,a;
cout<<"masukkan n="; cin>>n;
for (i=1; i<=n; i++) 
{ 
for (j=1;j<=i;j++)
cout <<"*";
a=i;
a=a+1; 
cout<<endl; }
cout<<"Jumlah bintang="<<a<<endl;
}