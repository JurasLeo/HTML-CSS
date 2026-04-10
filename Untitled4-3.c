/*Napisati program koji od korisnika ocekuje unos 10 brojeva i izracunava sumu,
prosjecnu vrijednost, maksimalnu i minimalnu vrijednost.*/

#include<stdio.h>

int main(){
	
	float broj[10],max,min,suma=0;
	
	for(int i=0;i<10;i++){
	
	printf("Unesite %d. broj: ",i+1);
	scanf("%f",&broj[i]);
	
	suma+=broj[i];
	
	min=broj[0];
	max=broj[0];
	
	for(int i=0;i<10;i++){
	if(min>broj[i]){
		min=broj[i];
	}
	if(max<broj[i]){
		max=broj[i];
	}
}
}
    printf("Suma unesenih brojeva iznosi:%.0f",suma);
    printf("\nProsjek unesenih brojeva iznosi:%.2f",suma/10);
    printf("\nMin uneseni brojeva iznosi:%.0f",min);
    printf("\nMax uneseni brojeva iznosi:%.0f",max);
}