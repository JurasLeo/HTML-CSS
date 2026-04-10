/*Izradite test koji omogucava korisniku da odabere odgovor. odmah se ispisuje jeli odgovor tocan ili ne i na kraju se ukupni bodovi ispisuju. 
Korisitit switch-case Napraviti 3 pitanja (po želji) sa abc odgovorima. Neka nakon svakog pitanja ispiše koji je odgovor točan ako korisnik krivo odgovori. 
Na kraju neka ispisuje: imate x točnih odgovora od ukupno 3.*/

#include<conio.h>
#include<stdio.h>

typedef struct{
	char odgovori;
}pp;

int main(){
 pp izraz[5];
 int uk,uk2,uk3;
 
 //prvo pitanje
 printf("Koje boje nebo?");
 printf("\nPonudeni odgovori su:\nplavo(a)\ncrno(b)\nzeleno(c)\nOdgovor:");
 scanf(" %s",&izraz[0].odgovori);
 
  ///
  switch(izraz[0].odgovori){
  case 'a':
  	uk=1;
printf("Odgovor %.c) je tocan.",izraz[0].odgovori);
break;
 case 'b':
 	uk=0;
printf("Odgovor je netocan.\nTocan odgovor je a)plavo.");
break;
 case 'c':
 	uk=0;
printf("Odgovor je netocan.\nTocan odgovor je a)plavo.");
break;
default:
	uk=0;
printf("Nepostojeci odgovor.");
}

//drugo pitanje
 printf("\n\Koje boje je limun? ");
 printf("\nPonudeni odgovori su:\nzute(a)\nplave(b)\ncrvene(c)\nOdgovor:");
 scanf(" %s",&izraz[1].odgovori);
 
  
  switch(izraz[1].odgovori){
  case 'a':
  	uk2=uk+1;
printf("Odgovor %.c) je tocan",izraz[1].odgovori);
break;
 case 'b':
 	uk2=uk+0;
printf("Odgovor je netocan.\nTocan odgovor je a)zute.");
break;
 case 'c':
 	uk2=uk+0;
printf("Odgovor je netocan.\nTocan odgovor je a)zute.");
break;
default:
	uk2=uk+0;
printf("Nepostojec odgovor.");

}

//trece pitanje
 printf("\nKoje boje je trava zelena? ");
 printf("\nPonudeni odgovori su:\nsmeda(a)\nnarancasta(b)\nzelena(c)\nOdgovor:");
 scanf(" %s",&izraz[2].odgovori);
 
 switch(izraz[2].odgovori){
  case 'a':
  	uk3=uk2+0;
printf("Odgovor je netocan.\nTocan odgovor je c)zelene.");
break;
 
 case 'b':
 	uk3=uk2+0;
printf("Odgovor je netocan.\nTocan odgovor je c)zelene.");
break;
 
 case 'c':
 	uk3=uk2+1;
printf("Odgovor %.c) je tocan",izraz[2].odgovori);
break;
default:
	uk3=uk2+0;
printf("Nepostojec odgovor.");
}
 
 if(uk3==0){
 	printf("\nUkupno imate 0 tocnih odgovora od 3 ");
 }
 else{
 	printf("\nUkupno imate %.d tocna odgovora od 3",uk3);
 }



getch();
}
