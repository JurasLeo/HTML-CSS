/*Potrebno je unijeti neki broj n od 1-10. 
Tada se unosi neki broj od 50-100 (napraviti validaciju) koji predstavlja gornju granicu. 
Potrebno je ispisati: koliko ima višekratnika broja n u rasponu od (n, gornja granica), 
ispisati svaki od višekratnika, te ispisati zbroj svih višekratnika. 
Primjer:  

Broj je: 5 

Gornja granica: 52 

Višekratnici su: 5,10,15,….50 

Ima točno 10 višekratnika broja 5 između 5 i 52 

Zbroj svih višekratnika=275 */

#include<stdio.h>

int main(){
	int n,gornjagranica;
	printf("Unesite neki broj 1-10: ");
	scanf("%d",&n);
	do{
	printf("Unesite neki broj 50-100: ");
	scanf("%d",&gornjagranica);
	}while(gornjagranica<=50 || gornjagranica>=100);
	
	
	int brojac=0;
	int zbroj=0;
	for(int i=n;i<gornjagranica;i+=n){
		printf("%d,",i);
		brojac++;
		
		zbroj+=i;
	
	}
	printf("\nIma ih: %d",brojac);
	printf("\n%d",zbroj);
}