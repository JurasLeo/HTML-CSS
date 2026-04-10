/*Za ucitani broj nogometnih utakmica i broja klubova stvorite dvodim polje HNL..
Upisite u HNL za svaki klub broj postignutih klubova na svakoj utakmici
Stvorite jednodim polje PG u kojoj cete upisati prosjecan broj golova za svaki klub,isite polja HNL i PG*/

#include <iostream>
#define brojk 10
#define broju 30
using namespace std;

void unos(float HNL[brojk][broju]) {
    for (int i = 0; i < brojk; i++) 
        for (int j = 0; j < broju; j++){
        
            cout << "Unesite broj golova " << i + 1 << ". kluba:";
            cin >> HNL[i][j];

        
    }

}
int main()
{
    float HNL[brojk][broju];
    unos(HNL);
    
}
