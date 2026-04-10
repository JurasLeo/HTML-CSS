/*Potrebno je izraditi program kojim se unosi neki broj koji ne smije biti u intervalu
od -100 do 100 i mora biti paran. Ako uneseni broj zadovoljava uvjete, izvesti
ispis "Broj XX zadovoljava postavljene uvjete" (npr. za uneseni broj 122 ispis je
"Broj 122 zadovoljava postavljene uvjete"). Ako uneseni broj ne zadovoljava
uvjet, tada izvesti ispis "Broj XX ne zadovoljava postavljene uvjete" (npr. za
uneseni broj -65 ispis je "Broj 65 ne zadovoljava postavljene uvjete".*/

#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){
	
	int number;
	
	printf("Unesite neki broj: ");
	scanf("%d",&number);
	
	if(number>-100 && number<100){
		printf("Broj %d ne zadovoljava postavljene uvjete",number);
	}
	
	else if(number/2*2==number){
	
	printf("Broj %d zadovoljava postavljene uvjete",number);
}

    else{
    	printf("Broj %d ne zadovoljava postavljene uvjete",number);
	}
	
	
	
	getch();
}