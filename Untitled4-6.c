/*Izraditi program koji će tražiti unos dvaju brojeva te izračunati i ispisati zbroj svih
brojeva između unesenih brojeva, uključujući i te brojeve.*/

#include<stdio.h>

int main(){
	
	int broj1,broj2,suma=0;
	
	printf("Unesite prvi broj: ");
	scanf("%d",&broj1);
	printf("Unesite drugi broj: ");
	scanf("%d",&broj2);
	
	for(int i=broj1;i<=broj2;i++){
		suma+=i;
	}
	printf("Suma:%d",suma);
}