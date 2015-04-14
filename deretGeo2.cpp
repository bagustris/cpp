# include <iostream>
# include <iomanip>

using namespace std;

int main ()
{ int i,sp,r,bs,jd=0;
cout<<"suku pertama="; cin>>sp;

cout<<"rasio="; cin>>r;

cout<<"banyaknya suku="; cin>>bs;
cout<<"deret geometri :"; 
for (i=1;i<=bs;i++)
{ 
jd=jd+sp;
cout<<setw(5)<<sp;
sp=sp*r;
}
cout<<endl;
cout<<"jml deret="<<jd;
}
