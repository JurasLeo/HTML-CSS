/*Koristiti switch-case. Klijent može odabrati snagu svog automobila: a)do 60 konja, b) 60-100, c)100 i više. 
Odmah bira i dali želi ili ne kasko ( d ili n). Osiguranje za auto košta 30 kn za svaku jedinicu konjske snage ako je ispod 60 konja, ako je od 60-100 je 40 kn a iznad 100 je 60 kuna. 
Kasko je za klijente koji imaju snažne aute (iznad 150 konja) sniženo za 30% a inače za sve druge iznosi 80% ukupne cijene osiguranja. 
Ispisati konačnu cijenu za platiti. Primjer:c 
Snaga u konjima: 160, kasko: d odabire se slučaj c)polica iznosi 9600, kasko 7680 , a uz 30% popusta kasko=5376. UKUPNO za platiti=14976kn*/

#include<stdio.h>
int main(){
	
	char odabir,kasko;
	float ukupno,osiguranje,kasko_iznos,popust;
	int konjska_snaga;	
		
		printf("Odaberite snagu automobila:\na)do 60 konja\nb) 60-100\nc)100 i vise\n");
		scanf(" %c",&odabir);
		printf("Zelite kasno:d ili n\n");
		scanf(" %c",&kasko);
		switch(odabir){
		case 'a': 
            printf("\nUnesite snagu vaseg automobila u konjskim snagama: ");
            scanf("%d",&konjska_snaga);
            osiguranje=konjska_snaga*30;
            if(kasko=='d' || kasko=='D'){
                kasko_iznos=osiguranje*0.8;
                ukupno=osiguranje+kasko_iznos;
			}
            else{
                ukupno=osiguranje;
            }
            break;
            
        case 'b':
        	printf("\nUnesite snagu vaseg automobila u konjskim snagama: ");
            scanf("%d",&konjska_snaga);
            osiguranje=konjska_snaga*40;
            if(kasko=='d' || kasko=='D'){
                kasko_iznos=osiguranje*0.8;
                ukupno=osiguranje+kasko_iznos;  
			}
            else{
                ukupno=osiguranje;
            }
            break;
            
        case'c':
        	printf("\nUnesite snagu vaseg automobila u konjskim snagama: ");
            scanf("%d",&konjska_snaga);
            osiguranje=konjska_snaga*60;
            if(kasko=='d' || kasko=='D'){
                if(konjska_snaga>150){
                    kasko_iznos=(osiguranje*0.8)*0.7;
                    popust=0.3*osiguranje*0.8;
                }
                else{
                kasko_iznos=osiguranje*0.8;
                }   
               
                ukupno=osiguranje+kasko_iznos;
            }
            else{
                ukupno=osiguranje;
            }
            break;
	}
	printf("\nSnaga u konjima %d, Odabire se slucaj %c, kasko %c, \nIznos police %.2f kn.\nIznos kaska %.2f kn,a uz 30 %% popusta na kasko %.2f,\nUKUPNO=%.2fkn ",konjska_snaga,odabir,kasko, osiguranje, kasko_iznos/0.7,kasko_iznos,ukupno);
}