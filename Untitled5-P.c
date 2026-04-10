/*Unesite jedinicnu cijenu nekog proizvoda i njegovu kolicinu i vratite kroz argument ukupno za platiti, 
iznos pdv-a i ukupno za platiti sa pdv-om*/

#include<stdio.h>

void proizvod(float cijena,int kolicina,float *pdv,float *ukupno,float *ukupnopdv);

int  main(){
	float cijena,ukupno,pdv,ukupnopdv;
	int kolicina;
	
	printf("Unesite cijenu proizvoda: ");
	scanf("%f",&cijena);
	printf("Unesite kolicinu proizvoda: ");
	scanf("%d",&kolicina);
	
	
	proizvod(cijena,kolicina,&pdv,&ukupno,&ukupnopdv);
	printf("Ukupna cijena proizvoda bez pdv-a iznosi: %.1f\nCijena s pdv-om iznosi: %.1f\nPDV iznosi %.0f.",ukupno,ukupnopdv,pdv);
	
}

void proizvod(float cijena,int kolicina,float *pdv,float *ukupno,float *ukupnopdv){
	*ukupno=cijena*kolicina;
	*pdv=0.25*cijena*kolicina;
	*ukupnopdv= *ukupno+(* pdv);
}