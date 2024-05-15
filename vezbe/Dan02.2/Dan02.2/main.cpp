#include <iostream>
using namespace std;

// typedef  - definisanje pseudo tipa podatka
// typedeff [trenutno ime(tipa podatka)] [novo ime]
 
typedef int eur;
typedef int usd;

// mogu se koristiti modifikatori kao long, unsigned...
eur eurKupovni = 117;
eur eurProdajni = 118;

usd usdKupovni = 103;
usd usdProdajni = 104;

int main() {

	int opcija;
	int drugaOpcija;
	int iznos;

	do {

		cout << "Glavni meni " << endl;
		cout << "1. Kupi " << endl;
		cout << "2. Prodajni " << endl;
		cout << "3. Izlaz " << endl;

		cin >> opcija;

		// system clearscreen - brise sve sto je trenutno ispisano trenutno na konzoli
		system("cls");

		switch(opcija) {
		case 1: 

			cout << "1. EUR" << endl;
			cout << "2. USD" << endl;

			cin >> drugaOpcija;
			system("cls");

			cout << "Iznos" << endl;
			cin >> iznos;

			if (drugaOpcija == 1) {
				cout << "Racun je " << (iznos * eurKupovni) << " rsd" << endl;
			}
			else if (drugaOpcija == 2) {
				cout << "Racun je " << (iznos * usdKupovni) << " rsd" << endl;

			}
			else {
				cout << "Pogresna opcija! " << endl;
			}

			// break mora na kraj za svaki case!!!
			break;


		case 2:

			cout << "1. EUR" << endl;
			cout << "2. USD" << endl;

			cin >> drugaOpcija;
			system("cls");

			cout << "Iznos" << endl;
			cin >> iznos;

			if (drugaOpcija == 1) {
				cout << "Racun je " << (iznos * eurProdajni) << " rsd" << endl;
			}
			else if (drugaOpcija == 2) {
				cout << "Racun je " << (iznos * usdProdajni) << " rsd" << endl;

			}
			else {
				cout << "Pogresna opcija! " << endl;
			}

			// break mora na kraj za svaki case!!!
			break;
		case 3:

			cout << "Izlaz " << endl;
			system("cls");
			break;
		
		default:
			cout << "Pogresna opcija" << endl;
		}

	} while ( opcija != 3);


	// ne znam sto je ovo dodavao, samo da pokaze da moze 
	typedef int arr[3];
	arr nasNiz = { 1, 2, 3 };

	return 0;
}