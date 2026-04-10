/*Napravite program koji od korisnika traži unos imena (bez prezimena). Nakon
unosa program treba ispisati iz koliko slova se sastoji ime, koliko ima
samoglasnika i suglasnika te ime treba ispisati naopako s desna na lijevo.
*/

#include<stdio.h>
#include<string.h>
int main(){
	
	char name[15];
	int brojac=0,suglasnik=0,samoglasnik=0;
	
	printf("Unesite vase ime: ");
	scanf(" %s",&name);
	brojac+=strlen(name);
	printf("Vase ime se sastoji od %d slova.",brojac);
	strcpy(name, "aman");

	
	    
	    
	    
	
	
}