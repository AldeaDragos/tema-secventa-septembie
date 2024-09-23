#include "algoritmi.h"


//Se dă un vector format din n elemente, numere naturale. Calculați suma elementelor din secvența determinată de primul și ultimul element impar.
void sol1() {

	int v[100] = { 12,10,15,6,7,10,19,14 };

	int dim = 8;

	sumSec1(v, dim);

}

//Se dă un vector cu n elemente numere naturale. Determinați cea mai lungă secvență de elemente nule din vector. Dacă în vector există mai multe secvențe de elemente nule de lungime maximă se va determina cea mai din stânga.
void sol2() {

	int v[100] = { 0,1,0,0,0,5,0,0,0,2 };

	int dim = 9;

	secvZero(v, dim);
}

//Se dă un vector cu n elemente, numere naturale. Determinați cea mai lungă secvență de elemente egale din vector. Dacă în vector există mai multe secvențe de elemente egale de lungime maximă se va determina cea mai din dreapta.Se dă un vector cu n elemente, numere naturale. Determinați cea mai lungă secvență de elemente egale din vector. Dacă în vector există mai multe secvențe de elemente egale de lungime maximă se va determina cea mai din dreapta.

void sol3() {

	int v[100] = { 5,5,1,1,1,1,2,2,2,2 };

	int dim = 10;

	secvEgale(v, dim);
}

//Se dă un vector x cu n elemente, numere naturale, și un vector y cu m elemente, numere naturale. Să se verifice dacă vectorul y este secvență în vectorul x.

void sol4() {

	int v1[100] = { 8,5,8,5,2,3,10,7,1,6 };

	int v2[100] = { 8,5,2,3,10,7 };

	int dim1 = 10;

	int dim2 = 6;

	cout << secventa1(v1, dim1, v2, dim2);
}

//Se dă un vector x cu n elemente, numere naturale și un vector y cu m elemente, numere naturale. Să se determine de câte ori este vectorul y secvență în vectorul x.

void sol5() {

	int v1[100] = { 8,5,8,5,8,3,8,5,8,6 };

	int v2[100] = { 8,5,8 };

	int dim1 = 10;

	int dim2 = 3;

	secventa2(v1, dim1, v2, dim2);
}

//Se dă un vector cu n elemente, numere naturale și două numere t și k. Să se determine câte secvențe din șir au lungimea k și sunt formate din valori mai mici sau egale cu t.v

void sol6() {

	int v[100] = { 1,4,3,5,7,3,4,2 };

	int dim = 8;

	nrSecvente(v, dim,3, 5);
}

//Se dă un vector cu n elemente, numere naturale, și un număr k. Să se stabilească dacă în vector există două secvențe de lungime k identice.

void sol7() {

	int v[100] = { 2,3,1,1,4,3,1,1,4,3,8,8 };

	int dim = 12;

	kSecventa1(v, dim, 5);
}

//Se dă un vector cu n elemente, numere naturale. Determinați cea mai lungă secvență de elemente din vector care începe și se termină cu aceeași valoare. Dacă în vector există mai multe secvențe corecte de lungime maximă se va determina cea mai din stânga.

void sol8() {

	int v[100] = { 6,6,8,3,6,6,3,8,4,3,3,4 };

	int dim = 11;

	secvEgale1(v, dim);
}

//Se dă un vector cu n elemente, numere naturale. Determinați câte secvențe ale vectorului au toate elementele egale.

void sol9() {

	int v[100] = { 4,3,3,3,5 };

	int dim = 5;

	secvEgale2(v, dim);
}

//Se dă un şir format din n elemente, numere naturale. Calculaţi suma elementelor din secvenţa determinată de primul şi ultimul element prim.

void sol10() {

	int v[100] = { 12,10,15,7,17,10,19,14 };

	int dim = 8;

	sumsec(v, dim);
}

//Să se determine cea mai lungă secvență de elemente pare dintr-un vector.

void sol11() {

	int v[100] = {2,6,4,5,8,8,6,3,4 };

	int dim = 9;

	secVMax(v, dim);
}

//ă se determine cea mai lungă secvență de elemente ordonate strict crescător dintr-un vector.

void sol12() {

	int v[100] = { 2,6,4,5,8,8,6,3,4 };

	int dim = 9;

	secvCresc(v, dim);
}

//Se dau n numere naturale, reprezentând elementele unui vector. Determinați lungimea maximă a unei secvențe de elemente divizibile cu 10, precum și numărul de secvențe de lungime maximă cu elemente divizibile cu 10.

void sol13() {

	int v[100] = { 12,10,20,30,99,1000,1,20,500,600,5 };

	int dim = 11;

	secv10(v, dim);
}

//Se dă un vector format din n elemente, numere naturale nenule, şi un număr natural S. Determinaţi, dacă există o secvenţă de elemente din şir cu suma elementelor egală cu S.

void sol14() {

	int v[100] = { 12,10,15,7,17 ,13,19,14};

	int dim = 8;

	int s = 32;

	sumaInSec(v, dim,s);
}

//Se dă un şir format din n elemente, numere naturale. Determinaţi câte secvenţe maximale cu elementele ordonate crescător conţine şirul.

void sol15() {

	int v[100] = { 12,10,15,17,17 ,10,12,14 };

	int dim = 8;

	secventeCrescOrd(v, dim);
}