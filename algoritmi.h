#pragma once
#include <iostream>
#include <string.h>
using namespace std;

int primElemImpar(int v[], int dim) {

	for (int i = 0; i < dim; i++) {
		if (v[i] % 2 != 0) {
			return i;
		}
	}

}

int ultimElemImpar(int v[], int dim) {

	for (int i = dim; i >=0; i--) {
		if (v[i] % 2 != 0) {
			return i;
		}
	}

}


void sumSec1(int v[], int dim) {

	int smax = primElemImpar(v,dim);
	int dmax = ultimElemImpar(v, dim);
	int suma = 0;

	for (int i = smax; i <= dmax; i++) {
		suma += v[i];
	}
	cout << suma << endl;
}

void secvZero(int v[], int dim) {

	int smax = 0;
	int dmax = 0;

	for (int i = 0; i < dim; i++) {

		if (v[i] == 0) {

			int j = i;

			while (j+1 < dim && v[j+1] == 0) {

				j++;

			}
			if (j - i  > dmax - smax) {
				smax = i;
				dmax = j;
			}

			i = j;
		}

	}
	cout <<  smax << " " << dmax << endl;
}

void secvEgale(int v[], int dim) {

	int smax = 0;
	int dmax = 0;

	for (int i = 0; i < dim; i++) {

		if (v[i] == v[i + 1]) {

			int j = i;

			while (j + 1 < dim && v[j] == v[j + 1]) {

				j++;

			}
			if (j - i > dmax - smax) {

				smax = i;
				dmax = j;
			}

			i = j;

		}
	}
	cout << smax << " " << dmax << endl;
}

int secventa1(int v1[], int dim1,int v2[],int dim2) {

	for (int i = 0; i < dim1; i++) {

		if (v1[i] == v2[0]) {

			int j = i;

			while (j<dim2 && v1[i] == v2[j]) {

				j++;
			}

			i = j;

			return i;

		}

	}
}

void secventa2(int v1[], int dim1, int v2[], int dim2) {

	int ct = 0;

	for (int i = 0; i < dim1; i++) {
		bool contine = true;
		for (int j = 0; j < dim2; j++) {

			if (v1[i+j] != v2[j]) {

				contine = false;

			}
		}
		if (contine == true) {
			ct++;
		}
	}
	cout << ct << endl;
}

void nrSecvente(int v[], int dim, int t, int k) {

	int ct = 0;

	for (int i = 0; i < dim; i++) {
		bool valid = true;

		for (int j = i; j < k; j++) {

			if (v[j] > t) {
				valid = false;
			}
		}
		if (valid == true) {
			ct++;
		}
	}

	cout << ct << endl;
}

void vectorFrecventaNumere(int v[], int dim, int f[]) {
	for (int i = 0; i < dim; i++) {
		f[v[i]]++;
	}
}

int douaElemEgale(int v[], int dim) {

	for (int i = 0; i < dim; i++) {
		for (int j = i + 1; j < dim; j++) {
			if (v[i] == v[j]) {
				return true;
			}
		}

	}
	return false;
}

void kSecventa1(int v[], int dim, int k) {

	int f[100] = {};

	for (int i = 0; i < dim; i++) {
		int j = i + 1;
		int ct = 0;
		while (j < dim && v[i] == v[j]) {

			ct++;
			j++;

		}
		f[v[i]] = ct;
		i = j;

	}

	if (douaElemEgale(f, dim) == true) {
		cout << "exista" << endl;
	}
	else {
		cout << "nu exista" << endl;
	}

}

void secvEgale1(int v[], int dim) {

	int smax = 0;
	int dmax = 0;
	int l = 0;

	for (int i = 0; i <= dim; i++) {

		for (int j = dim-1; j > i; j--) {

			if (v[i] == v[j]) {

				l = j - i + 1;

			}
			if (l > dmax - smax) {
				smax = i;
				dmax = j;
			}
		}
	}
	cout << smax << " " << dmax << endl;
}

void secvEgale2(int v[], int dim) {

	int ct = 0;

	for (int i = 0; i < dim; i++) {
	

		int j = i;

		while (j + 1 < dim && v[i] == v[j+1]) {
	
			j++;

		}
		ct++;
		i = j;

	}
	cout << ct << endl;
}

bool nrPrim(int n) {

	if (n <= 1) {
		return false;
	}

	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int pozPrimElemPrim(int v[], int dim) {

	for (int i = 0; i < dim; i++) {
		if (nrPrim(v[i])) {
			return i;
		}
	}
}


int pozUltimElemPrim(int v[], int dim) {

	for (int i = dim; i >= 0; i--) {
		if (nrPrim(v[i])) {
			return i;
		}
	}
}

void sumsec(int v[], int dim) {

	int smax = pozPrimElemPrim(v, dim);
	int dmax = pozUltimElemPrim(v, dim);
	int suma = 0;

	for (int i = smax; i <= dmax; i++) {
		suma += v[i];
	}

	cout << suma << endl;
}

void secVMax(int v[], int dim) {

	int smax = 0;
	int dmax = 0;

	for (int i = 0; i < dim; i++) {
		
		if (v[i] % 2 == 0) {

			int j = i;

			while (j + 1 < dim && v[j] % 2 == 0) {
				j++;

			}
			if (j - i > dmax - smax) {
				smax = i;
				dmax = j;
			}
			i = j;
		}

	}
	cout << smax << " " << dmax;
}

void secvCresc(int v[], int dim) {
	
	int smax = 0;
	int dmax = 0;


	for (int i = 0; i < dim; i++) {

		int j = i;

		while (j + 1 < dim && v[j] <= v[j+1]) {
			j++;
		}

		if (j - i > dmax - smax) {
			smax = i;
			dmax = j;
		}
		i = j;
	}
	cout << smax << " " << dmax;
}

void secv10(int v[], int dim) {
	
	int ct = 0;
	int l = 0;

	for (int i = 0; i < dim; i++) {
		if (v[i] % 10==0) {

			int j = i;

			while (j + 1 < dim & v[j] % 10 == 0) {
				j++;
			}
			ct++;
			l = j - i;
			i = j;
			
		}

	}
	cout << " sunt " << ct << "secvente " << "de lungime " << l <<endl;
}

void sumaInSec(int v[], int dim, int s) {

	int smax = 0;
	int dmax = 0;

	for (int i = 0; i < dim; i++) {
		
		int suma = 0;

		for (int j = i; j < dim; j++) {

			suma += v[j];

			if (suma == s) {
				if (j - i > dmax - smax) {
					smax = i;
					dmax = j;
				}
			}


		}

	}
	cout << smax << " " << dmax;
}

void secventeCrescOrd(int v[], int dim) {

	int ct = 0;

	for (int i = 0; i < dim; i++) {

		int j = i;

		while (j + 1 < dim && v[j] <= v[j + 1]) {

			j++;

		}
		ct++;
		i = j;

	}
	cout << ct << endl;
}