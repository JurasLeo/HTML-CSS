/*Napisati program koji sadrži funkciju recip. Proceduri se iz glavnoga programa
prosljeđuje broj koji je unio korisnik. Ona izračunava vrijednost 1/broj i tu
vrijednost vraća kroz argument u glavni programa. U glavnome programu treba
izvesti ispis u formatu 1/broj=rezultat.*/

#include<stdio.h>
void recip(int num,float *rez){
    *rez= 1.0/num;
}

int main(){

    int broj;
    float rezultat;
    printf("Unesite broj: ");
    scanf("%d",&broj);

    recip(broj,&rezultat);
    printf("1/%d = %.2f",broj,rezultat);

}