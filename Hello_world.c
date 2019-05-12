#include <mpi.h>
#include <stdio.h>

int main(int argc, char** argv){
	//Initialize the MPI environment
	MPI_Init(NULL, NULL);
	
	// Get the no of processors
	int size;
	MPI_Comm_size(MPI_COMM_WORLD, &size);
	printf("\n no of processors \t %d", size);
	
	//Get the rannk of the processors
	int rank;
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	printf("\n rank of processors \t %d", rank);
	
	//Get the name of the processors
	char name[MPI_MAX_PROCESSOR_NAME];
	int len;
	MPI_Get_processor_name(name, &len);
	
	// print off a hello world message
	printf("Hello world from processor %s, rank %d out of %d processors \n", name, rank, size);
	
	//Finalize the MPI environment
	MPI_Finalize();
	
}
