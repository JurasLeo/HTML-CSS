/* Napisati program kojim korisnik unosi PIN od četiri znamenke (npr. 0451).
Unutar programa u varijablu kod spremiti ispravni PIN. Korisnik ima tri pokušaja
kako bi unio ispravan PIN. U slučaju ispravnoga unosa ispisati poruku
Otkljucano. Ako korisnik unutar tri pokušaja nije unio ispravan PIN, ispisati
poruku Zakljucano.*/

#include<stdio.h>
#include<string.h>
int main(){
	
	char pin[4],pin1[4];
	int brojac=0;
	
	printf("Unesite pin od cetiri znamenke: ");
	scanf(" %s",&pin);
	do{
		
		printf("\nUnesite tocan pin: ");
		scanf(" %s",&pin1);
		
		if(strcmp(pin1,pin)==1){
              printf("Otkljucano!");
              break;
        }
        else
            brojac++;
		}while(brojac<3);
		
	if(brojac==3){
	printf("Zakljucano");
	}
	
}
