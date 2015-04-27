// array0.cpp : demo array input
#include <iostream>
using namespace std;

int main()
{
    int i, min, max, jml=0;
    float rata2;
    int nums[10];

    cout<<"Masukkan 10 angka: ";
    for(i=0; i<10; i++)
    { 
    cin>>nums[i];
    jml=jml+nums[i];
    if (i==0)
        min=max=nums[i];
    else 
    {
        if(nums[i]<min)
        min=nums[i];
        if(nums[i]>max)
        max=nums[i];
    }
    }

    rata2 = jml/10.0;
    cout<< "Rata-rata adalah "<<rata2<<endl;
    cout<<"Min : "<<min<<endl;
    cout<<"Max : "<<max<<endl;
    return 0;
}
