#include "mpi.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <random>

int generate_random_number(int myid, int min = 1, int max = 9) {
	std::mt19937 gen(time(0) + myid); // Seeded with time + rank
	std::uniform_int_distribution<> dist(min, max);
	return dist(gen);
}

int main(int argc, char** argv)
{
	int  myid, numprocs, val,val1;
	MPI_Status stare;
	int rnd;
	int z1, z2, z3, z4;
	MPI_Init(&argc, &argv);
	MPI_Comm_size(MPI_COMM_WORLD, &numprocs);
	MPI_Comm_rank(MPI_COMM_WORLD, &myid);
	
	if (myid == 0) {
		val = generate_random_number(myid);
		printf("Cifra generata la procesul %d este %d\n", myid,val);
		MPI_Send(&val, 1, MPI_INT, 1, 99, MPI_COMM_WORLD);
		MPI_Recv(&val, 1, MPI_INT, 3, 96, MPI_COMM_WORLD, &stare);
		printf("\nValoare la procesult 0 prinita de la procesult 3 = %d\n", val);
		//printf("Procesul 0 complet\n");
	}
	else if (myid == 1) {
		MPI_Recv(&z1, 1, MPI_INT, 0, 99, MPI_COMM_WORLD, &stare);
		val = generate_random_number(myid);;
		printf("Cifra generata la procesul %d este %d\n", myid, val);
		z1 += val;
		printf("Cifra construita din doua numere %d\n",z1);
		MPI_Send(&z1, 1, MPI_INT, 2, 98, MPI_COMM_WORLD);
	}
	else if (myid == 2) {
		
		MPI_Recv(&val, 1, MPI_INT, 1, 98, MPI_COMM_WORLD, &stare);
		z2 = generate_random_number(myid);
		printf("Cifra generata la procesul %d este %d\n", myid, z2);
		val += z2;
		printf("Cifra construita din trei numere %d\n", val);
		MPI_Send(&val, 1, MPI_INT, 3, 97, MPI_COMM_WORLD);
	}
	else if (myid == 3) {
		
		MPI_Recv(&val, 1, MPI_INT, 2, 97, MPI_COMM_WORLD, &stare);
		z3 = generate_random_number(myid);;
		printf("Cifra generata la procesul %d este %d\n", myid, z3);
		val += z3;
		printf("Cifra construita din patru numere %d\n", val);
		MPI_Send(&val, 1, MPI_INT, 0, 96, MPI_COMM_WORLD);
	}
	printf("Procesul %d se incheie \n", myid);
	MPI_Finalize();
	return 0;
}