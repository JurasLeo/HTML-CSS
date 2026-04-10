/*Napisati program koji odreduje slovnu ocjenu studenta. Ucitavaju se tri ocjene
studenta (ocjene su u intervalu 0 do 100) i prema srednjoj vrijednosti odreduje se
konacna slovna ocjena. Pravila dodjele slovne ocjene su:
? Srednja vrijednost >= 90          "Ocjena je A"
? Srednja vrijednost >= 70 i < 90 ? "Ocjena je B"
? Srednja vrijednost >= 50 i < 70 ? "Ocjena je C"
  Srednja vrijednost < 50           "Ocjena je F"
*/

#include<stdio.h>

int main(){
	
	float ocjena1,ocjena2,ocjena3,srednja_vrijednost;
	
	//unos ocjena//
	printf("Unos ocjena su u intervalu 0 do 100\n");
	printf("Unesite prvu ocjenu studenta: ");
	scanf("%f",&ocjena1);
	printf("Unesite drugu ocjenu studenta: ");
	scanf("%f",&ocjena2);
	printf("Unesite trecu ocjenu studenta: ");
	scanf("%f",&ocjena3);
	
	//dodjela ocjene
	
	if(ocjena1>=90){
		printf("Prva ocjena studenta je (A)\n");
	}
	else if(ocjena1>=70 && ocjena1<90){
		printf("Prva ocjena studenta je (B)\n");
	}
	else if(ocjena1>=50 && ocjena1<70){
		printf("Prva ocjena studenta je (C)\n");
	}
	else{
		printf("Prva ocjena studenta je (F)\n");
	}
	//druga ocjena
	
		if(ocjena2>=90){
		printf("Druga ocjena studenta je (A)\n");
	}
	else if(ocjena2>=70 && ocjena2<90){
		printf("Druga ocjena studenta je (B)\n");
	}
	else if(ocjena2>=50 && ocjena2<70){
		printf("Druga ocjena studenta je (C)\n");
	}
	else{
		printf("Druga ocjena studenta je (F)\n");
	}
	//treca ocjena
	
		if(ocjena3>=90){
		printf("Prva ocjena studenta je (A)\n");
	}
	else if(ocjena3>=70 && ocjena3<90){
		printf("Prva ocjena studenta je (B)\n");
	}
	else if(ocjena3>=50 && ocjena3<70){
		printf("Prva ocjena studenta je (C)\n");
	}
	else{
		printf("Prva ocjena studenta je (F)\n");
	}
	//srednja vrijednost ocjena
	
	srednja_vrijednost=(ocjena1+ocjena2+ocjena3)/3;
	
	if(srednja_vrijednost>=90){
		printf("Prosjek ocjena studenta je %.2f(A)\n",srednja_vrijednost);
	}
	else if(srednja_vrijednost>=70 && srednja_vrijednost<90){
		printf("Prosjek ocjena studenta je %.2f(B)\n",srednja_vrijednost);
	}
	else if(srednja_vrijednost>=50 && srednja_vrijednost<70){
		printf("Prosjek ocjena studenta je %.2f(C)\n",srednja_vrijednost);
	}
	else{
		printf("Prosjek ocjena studenta je %.2f(F)",srednja_vrijednost);
    }
	getch();
}