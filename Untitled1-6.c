/*Napraviti računalni program kojim se deklariraju tri polja od po dva elemenata
(obratiti pažnju na tip podatka – vidjeti primjer ispisa). Korisnik treba unijeti
elemente prvih dvaju polja. Elementi trećega polja dobit će se zbrajanjem tako da
je 1. element 3. polja zbroj 1. elementa 1. polja te 1. elementa 2. polja. Jednako se
dobije i 2. element 3. polja. Ispisati dva retka sa tri vrijednosti – vrijednost prvoga,
drugoga te trećega polja. Npr:
2.1 3.2 5.3
1.6 2.1 3.7*/

#include<conio.h>
#include<stdio.h>

int main(){
	
	float polje[3],polje2[3],polje3[3];
	
	printf("Unesite vrijednost prvog elementa prvog polja: ");
	scanf("%f",&polje[0]);
	printf("Unesite vrijednost drugog elementa prvog polja: ");
	scanf("%f",&polje[1]);
	//prvo polje 
	
		printf("Unesite vrijednost prvog elementa drugog polja: ");
	scanf("%f",&polje2[0]);
	printf("Unesite vrijednost drugog elementa drugog polja: ");
	scanf("%f",&polje2[1]);
	//drugo polje
	
	polje3[0]=polje[0]+polje2[0];
	polje3[1]=polje[1]+polje2[1];
	//trece polje
	
	//ispis
	
	printf("%.1f + %.1f = %.1f",polje[0],polje2[0],polje3[0]);
	printf("\n%.1f + %.1f = %.1f",polje[1],polje2[1],polje3[1]);
	
	
	getch();
}