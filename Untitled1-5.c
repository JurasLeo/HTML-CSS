/*Napraviti računalni program u komu se definira zapis Student koji se sastoji iz
triju komponenti: ime, prezime i godina studija. Dalje treba deklarirati varijable za
tri različita studenta, pridružiti svakome sve komponente te ispisati ih u tri retka
od kojih je prvi naslovni a ostala dva vrijednosti komponenti za studenta. U ispisu
odvajati tabulatorima vrijednosti pojedinih komponenti. Naslov ispisa je
Ime Prezime God. studija*/

#include<conio.h>
#include<stdio.h>

typedef struct{
	char ime[10],prezime[10];
	int godina_studija;
	
}Student;

int main(){
	
	Student s[2];
	
	printf("Unesite ime prvog stuenta: ");
	scanf(" %s",&s[0].ime);
	printf("Unesite prezime prvog studenta: ");
	scanf(" %s",&s[0].prezime);
	printf("Unesite godinu studija studenta: ");
	scanf(" %d",&s[0].godina_studija);
	////kraj unosa za prvog studenta///
	
	printf("Unesite ime drugog stuenta: ");
	scanf(" %s",&s[1].ime);
	printf("Unesite prezime drugog studenta: ");
	scanf(" %s",&s[1].prezime);
	printf("Unesite godinu studija studenta: ");
	scanf(" %d",&s[1].godina_studija);
	///kraj unosa za drugog studenta//
	
	printf("Unesite ime treceg stuenta: ");
	scanf(" %s",&s[2].ime);
	printf("Unesite prezime drugog studenta: ");
	scanf(" %s",&s[2].prezime);
	printf("Unesite godinu studija studenta: ");
	scanf(" %d",&s[2].godina_studija);
	//kraj unosa treceg studenta//
	
	//ispis
	
	printf("\nIME\t\t\t PREZIME\t\tGOD. STUDIJA\n____________________________\n");
	printf(" \n %s\t\t\t %s\t\t\t %d",s[0].ime,s[0].prezime,s[0].godina_studija);
	printf(" \n %s\t\t\t %s\t\t\t %d",s[1].ime,s[1].prezime,s[1].godina_studija);
	printf(" \n %s\t\t\t %s\t\t\t %d",s[2].ime,s[2].prezime,s[2].godina_studija);


getch();
}