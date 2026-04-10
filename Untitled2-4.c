/*Potrebno je napraviti program koji računa trošak najma vozila. U program se
unose sljedeći podaci:
 standardna cijena jednoga dana najma,
 ukupan broj dana najma (broj dana mora biti veći od 0, ako nije korisniku
dati prigodnu poruku).
U ovisnosti o broju dana najma kupcima se daju popusti po sljedećemu modelu
prikazanom u tablici. Potrebno je ispisati cijenu najma bez popusta te s
popustom. Do sedam dana nema popusta.
Broj dana najma Popust
8-14 5%
15-30 10%
>30 20%*/

#include<stdio.h>
#include<conio.h>

int main(){
	
	float stand_cijena,uk_broj_dana,ukupno,ukbz;

	printf("Unesite standardnu cijenu jednog dana najma:");
	scanf("%f",&stand_cijena);
	pocetak:
	printf("Unesite ukupan broj dana najma: ");
	scanf("%f",&uk_broj_dana);
	
	if(uk_broj_dana<=0){
		printf("Broj dana mora biti veci od 0");
		goto pocetak;
	}
	else if(uk_broj_dana<=7){
	    ukupno=uk_broj_dana*stand_cijena;
	    printf("Ukupna cijena najma je %.2f,nema popusta.",ukupno);
}
	 	 else if(uk_broj_dana>=8 && uk_broj_dana<=14){
	     ukupno=uk_broj_dana*stand_cijena;
	     ukbz=uk_broj_dana*stand_cijena*0.95;
	     printf("Ukupna cijena najma je %.2f,a s popustom je %.2f",ukupno,ukbz);
}
         else if(uk_broj_dana>=15 && uk_broj_dana<=30){
	     ukupno=uk_broj_dana*stand_cijena;
	     ukbz=uk_broj_dana*stand_cijena*0.90;
	     printf("Ukupna cijena najma je %.2f,a s popustom je %.2f",ukupno,ukbz);
}
        else{
        	ukupno=uk_broj_dana*stand_cijena;
	     ukbz=uk_broj_dana*stand_cijena*0.80;
	     printf("Ukupna cijena najma je %.2f,a s popustom je %.2f",ukupno,ukbz);  
		}
	
	
	getch();
}