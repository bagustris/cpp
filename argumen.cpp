/* argumen.c
 * demo argumen in C
 * 04/19/2015
 * bagustris, bagustris@yahoo.com
 */

#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char* argv[])
{
  //program disini
  for (int i=0; i< argc; i++)
    for (int j=0, n=strlen(argv[i]); j<n; j++)
         cout<<"argv ["<< i <<"] [" << j <<"] is: "<<argv[i][j]<<"\n";

  return 0;
}

