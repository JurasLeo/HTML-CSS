#pragma once
#include<string>
#include<iostream>
using namespace std;

class utrka {
private:
	string naziv_utrke;
	string mjesto_odrzavanja;
	string datum_vrijeme;
	float duljina_utrke;
	float rezultat_pobjednika;
public:
	void unos();
	void ispis();
	
};

void utrka::unos() {
	cout << "Unesite naziv utrke: ";
	getline(cin, naziv_utrke);
	cout << "Unesite mjesto odrzavanja utrke: ";
	getline(cin, mjesto_odrzavanja);
	cout << "Unesite vrijeme i datum utrke: ";
	getline(cin, datum_vrijeme);
	cout << "Unesite duljinu utrke(U KILOMETRIMA): ";
	cin >> duljina_utrke;
	cout << "Unesite rezultat pobjednika utrke(MINUTE): ";
	cin >> rezultat_pobjednika;
}
void utrka::ispis() {
	cout << "Naziv utrke je: " << naziv_utrke << endl;
	cout << "Mjesto odrzavanja je: " << mjesto_odrzavanja << endl;
	cout << "Datum utrke je: " << datum_vrijeme << endl;
	cout << "Duljina utrke iznosi: " << duljina_utrke << endl;
	cout << "Rezultat pobjednika je: " << rezultat_pobjednika << endl;
}

class maraton : public utrka {
private:
	int broj_natjecatelja;
	int broj_zemalja;
public:
	void unos();
	void ispis();
};

void maraton::unos() {
	utrka::unos();

	cout << "Unesite broj natjecatelja na utrci: ";
	cin >> broj_natjecatelja;
	cout << "Unesite broj zemalja na natjecanju:";
	cin >> broj_zemalja;
}

void maraton::ispis() {
	utrka::ispis();

	cout << "Broj natjecatelja na utrci je: " << broj_natjecatelja << endl;
	cout << "Broj zemalja na natjecanju iznosi: " << broj_zemalja << endl;
}

class bicikl : public utrka {
private:
	int broj_etapa_utrke;
	
public:
	void unos();
	void ispis();
};

void bicikl::unos() {
	utrka::unos();
	cout << "Unesite broj etapa utrke: ";
	cin >> broj_etapa_utrke;
}

void bicikl::ispis() {
	utrka::ispis();
	cout << "Broj etapa utrke iznosi: "<< broj_etapa_utrke<<endl;

}

class automobil : public utrka {
private:
	int broj_marki_auta;
	string marka_auta_pobjednika;

public:
	void unos();
	void ispis();
};

void automobil::unos() {
	utrka::unos();
	cout << "Unesite broj marki automobila na utrci: ";
	cin >> broj_marki_auta;
	cin.ignore();
	cout << "Unesite marku automobila pobjednika: ";
	getline(cin, marka_auta_pobjednika);
}

void automobil::ispis() {
	utrka::ispis();
	cout << "Broj marki automobila na utrci: "<<broj_marki_auta<<endl;
	cout << "Marka automobila pobjednika je: "<<marka_auta_pobjednika<<endl;
	
}

