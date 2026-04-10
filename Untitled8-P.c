
/*Napisati program koji sadrži funkciju gdjeJe_d. Procedura treba vratiti redni
broj na kome se u nizu znakova prvi puta pojavljuje slovo d (u obzir uzeti i veliko
slovo D). Niz znakova unosi korisnik u glavnome dijelu programa te se on
prosljeđuje proceduri. Procedura vraća rezultat kroz argument. U glavnome dijelu
programa, nakon poziva procedure, treba ispisati dobiveni rezultat.*/

#include <stdio.h>
#include <string.h>

void gdjeJe_d(char string[],int *brojReda){

    for (int i = 0; i < strlen(string); i++)
    {
        if(string[i]=='d' || string[i]=='D'){
            *brojReda=i+1;
            break;
        }  
    }
}


int main(){
    char string[30];

    printf("Unesite string: ");
    scanf(" %s",&string);

    int broj=0; // inicijalizirali smo na nulu da mozemo imati uvjet da nema slova d u stringu (ako je broj=0 onda nema slova d)

    gdjeJe_d(string,&broj);

    if(broj==0)
        printf("\nU stringu %s nema slova d (D). ",string,broj);
    else
        printf("\nU stringu %s slovo d (D) se prvi puta pojavljuje na mjestu %d.",string,broj);
}