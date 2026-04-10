/*Napisati program koji za upisani broj ispisuje sve brojeve do toga broja i pored
njih ispisuje rijec PARAN ili NEPARAN u ovisnosti o tome ako je ispisani broj
paran ili neparan. Nula nije paran niti neparan broj.*/

#include<stdio.h>

int main(){
	
	int gornja,donja;
	
	printf("Unesite donju granicu intervala: ");
	scanf("%d",&donja);
	printf("Unesite gornju granicu intervala: ");
	scanf("%d",&gornja);
	
	for(int i=donja;i<=gornja;i++){
		
		if(i==0){
		
			}
		else if(i%2==0){
		printf("Broj %d je paran.\n",i);
			}
		else{
			printf("Broj %d je neparan.\n",i);
		}
		
	}
}