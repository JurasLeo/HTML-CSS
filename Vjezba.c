/*Unijeti bodove od nekog studenta kroz polje za svaki ishod,također unijeti postotne udjele ili težine svakog ishoda.Na kraju ispisati score za taj testni scenarij
i1=30, i2=40, i3=10 i4=50, i5=0
t1=0.08, t2=0.28, t3=0.28, t4=0.31, t5=0.05
Ukupupno=31.9*/

#include<stdio.h>
#include<conio.h>
int main(){
float i[8],t[8],ukupno;
////
printf("Unesite 1. ishod: ");
scanf("%f",&i[0]);
printf("Unesite prvu tezinu: ");
scanf("%f",&t[0]);

printf("Unesite 2. ishod: ");
scanf("%f",&i[1]);
printf("Unesite drugu tezinu: ");
scanf("%f",&t[1]);

printf("Unesite 3. ishod: ");
scanf("%f",&i[2]);
printf("Unesite trecu tezinu: ");
scanf("%f",&t[2]);

printf("Unesite 4. ishod: ");
scanf("%f",&i[3]);
printf("Unesite cetvrtu tezinu: ");
scanf("%f",&t[3]);

printf("Unesite 5. ishod: ");
scanf("%f",&i[4]);
printf("Unesite petu tezinu: ");
scanf("%f",&t[4]);
//////
ukupno=i[0]*t[0]+i[1]*t[1]+i[2]*t[2]+i[3]*t[3]+i[4]*t[4];

printf("\nIshod\t\t\t Tezina\n__________\n");
printf("%2.f\t\t\t %2.f",i[0],t[0]);
printf("\n%2.f\t\t\t %2.f",i[1],t[1]);
printf("\n%2.f\t\t\t %2.f",i[2],t[2]);
printf("\n%2.f\t\t\t %2.f",i[3],t[3]);
printf("\n%2.f\t\t\t %2.f",i[4],t[4]);

printf("\nUkupno student ima %2.f posto od 100...",ukupno);



}