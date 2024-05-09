#include <iostream>
#include <string>
// koristimo using namespace std kako ne bismo morali da dodajemo std:: prefiks na funkcije kao cout i cin
// ovo nije najefikasnije resenje ali radi lakse sintakse mozemo ga dodati na vrh dokumenta
// nije efikasno jer je to ucitavanje cele biblioteke, 
// kada zasebno pisemo std:: samo te specificne funkcionalnosti bicce ukljucene u program 
using namespace std;

int main() {

    // definisanje promenljivih
	int i1, i2;
	float f1, f2;
	double d1, d2;


	cout << endl;
	cout << "__ISPIS U KONZOLU__" << endl;
	cout << endl;

	// ispis
	cout << "Hello " << endl;
	cout << "Ovo je OOP2" << endl;

	cout << endl;
	cout << "__UNOS IZ KONZOLE__ " << endl;
	cout << endl;

	// upis iz konzole
	int x;
	cout << "Unesite broj tipa int " << endl;
	cin >> x;
	// operator << mozemo takodje koristiti i za nadovezivanje
	cout << "Vrednost promenljive x je: " << x << " nadovezani text " << endl;

	cout << endl;
	cout << "__FOR PETLJA__ " << endl;
	cout << endl;

	// for petlja u C++
	for (int i = 0; i < 10; i++) {

		cout << i << endl;

	}

	// cisto radi razdvajanja ispisa
	cout << endl;
	cout << "__UNOS DVE VREDNOSTI__ " << endl;
	cout << endl;

	// unos dve vrednosti za redom
	int a, b;
	cout << "Unesite dva broja tipa int " << endl;
	//pri ucitavanju podataka, korsti se cin bez obzira na njihov tip
	// ali se zato tip promenljve u koje se smestaju mora biti razlicit
	cin >> a >> b;
	cout << "Suma je " << (a + b) << endl;

	cout << endl;
	cout << "__WHILE PETLJA__ " << endl;
	cout << endl;

	// while petlja u C++
	while ( a > b ){

		cout << (a - b) << endl;
		b += 11;

	}
    
	cout << endl;
	cout << "__WHILE PETLJA__ " << endl;
	cout << endl;

	// do while petlja u C++
	do {

		cout << (a - b) << endl;
		b += 11;

	} while (a > b);
	
	cout << endl;
	cout << "__IF__ " <<  endl;
	cout << endl;

	// if u C++
	int n = 10;
	if ( n > 10 ) {
		cout << "Broj je veci " << endl;
	}
	else if( n < 10 ){
		cout << "Broj je manji " << endl;
	}
	else {
		cout << "Broj je 10 " << endl;
	}

	cout << endl;
	cout << "__SSTRINGOVI__ " << endl;
	cout << endl;

	// Koriscenje stringova zahteva include string biblioteke na vrhu dokumenta(pogledati liniju 2)
	string ime;
	cout << "Unesite vase ime " << endl;
	cin >> ime;
	cout << "Pozdrav " << ime << endl;

	cout << endl;

	// mali program za bankomat
	int stanjeRacuna = 1000000;
	int opcija;
	int iznos;

	cout << "Pokenut je mali program za bankomat" << endl;

	do {

		cout << "1. Stanje racuna " << endl;
		cout << "2. Podizanje gotovine " << endl;
		cout << "3. Kraj rada" << endl;

		cin >> opcija;

		// primena switch case-a 
		switch ( opcija ) {

		case 1:
			cout << "Vase stanje racuna iznosi " << stanjeRacuna << endl;
			// na kraj svakog case-a mora se dodati break
			break;

		case 2:
			cout << "Unesite iznos koji zelite da podignete " <<  endl;
			cin >> iznos;
			if (stanjeRacuna >= iznos) {
				cout << "Podigli ste " << iznos << endl;
				stanjeRacuna -= iznos;
				cout << "Trenutno stanje vaseg racuna je " << stanjeRacuna << endl;
			}
			else {
				cout << "Nemoguce izvrsiti transakciju, nedovoljno stanje na racunu" << endl;
			}
			break;

		case 3:
			cout << "Izlazak iz programa" << endl;
			break;

		default:
			cout << "Opcija nije definisana " << endl;
		}


	} while (opcija != 3);


	// na kraj main funkcije dodaje se return 0 koji se koristi za proveru da li se izvrsila funkcija kako treba,
	//  inace u funkcijama se ne dodaje
	return 0;
}

// union struct??
// primitivnije alternative za klase
// ima manje mogucnosti od klase

// meorija koja se alocija je ekvivalentna double jer jer on zauzima najvise prostora
// manje opterecuje memoriju
union vrsteTipova {
	int x;
	float y;
	double z;
};

// alocirana memorija je zbir svih promeljivih
// vise opterecuje memoriju jer ostavlja prostor za zbir svih promenljivih koje sadrzi
struct nasStruct {
	int x;
	float y;
	double z;
};
