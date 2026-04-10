/**/

#include <iostream>
#define BR_RED 3
#define BR_STUP 3
using namespace std;
void upis(float mat[BR_RED][BR_STUP],float suma_red[BR_RED],float suma_stup[BR_STUP]){
    for (int i = 0; i < BR_RED; i++)
        for (int j = 0; j < BR_STUP; j++) {
            cout << "Unesite broj matrice[" << i << "][" << j << "]=";
            cin >> mat[i][j];
            suma_red[i] += mat[i][j];
            suma_stup[j] += mat[i][j];
        }
}
void ispis(float mat[BR_RED][BR_STUP]) {
    for (int i = 0; i < BR_RED; i++){
        for (int j = 0; j < BR_STUP; j++) 
            cout<< mat[i][j] << "\t";
        cout << endl;
    }
        

        
}
void ispis_suma(float a[BR_STUP]) {
    for (int i = 0; i < BR_STUP; i++) {
        cout << "Suma je:" << a[i] << endl;

    }
}

float glavna_dijagonala(float mat[BR_RED][BR_STUP], float gd) {
    for (int i = 0; i < BR_RED; i++)
    {
        gd += mat[i][i];
    }
    return gd;
}
float sporedna_dijagonala(float mat[BR_RED][BR_STUP], float sd) {
    for (int i = 0; i < BR_RED; i++)
    {
        for (int j = 0; j < BR_STUP; j++)
            if (i + j == BR_STUP - 1)sd += mat[i][j];

        
        
    }
    return sd;
}

int main()
{
    float mat[BR_RED][BR_STUP], suma_red[BR_RED] = { 0 }, suma_stup[BR_STUP] = { 0 },gd=0,sd=0;
    upis(mat,suma_red,suma_stup);
    cout << endl;
    ispis(mat);
    cout << endl<<"Ispis suma redaka:"<<endl;
    ispis_suma(suma_red);
    cout << endl << "Ispis suma stupaca:" << endl;
    ispis_suma(suma_stup);
    cout << endl;
    cout <<"Suma glavne dijagonale je: "<<glavna_dijagonala(mat,gd);
    cout << endl;
    cout << "Suma sporedne dijagonale je: " << sporedna_dijagonala(mat, sd);
}


