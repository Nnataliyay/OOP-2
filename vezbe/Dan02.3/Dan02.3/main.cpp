#include <iostream>

using namespace std;
//prototip funkcije ne nista visenego njen potpis
// za svaku klasu se prvo radi prototip - njen potpis - definise se naziv arugumenti...
// objasnjava na pocetku 3. vezbi

double kubBroja(double broj); // prototip funkcije
void stampajNiz(int niz[], int start, int duzina);

// moze svakako i ovako da se definise 
int GCD(int a, int b) {

	int r = a % b;
	while (r != 0) {
		
		a = b;
		b = r;
		r = a % b;
	}
	return b;
}


//sad radimo funkcije
int main() {

	// promenljive istog tipa trebaju se definisati u istom redu 
	double broj,rezultat;


	// nabavljamo argument za funkciju
	cout << "Unesi broj " << endl;
	cin >> broj;

	// poziv funkcije
	rezultat = kubBroja(broj);
	cout << "Rezultat je " << rezultat << endl;

	return 0;
}


// definisanje funkcije
double kubBroja(double broj) {

	return (broj * broj * broj);
}

// definisemo 2. funkciju
void stampajNiz(int niz[], int start, int duzina){
	
	if (start >= duzina) {
		return;
	}

	cout << niz[start] << " ";

	stampajNiz( niz, start + 1, duzina);
}