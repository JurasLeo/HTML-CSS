#include <stdio.h>
#include <conio.h>
typedef struct{
	char ime[20],prezime[20];
	float bonus_bodovi,kune;
	
}KINO;
int main(){
float cijena;
int broj;
KINO osoba;
printf ("Unesite cijenu kino ulaznice:");
scanf("%f",&cijena);
printf("Unesite broj ulaznica: ");
scanf("%d",&broj);
printf("Unesite ime korisnika:");
scanf(" %s",&osoba.ime);
printf("Unesite prezime korisnika:");
scanf(" %s",&osoba.prezime);
printf("Unesite broj bonus bodova: ");
scanf("%f",&osoba.bonus_bodovi);
printf("Unesite iznos kuna na kartici: ");
scanf("%f",&osoba.kune);
float ukupno=osoba.bonus_bodovi+osoba.kune;
float racun=cijena*broj;
if(ukupno<racun){
printf("\nUkupno za platiti je: %.2f kn, imate: %.2f bonusa, %.2f kuna, morate nadoplatiti: %.2f ",racun,osoba.bonus_bodovi,osoba.kune,racun-ukupno);
}
 else if(ukupno>racun){
 	if(ukupno>osoba.bonus_bodovi){
 		printf("\nUkupno za platiti je: %.2f kn, imate: %.2f bonusa, %.2f kuna, ostalo vam je: %.2f bonusa i %.2f kn ",racun,osoba.bonus_bodovi,osoba.kune,osoba.bonus_bodovi-racun,osoba.kune);
	 }
	 else{
	 	printf("\nUkupno za platiti je: %.2f kn, imate: %.2f bonusa, %.2f kuna, ostalo vam je: 0 bonusa i %.2f kn ",racun,osoba.bonus_bodovi,osoba.kune,ukupno-racun);	
	 	
	 }
	}
	
 else{
	printf("\nUkupno za platiti je: %.2f kn, imate: %.2f bonusa, %.2f kuna, ostalo vam je: 0 bonusa i 0 kn ",racun,osoba.bonus_bodovi,osoba.kune);	
}



return 0;
}