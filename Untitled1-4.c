/*Napisati računalni program za kalkulator konverzije valuta. Za unesenu decimalnu
vrijednost novca u kunama potrebno je ispisati vrijednost u četiri strane valute
(EUR, USD, CHF, GBP) na dvije decimale. Konverziju napraviti prema sljedećem
tečaju:
1 EUR = 7,55 KN
1 USD = 5,85 KN
1 CHF = 6,26 KN
1 GBP = 9,32 KN*/

#include<conio.h>
#include <stdio.h>
int main(){
  
  float kuna,eur,usd,chf,gbp;
  
  printf("Unesite vrijednost u kunama: ");
  scanf("%f",&kuna);
  
  eur=kuna/7.55;
  usd=kuna/5.85;
  chf=kuna/6.26;
  gbp=kuna/9.32;
  
 printf("Kuna: %.2f",kuna);
    printf("\nEuro: %.2f",eur);
    printf("\nDolar: %.2f",usd);
    printf("\nCHF: %.2f",chf);
    printf("\nGBP: %.2f",gbp);
    
  getch();
}

