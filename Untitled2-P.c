/*Napisati program koji sadrži proceduru kvadriraj. Proceduri se dostavlja
adresa varijable broj koja je deklarirana u glavnome dijelu programa. Procedura
izračunava kvadrat vrijednosti koja se nalazi na proslijeđenoj adresi i izračunatu
vrijednost glavnome programu vraća kroz isti argument. Vrijednost varijable
broj unosi korisnik. U glavnome dijelu programa potrebno je ispisati vrijednost
varijable broj prije i nakon poziva procedure kvadriraj.*/

#include<stdio.h>
int kvadriraj(int *broj){
	return *broj= *broj * *broj;
}

int main(){
	
	int num;
	
	printf("Unesite broj koji zeelite kvadrirati: ");
	scanf("%d",&num);
	
	printf("Vrijednost varijable broj prije poziva procedure iznosi: %d",num);
	kvadriraj(&num);
	printf("\nVrijednost varijable broj prije poziva procedure iznosi: %d",num);
	
	
	
}