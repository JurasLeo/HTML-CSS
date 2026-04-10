/*Napisati računalni program kojim se unose proizvoljne vrijednosti za radijus baze
te za visinu valjka. Ispisati vrijednosti iznosa oplošja te volumena valjka. 𝑂 = 2 ·𝑟 · 𝜋 · 𝑣 
𝑉 = 𝑟^2· 𝜋 · 𝑣, gdje je r iznos polumjera baze a v iznos visine valjka*/


#include <stdio.h>
#include <math.h>

int main(){
    float r,v;

    printf("Unesite velicinu polumjera: ");
    scanf("%f",&r);
    printf("Unesite visinu: ");
    scanf("%f",&v);

    float O,V;
    O=2*r*3.14*v;
    V=pow(r,2)*3.14*v;

    printf("Oplosje iznosi: %.2f \n",O);
    printf("Volument iznosi: %.2f",V);

}