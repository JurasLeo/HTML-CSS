/*Napisi zadatak gdje korisnik unosi n razlicitih unosa u kunama(n je proizvoljan).Koristiti polja i petlju po zelji.
Nakon toga unosi se tecaj za mijenjati te se na kraju ispisuje tablica poput ove
Kune         Funte
__________________
1000          120
2000          240

Ukupno izmjenjeno:3000kn*/

#include<stdio.h>

int main(){
	
	
	int n;
	
	printf("Unesite koliko unosa u kunama zelite: ");
	scanf("%d",&n);
	
	float kune[10],tecaj,ukupno=0,funte[10];
	
	
	for(int i = 0;i<n; i++){
		
		printf("Unesite %d. cijenu u kunama koju zelite mjenjati: ",i+1);
		scanf("%f",&kune[i]);
	ukupno+=kune[i];
	}
	
	
	printf("Unesite tecaj za funte:");
	scanf("%f",&tecaj);
	
	for(int i=0;i<n;i++){
	funte[i]=kune[i]/tecaj;
	}
	

	printf("\nKune              Funte");
	printf("\n______________________");
	for(int i = 0;i<n; i++){
	
	printf("\n%.2f\t\t\t%.2f",kune[i],funte[i]);
	}
printf("\n\nUkupno izmjenjeno je %f",ukupno);
}