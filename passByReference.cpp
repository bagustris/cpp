#include <iostream>
using namespace std;

void doit(int &x)
{
    x=5;
}

int main()
{
    int z=27;
    doit(z);
    cout<<"Z is now "<<z<<endl;

    return 0;
}
