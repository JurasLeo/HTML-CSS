
#include <iostream>
#include"Utrke.h"

using namespace std;

int main(){
utrka U;
maraton M;    
bicikl B;
automobil A;

    cout << "Unesite podatke za utrku." << endl;
    U.unos();
    cout << "Ispis podataka za utrku." << endl;
    cout << "______________________________" << endl;
    U.ispis();
    cin.ignore();
    //
    cout <<endl<<"Unesite podatke za maraton utrku." << endl;
    M.unos();
    cout << "Ispis podataka za maratonsku utrku."<<endl;
    cout << "______________________________" << endl;
    M.ispis();
    //
    cout <<endl<<"Unesite podatke za biciklisticku utrku." << endl;
    cin.ignore();
    B.unos();
    cout << "Ispis podataka za utrku." << endl;
    cout << "______________________________" << endl;
    B.ispis();
    //
    cout <<endl<<"Unesite podatke za auto utrku." << endl;
    cin.ignore();
    A.unos();
    cout << "Ispis podataka za utrku." << endl;
    cout << "______________________________" << endl;
    A.ispis();
   
}

