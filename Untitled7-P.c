/*Napisati program koji sadrži proceduru brojSlova_a. Procedura treba vratiti
broj pojavljivanja slova a (u obzir uzeti i veliko slovo A) u nizu znakova koji je
proslijeđen proceduri. Niz znakova unosi korisnik u glavnome dijelu programa.
Nakon poziva procedure, u glavnome dijelu programa treba ispisati rezultat koji
je procedura vratila kroz povratni tip.*/

#include<stdio.h>
#include <string.h>

int brojSlova_a(char string[]){
    int brojac=0;

        for (int i = 0; i < strlen(string); i++)
        {
            if(string[i]=='a' || string[i]=='A')
                brojac++;
        }
		return brojac;
    }

    int main(){
	
	char string[20];
	
	printf("Unesite niz znakova: ");
	scanf(" %s",&string);
	
	int brojac=brojSlova_a(string);
	printf("U unesenom stringu %s ima %d slova a (A).",string,brojac);
}