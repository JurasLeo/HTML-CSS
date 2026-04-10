/* Ucitati string od 4 recenice. Podijeliti ucitani string s na 4 podstringova s1, s2, s3, s4 koristeci separator ".".
U trecoj recenici pronaci sumu ASCII kodova svih velikih slova. U rekurzivnoj funkciji izracunati binarni ekvivalent dobivene sume Ascii kodova.
Ispisati sve dobivene vrijednosti.
*/

#include <iostream>
#include<string>
using namespace std;

void unos(string &s) {
	cout << "Unesite string od 4 recenice: ";
	getline(cin, s);

}
void podstringovi(string& s, string& s1, string& s2, string& s3, string& s4) {
	string separator = ".";
	int zadnja_pozicija = 0;
	int trenutna_pozicija = 0;
	int brojac = 1;
	zadnja_pozicija = s.find_first_of(separator);
	while (zadnja_pozicija != string::npos) {
		switch (brojac){
		case 1:
			s1 = s.substr(trenutna_pozicija, zadnja_pozicija - trenutna_pozicija);
			break;
		case 2:
			s2 = s.substr(trenutna_pozicija, zadnja_pozicija - trenutna_pozicija);
			break;
		case 3:
			s3 = s.substr(trenutna_pozicija, zadnja_pozicija - trenutna_pozicija);
			break;
		case 4:
			s4 = s.substr(trenutna_pozicija, zadnja_pozicija - trenutna_pozicija);
			break;
		default:
			break;
		}
		trenutna_pozicija = zadnja_pozicija + 2;
		zadnja_pozicija = s.find_first_of(separator, zadnja_pozicija + 1);
		brojac++;
	}
}
void ispis(string& s, string& s1, string& s2, string& s3, string& s4) {
	cout << "Recenica je: " << s << endl;
	cout << "Prva recenica je: " << s1 << endl;
	cout << "Druga recenica je: " << s2<< endl;
	cout << "Treca recenica je: " << s3 << endl;
	cout << "Cetvrta recenica je: " << s4 << endl;
}
void rekurzivna(int suma, int baza) {
	if (suma > baza - 1) {
		rekurzivna(suma / baza, baza);
	}
	cout << suma % baza;
}
void sumaascii(string &s3) {
	int suma = 0;
	for (int i = 0; i < s3.length(); i++){
		if (isupper(s3[i])) {
			suma += s3[i];
		}
		
	}
	cout << "Suma ascii koda 3. recenice iznosi: "<<suma<<endl;
	rekurzivna(suma, 2);


}


int main(){
	string s, s1, s2, s3, s4;
	unos(s);
	podstringovi(s, s1, s2, s3, s4);
	ispis(s, s1, s2, s3, s4);
	sumaascii(s3);
}


