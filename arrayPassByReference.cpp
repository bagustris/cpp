#include <iostream>
using namespace std;

void build_array(int array_variable[50], int length_of_array);

int main()
{
    int values[50];
    cout<<"The value at location 7 starts as "<<values[7]<<endl;
    build_array(values, 50);
    cout<<"The value at location 7 is now "<<values[7]<<endl;
    return 0;
}

void build_array(int array_variable[50], int length_of_array)
{
     for (int i=0; i<length_of_array; i++)
         array_variable[i]=i;
}

