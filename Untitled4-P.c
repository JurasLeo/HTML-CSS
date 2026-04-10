/*Napisati program u kome se nalazi procedura provjera kojoj se dostavlja cijeli
broj, a ona vraća P ako je broj paran, odnosno N ako je neparan. Ako je nula,
vraća se 0. U glavnome dijelu programa korisnik treba unijeti željeni broj unosa.
Potom se uneseni brojevi spremaju u polje. Nakon unosa, u glavnome se dijelu
programa izvodi ispis u dva stupca. U prvome se stupcu nalazi element polja, a u
drugome vrijednost koju će kroz povratni tip vratiti procedura provjera kojoj
se dostavlja element polja.*/
#include<stdio.h>

void provjera(int broj,char *tip){
if(broj==0)
        *tip='0';
    else if(broj%2==0)
        *tip='P';
    else
        *tip='N';
}
int main(){
	int n;
	
	printf("Unesite zeljeni broj unosa: ");
	scanf("%d",&n);
	
	int broj[n];
	
	for(int i = 0 ; i<n; i++){
		printf("Unesite %d. broj: ",i+1);
		scanf("%d",&broj[i]);
	}
	
	//ispis
	char tip;
	printf("\nBroj\tStatus\n----------------------\n");
	for(int i = 0 ; i<n; i++){
		
		provjera(broj[i],&tip);
		printf("%d \t %c \n",broj[i],tip);
	}
	
	
}