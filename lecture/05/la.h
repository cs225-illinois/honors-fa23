#pragma once

#define BLOCK 256
#define MINVEC 0
#define MINMATRIX 0

// locate x,y in a linearized matrix
inline int loc(int i, int j, int n)
{
	return ( (n * i) + j);
}

//min of two ints
inline int min(int a, int b)
{
	if(a > b)
		return b;
	else
		return a;
}

//Print a n x n matrix
void printMatrix(double *a, int n);

//Print a n long vector
void printVector(double *a, int n);

// Add vector a to b and store result in c vectors are arrays of length n
void add(double *a, double *b, double* c, int n);

// Multiply matrices A and B and store result in C. doublehe matrices are n x n
void matmul(double *A, double *B, double *C, int n);

// Sum the elements of vector a into b. Vector a is n length.
void sum(double *a, double &b, int n);

// Puts the prefix sum of vector a into vector b. the vectors are length n
void prefix(double *a, double *b, int n);