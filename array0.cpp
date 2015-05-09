/* array.cpp
 * array.cpp : demoed array
 * 04/24/2015
 * bagustris, bagustris@yahoo.com
 */

#include <iostream>
using namespace std;

int main()
{
  int sample[10];
  int t;

    for(t=0; t<10; t=t+2)
    {
    sample[t]=t+2;
    cout<<"this is sample[" << t << "]: " << sample[t] << "\n";
    }
  return 0;
}
