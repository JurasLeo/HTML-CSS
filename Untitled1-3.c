/*Napisati računalni program za izračun prijeđenoga puta u jednome mjesecu.
Korisnik unosi udaljenost od kuće do posla (float) i nakon toga unosi broj dana
(int) koliko u mjesecu ide na posao. Program mora ispisati prijeđenu
kilometražu u jednome mjesecu (na dvije decimale) uzevši u obzir da se u jednom
danu prijeđe put od kuće na posao i s posla kući.*/

#include<conio.h>
#include<stdio.h>

int main(){
	
	float put,ukupno;
	int dani;
	
	printf("Unesite udaljenost kuce od posla: ");
	scanf("%f",&put);
	
	printf("Unesite broj dana na poslu: ");
	scanf("%d",&dani);
	
	ukupno=2*put*dani;
	

    printf("U jednom mjesecu prijede %.2f km od kuce do posla",ukupno);


getch();
}