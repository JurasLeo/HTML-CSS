/*Potrebno je izraditi računalni program kojim se od korisnika traži unos podataka za n boca soka. 
Svaki se sok unosi sa slijedećim podacima: marka, cijena, kolicina. 
Sok  je zapis sa upravo navedenim komponentama. 
Komponenta ukupna_cijena dobiva se kroz proceduru Ukupno koja tu vrijednost vraća kroz argument.
 Procedura prima jedan i vraća vrijednost kroz 1 argument.
 Ispisati po retcima sve podatke koje zapis sok sadrži, uključujući i ukupnu cijenu, te ispisati koji je sok najjeftiniji u obliku: 
 Sok marke juicy je najjeftiniji, i košta 6 kn.  

Marka      cijena     kolicina     ukupno 

Juicy           6                 2            12 

Bravo           9                 1            9 */
#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct{
 char marka[30];
 float cijena,ukupno;
 int kolicina;		
}Sok;

void Ukupno (Sok *ukupna_cijena){
	ukupna_cijena->ukupno=ukupna_cijena->cijena*ukupna_cijena->kolicina;
}
int main(){
	int n;
	printf("\nUnesite koliko sokova zelite unijeti: ");
	scanf("%d",&n);
	Sok sok[n];
	for (int i=0;i<n;i++){
		printf("\nUnesite marku %d. soka: ",i+1);
		scanf(" %s",&sok[i].marka);	
		printf("\nUnesite cijenu %d. soka: ",i+1);
		scanf("%f",&sok[i].cijena);
		printf("\nUnesite kolicinu %d. soka: ",i+1);
		scanf("%d",&sok[i].kolicina);
		Ukupno(&sok[i]);
	}
	printf("\nMarka      cijena     kolicina     ukupno ");
	for (int i=0;i<n;i++){
	printf("\n%s          %.2f         %d         %.2f",sok[i].marka,sok[i].cijena,sok[i].kolicina,sok[i].ukupno);
}
	int min=sok[0].cijena;
	for(int i=0;i<n;i++){
		if(min>sok[i].cijena){
			min=sok[i].cijena;
	}
		
	
	

	}
	printf("Najjeftiniji je %d",min);
	
}