/*Napisati program koji simulira rad mašine za kavu. 
Staviti nekoliko odabire (kratka kava, machiatto, capuccino, čaj…)
I nakon toga osmisliti dijalog sa mašinom.
TS1:Napitak:Kratka kava,novac 5kn...ispis ostatak 1kn,uzmite napitak.
TS2:Napitak:machiato,novac 3kn...,ubacili ste 3kn,ubacite  jos 2kn...ispis:uzmite napitak.
TS3:Napitak:capuccino,novac 1kn...,ubacili ste 1kn,ubacite  jos 3.5kn...ubacili ste 2kn,ubacite  jos 1.5kn..."ubacili ste jos 1.5"...ispis:uzmite napitak.
TS4:Napitak:capuccino,novac 3kn...,ubacili ste 3kn,ispis:uzmite napitak.*/

#include<stdio.h>
#include<conio.h>

int main(){
	
    float cijena,novac;
	char napitak;
	
	
	printf("Unesite koji napitak zelite:\n1 za kratka kava\n2 za machiatto\n3 za capuccino\n4 za caj\n");
	scanf(" %c",&napitak);
	
	
	float suma=0;
	
	
	
	switch(napitak){
		
		case '1':
			printf("\nCijena kratke kave iznosi 4 kn.");
			for(suma;suma<4;novac++){
				cijena=4;
				printf("\nUbacite %.1f kn: ",cijena-suma);
				scanf("%f",&novac);
				suma+=novac;
				if(suma<4){
					printf("\nUbacili ste %.1f kn.",suma);
				}
				
				
				
				
			
				
	        }
	        if(suma>4){
	        	printf("\nUzmite ostatak %.1f kn",suma-cijena);
	        	
			}
			printf("\nSacekajte neko vrijeme i uzmite napitak.:)");
		break;
		
		case'2':
			
			printf("\nCijena machiatto iznosi 5 kn.");
			for(suma;suma<5;novac++){
				cijena=5;
				printf("\nUbacite %.1f kn: ",cijena-suma);
				scanf("%f",&novac);
				suma+=novac;
				if(suma<5){
					printf("\nUbacili ste %.1f kn.",suma);
				}
				
				
				
				
			
				
	        }
	        if(suma>5){
	        	printf("\nUzmite ostatak %.1f kn",suma-cijena);
	        	
			}
			printf("\nSacekajte neko vrijeme i uzmite napitak.:)");
			break;
			
			case '3':
				
				printf("\nCijena capuccino iznosi 4.50 kn.");
			for(suma;suma<4.50;novac++){
				cijena=4.50;
				printf("\nUbacite %.1f kn: ",cijena-suma);
				scanf("%f",&novac);
				suma+=novac;
				if(suma<4.50){
					printf("\nUbacili ste %.1f kn.",suma);
				}
				
				
				
				
			
				
	        }
	        if(suma>4.50){
	        	printf("\nUzmite ostatak %.1f kn",suma-cijena);
	        	
			}
			printf("\nSacekajte neko vrijeme i uzmite napitak.:)");
			break;
			
			case '4':
				
				printf("\nCijena caja iznosi 3 kn.");
			for(suma;suma<3;novac++){
				cijena=3;
				printf("\nUbacite %.1f kn: ",cijena-suma);
				scanf("%f",&novac);
				suma+=novac;
				if(suma<3){
					printf("\nUbacili ste %.1f kn.",suma);
				}
				
				
				
				
			
				
	        }
	        if(suma>3){
	        	printf("\nUzmite ostatak %.1f kn",suma-cijena);
	        	
			}
			printf("\nSacekajte neko vrijeme i uzmite napitak.:)");
			break;
			default:
				printf("Unijeli ste krivi broj");
			
	}
	
	getch();
}