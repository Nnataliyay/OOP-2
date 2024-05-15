#include <iostream>  // predporcesorska direktiva - input output string
using namespace std; // imenski prostor std

int main() {

	// zaboravila sam da slusam do 17:09

	// samo dodavanje naslova
	cout << "__FAKTORIJEL__" << endl;
	cout << endl;

	long long fact = 1;

	int n;

	// PITAATI jel postoji razlika izmedju jednostrukih i dvostrukih navodnika
	// - kada se koristi 1 karakter navodnici su jednostruki a kada ih je vise uvek dvostruki
	cout << "Unesite neki pozitivan ceo broj" << endl;
	cin >> n;

	for (int i = 1; i < +n; i++) {
		fact *= i;
	}

	cout << "Faktorijel broja " << n << " je " << fact << endl;

	cout << "__NIZ__" << endl;
	cout << endl;

	// definicija niza
	int niz[100];
	int duzinaNiza;

	cout << "Unesite duzinu niza" << endl;
	cin >> duzinaNiza;

	for (int i = 0; i < duzinaNiza; i++) {
		cout << "Unesite " << i + 1 << ". ceo broj"  << endl;
		cin >> niz[i];
	}

	// PITTI KAKO SE ISPISUJE NIZ - da li mora clan po clan ili ima nesto kao .toString
	cout << "Niz koji ste uneli je " << niz << endl;

	

	// BELESKA - obratiti paznju na kodove sa prezentacija u sustini su isti na pitanjima na klk, minimalno izmenjeni  

	cout << endl;
	cout << "__MATRICE__" << endl;
	cout << endl;

	int red, kolona, a[10][10], b[10][10], sum[10][10];

	cout << "Unesite broj redova i kolona" << endl;
	cin >> red >> kolona;

	// popunjavanje matrice
	cout << "Unesite elemente matrice 1" << endl;
	for (int i = 0; i < red; i++) {
		for (int j = 0; i < kolona; j++) {
			cout << "Unesi clan a " << i + 1 << j + 1 << " : " << endl;
			cin >> a[i][j];
		}
	}

	cout << "Unesite elemente matrice 2" << endl;
	for (int i = 0; i < red; i++) {
		for (int j = 0; i < kolona; j++) {
			cout << "Unesi clan b " << i + 1 << j + 1 << " : " << endl;
			cin >> b[i][j];
		}
	}

	// sabiramo matrice
	for (int i = 0; i < red; i++) {
		for (int j = 0; j < kolona; j++) {
			sum[i][j] = a[i][j] + b[i][j];
		}
	}

	// 18:04 opet nes nisam slusala rekao je za kolikvijum msmm da je ovo primer

	int matrica[3][3] = { { 1, 2, 3},
						  { 4, 5, 6},
						  { 7, 8, 9} };

	// ispis matrice
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < kolona; j++) {
			cout << "\t" << matrica[i][j] << " ";
		}
		cout << endl;
	}

	// modifikovanje matrice - sve ispod glavne dijagonalle stavljamo na 0 
	for (int i = 1; i < 3; i++) {
		for (int j = 0; j < i; j++) {
			matrica[i][j] = 0;
		}
	}

	// ispis modifikovane 
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < kolona; j++) {
			cout << "\t" << matrica[i][j] << " ";
		}
		cout << endl;
	}

	



	return 0;
}