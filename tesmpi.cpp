#include <iostream>
#include <mpi.h>

/**************************************************************************
This is a simple hello world program. Each processor print its id
Parelelized using openMPI
Command: mpic++ tesmpi.cpp
************************************************************/
using namespace std;
int main(int argc,char** argv)
{
    int myid, numprocs;

    MPI_Init(&argc,&argv);
    MPI_Comm_size(MPI_COMM_WORLD,&numprocs);
    MPI_Comm_rank(MPI_COMM_WORLD,&myid);


        /* output  my rank */
    cout<<"Hello from "<<myid<<endl;
    MPI_Finalize();

}
