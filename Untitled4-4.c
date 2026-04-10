/*Napisati program koji će od korisnika tražiti unos n pozitivnih brojeva. Korisnik
prvo unosi broj n. Program će se zaustaviti ukoliko je unesen negativan broj.
Inače će izračunati i ispisati zbroj unesenih brojeva*/

#include<stdio.h>
int main(){
	
	int n,suma=0;
	
	printf("Unesite koliko brojeva zelite unijeti: ");
	scanf("%d",&n);
	int broj[n];
	
	for(int i=0;i<n;i++){
		printf("Unesite %d. broj: ",i+1);
		scanf("%d",&broj[i]);
		
		suma+=broj[i];
		if(broj[i]<0){
			printf("Greska uneseni broj je negativan");
			break;
			
		}
		
	}
	printf("\nZbroj unesenih brojeva je %d",suma);
getch();
}