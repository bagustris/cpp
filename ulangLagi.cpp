/* ulangLagi.cpp
 * demo while: Ulang lagi dan lagi
 * 04/15/2015
 * bagustris, bagustris@yahoo.com
 */

#include <iostream>
using namespace std;

int main()
{
char ulang='y';
while (ulang=='y')
{
  cout<<"Teknik Fisika ITS"<<endl;
  cout<<"Apakah anda ingin mengulan [y/t]: ";
  cin>>ulang;
}
}
