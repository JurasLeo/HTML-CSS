/*Napisati program koji traži od korisnika željeni broj unosa te nakon toga traži
unos toliko brojeva. Po unosu ispisuje sumu brojeva, srednju vrijednost te najveći
i najmanji do tada uneseni broj. Koristiti polja.
*/

#include<stdio.h>
int main(){
	
	int n,min,max;
	float suma=0;
	printf("Unesite koliko brojeva zelite unijeti: ");
	scanf("%d",&n);
	int broj[n];
	
	for(int i=0;i<n;i++){
		printf("Unesite %d. broj: ",i+1);
		scanf("%d",&broj[i]);
		
		suma+=broj[i];
		
	min=broj[0];
	max=broj[0];
	
	for(int i=0;i<n;i++){
		if(min>broj[i]){
			min=broj[i];
		}
		if(max<broj[i]){
			max=broj[i];
		}
	}
}
    printf("Suma unesenih brojeva iznosi:%.0f",suma);
    printf("\nProsjek unesenih brojeva iznosi:%.2f",suma/n);
    printf("\nMin uneseni broj iznosi:%d",min);
    printf("\nMax uneseni broj iznosi:%d",max);
}