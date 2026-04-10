/*Definirati zapis Motor sa obaveznim komponentama: ime, godiste, kilometraža, cijena.
 Potrebno je unijeti podatke za 3 motora te za svaki izračunati starost=tekuća godina-godiste. 
 Starost je također komponenta zapisa motor. Potrebno je generirati ispis te izračunati prosječnu starost i prosječnu cijenu:
Motor         starost      Kilometraza          cijena         
Honda	       4               150000	        20000	
Ducati         8               10000             75000		
Kawasaki	   12             90000              60000          	
Prosjek starosti :8.00 godina
Prosjek cijena:51666,66 kn
*/

#include <stdio.h>

typedef struct{
	char motor[10];
	float godiste,km,cijena;
}Motor;
int main(){
	
	Motor prvi,drugi,treci;
	float prosjek_starosti,prosjek_cijena;
	printf("Unesite ime prvog motora: ");
	scanf(" %s",&prvi.motor);	
	printf("\nUnesite starost prvog motora: ");
	scanf("%f",&prvi.godiste);
	printf("\nUnesite kilometrazu prvog motora: ");
	scanf("%f",&prvi.km);
	printf("\nUnesite cijenu prvog motora: ");
	scanf("%f",&prvi.cijena);	
	///
	printf("\nUnesite ime druog motora: ");
	scanf(" %s",&drugi.motor);	
	printf("\nUnesite starost drugog motora: ");
	scanf("%f",&drugi.godiste);
	printf("\nUnesite kilometrazu drugog motora: ");
	scanf("%f",&drugi.km);
	printf("\nUnesite cijenu drugog motora: ");
	scanf("%f",&drugi.cijena);	
	///
	printf("\nUnesite ime treceg motora: ");
	scanf(" %s",&treci.motor);	
	printf("\nUnesite starost treceg motora: ");
	scanf("%f",&treci.godiste);
	printf("\nUnesite kilometrazu treceg motora: ");
	scanf("%f",&treci.km);
	printf("\nUnesite cijenu treceg motora: ");
	scanf("%f",&treci.cijena);	
	
	prosjek_starosti=(prvi.godiste+drugi.godiste+treci.godiste)/3;
	prosjek_cijena=(prvi.cijena+drugi.cijena+treci.cijena)/3;
	
	printf("Motor		Starost		    kilometraza		        cijena");
	printf("\n\n %s		  %.2f		    %.2f			       %.2f",prvi.motor,prvi.godiste,prvi.km,prvi.cijena);
	printf("\n %s   	  %.2f		    %.2f			       %.2f",drugi.motor,drugi.godiste,drugi.km,drugi.cijena);	
	printf("\n %s		  %.2f		   %.2f			     %.2f",treci.motor,treci.godiste,treci.km,treci.cijena);
	printf("\nProsjek starosti= %.2f",prosjek_starosti);
	printf("\nProsjek cijena= %.2f",prosjek_cijena);
	}