/*Napisati racunalni program za kalkulator konverzije dimenzija. Za unesenu
decimalnu vrijednost duljine u metrima ispisati vrijednost duljine u milimetrima,
centimetrima i kilometrima na tri decimale. */

#include<conio.h>
#include<stdio.h>

int main(){
	
	float metar,mm,cm,km;
	
	printf("Unesite vrijednost u metrima: ");
	scanf("%f",&metar);
	
	mm=metar*1000;
	cm=metar*100;
	km=metar/100;
	
	printf("%.3f metra je:\n%.3f milimetra\n%.3f centimetra\n%.3f kilometar",metar,mm,cm,km);
	getch();
	return 0;
}