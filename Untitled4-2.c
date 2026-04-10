/*Izraditi program kojim se unose brojevi sve dok se ne unese broj 1. Nakon
završetka unosa potrebno je izračunati i ispisati sumu svih parnih i umnožak svih
neparnih brojeva te broj unesenih brojeva*/

#include<stdio.h>

int main(){
	
	int broj,suma_p=0,umnozak_n=1,brojac=0;
	
	do{
		printf("Unesite broj:");
		scanf("%d",&broj);
		brojac++;
		if(broj%2==0){
			suma_p+=broj;
		}
		else{
			umnozak_n*=broj;
		}
	}while(broj!=1);
	
	printf("Suma svih parih iznosi %d.",suma_p);
	printf("\nUmnozak svih neparnih iznosi %d.",umnozak_n);
	printf("\nUnijeli ste %d brojeva.",brojac);
}