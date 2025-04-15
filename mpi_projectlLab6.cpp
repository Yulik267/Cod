#include "mpi.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <random>
#include <time.h>


int generate_random_number(int myid) {
	
	return rand()% 6+1;
}

int main(int argc, char** argv)
{
	int  myid, numprocs, val=0;
	MPI_Status stare;
	int rnd;
	srand(time(0));
	int z1, z2, z3, z4;
	MPI_Init(&argc, &argv);
	MPI_Comm_size(MPI_COMM_WORLD, &numprocs);
	MPI_Comm_rank(MPI_COMM_WORLD, &myid);
	srand(time(NULL) + myid);

	if (myid == 0) {
		val = generate_random_number(myid);
		printf("Zaru la procesul %d are valoarea %d\n", myid, val);
		MPI_Send(&val, 1, MPI_INT, 3, 99, MPI_COMM_WORLD);
	}
	else if (myid == 1) {
		for (int i = 0; i < 2; i++) {
			z1=generate_random_number(myid);
			printf("Aruncarea %d la procesul %d are valoarea %d\n",i + 1,myid,z1);
			val += z1;
		}
		printf("Cifra construita la procesul %d din doua numere %d\n",myid, val);
		MPI_Send(&val, 1, MPI_INT, 3, 98, MPI_COMM_WORLD);
	}
	else if (myid == 2) {
		for (int i = 0; i < 3; i++) {
			z1 = generate_random_number(myid);
			printf("Aruncarea %d la procesul %d are valoarea %d\n", i + 1, myid, z1);
			val += z1;
		}
		printf("Cifra construita la procesul %d din trei numere %d\n", myid, val);
		MPI_Send(&val, 1, MPI_INT, 3, 97, MPI_COMM_WORLD);
	}
	else if (myid == 3) {

		MPI_Recv(&z1, 1, MPI_INT, 0, 99, MPI_COMM_WORLD, &stare);
		MPI_Recv(&z2, 1, MPI_INT, 1, 98, MPI_COMM_WORLD, &stare);
		MPI_Recv(&z3, 1, MPI_INT, 2, 97, MPI_COMM_WORLD, &stare);
		
		val = z1+z2+z3;
		printf("Procesul %d adunarea a tuturor valorilor primite =  %d\n",myid, val);
	}
	printf("Procesul %d se incheie \n", myid);
	MPI_Finalize();
	return 0;
}

