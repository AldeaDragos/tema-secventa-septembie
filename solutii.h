#include "algoritmi.h"

void sol1() {

	int v[100] = { 12,10,15,6,7,10,19,14 };

	int dim = 8;

	sumSec1(v, dim);

}

void sol2() {

	int v[100] = { 0,1,0,0,0,5,0,0,0,2 };

	int dim = 9;

	secvZero(v, dim);
}

void sol3() {

	int v[100] = { 5,5,1,1,1,1,2,2,2,2 };

	int dim = 10;

	secvEgale(v, dim);
}

void sol4() {

	int v1[100] = { 8,5,8,5,2,3,10,7,1,6 };

	int v2[100] = { 8,5,2,3,10,7 };

	int dim1 = 10;

	int dim2 = 6;

	cout << secventa1(v1, dim1, v2, dim2);
}

void sol5() {

	int v1[100] = { 8,5,8,5,8,3,8,5,8,6 };

	int v2[100] = { 8,5,8 };

	int dim1 = 10;

	int dim2 = 3;

	secventa2(v1, dim1, v2, dim2);
}

void sol6() {

	int v[100] = { 1,4,3,5,7,3,4,2 };

	int dim = 8;

	nrSecvente(v, dim,3, 5);
}

void sol7() {

	int v[100] = { 2,3,1,1,4,3,1,1,4,3,8,8 };

	int dim = 12;

	kSecventa1(v, dim, 5);
}


void sol8() {

	int v[100] = { 6,6,8,3,6,6,3,8,4,3,3,4 };

	int dim = 11;

	secvEgale1(v, dim);
}

void sol9() {

	int v[100] = { 4,3,3,3,5 };

	int dim = 5;

	secvEgale2(v, dim);
}

void sol10() {

	int v[100] = { 12,10,15,7,17,10,19,14 };

	int dim = 8;

	sumsec(v, dim);
}

void sol11() {

	int v[100] = {2,6,4,5,8,8,6,3,4 };

	int dim = 9;

	secVMax(v, dim);
}

void sol12() {

	int v[100] = { 2,6,4,5,8,8,6,3,4 };

	int dim = 9;

	secvCresc(v, dim);
}

void sol13() {

	int v[100] = { 12,10,20,30,99,1000,1,20,500,600,5 };

	int dim = 11;

	secv10(v, dim);
}

void sol14() {

	int v[100] = { 12,10,15,7,17 ,13,19,14};

	int dim = 8;

	int s = 32;

	sumaInSec(v, dim,s);
}

void sol15() {

	int v[100] = { 12,10,15,17,17 ,10,12,14 };

	int dim = 8;

	secventeCrescOrd(v, dim);
}