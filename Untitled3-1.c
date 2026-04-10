/*Treba napisati program za izračun konačne cijene u ovisnosti o načinu plaćanja
kupca. Prvo korisnik unosi cijenu, a nakon toga i znak za način plaćanja: g za
gotovinu, c za čekove, k za karticu. Pravila izračuna konačne cijene su:
 Ako kupac plaća gotovinom, neka se ispiše: “za gotovinu 15% popusta“ te
se ispiše kolika je konačna cijena.
 Ako plaća čekovima, a to se dozvoljava samo ako je cijena iznad 3000kn,
unosi se broj rata (od 1 do 6) te izračunava iznos jedne rate.
 Ako plaća karticom, dobije 5% popusta te korisnik bira broj rata: može
plaćati od 1 do 12 rata bez kamata. Ispisuje se cijena jedne rate.*/

#include<stdio.h>
#include<conio.h>

int main(){
	
	float cijena,uk,kartica;
	float rata;
	char nacin_placanja;
pocetak:
	printf("Unesite cijenu proizvoda: ");
	scanf("%f",&cijena);
	
	printf("Unesite nacin placanja:\ng za gotovinu\nc za cekove\nk za karticu\n");
    scanf(" %c",&nacin_placanja);
    
    switch(nacin_placanja){
    	
    	case 'g':
    	printf("Za gotovinu je 15 posto popusta");
    	uk=cijena*0.85;
    	printf("\nUkupna cijena je %.2f",uk);
    break;
    	
    	case 'c':
    	if(cijena>3000){
    	 printf("Unesite broj rate(1-6): ");
    	 scanf("%f",&rata);
    	 uk=cijena/rata;
    	 printf("Ukupno za platiti je %.2f.Iznos jedne rate je %.2f kn",cijena,uk);
    	 }
    	 else{
    	 	printf("Unesite cijenu vecu za placanje cekom.");
    	 	goto pocetak;
		 }
    break;
		
		
		case 'k':
			printf("Imate 5 posto popusta.\n");
			printf("Unesite broj rata(1-12): ");
			scanf("%f",&rata);
			uk=cijena*0.95;
			kartica=uk/rata;
			
			printf("Ukupno za platiti je %.2f.Cijena jedne rate iznosi:%.2f",uk,kartica);
	break;
			default:
			printf("Niste unijeli valjanu oznaku");
	}
			
	getch();
}