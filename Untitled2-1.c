/*Napisati program za konverziju mjernih jedinica za duljinu. Za unesenu decimalnu
vrijednost duljine u metrima ispisati vrijednost duljine u milimetrima,
centimetrima ili kilometrima na tri decimale i to na način koji će ponuditi
mogućnost odabira u koju jedinicu se želi izvesti konverzija. Nakon unosa
vrijednosti u metrima, odabire se na sljedeći način:
 Tipka m  pretvorba u mm
 Tipka c  pretvorba u cm
 Tipka k  pretvorba u km*/

#include<stdio.h>

int main(){
	
	char izbor;
	float metar,milimetar,centimetar,kilometar;
	
	printf("Unesite vrijednost u metrima: ");
	scanf("%f",&metar);
	
	printf("Odaberite konverziju mjerne jedinice:\nm pretvorba u mm\nc pretvorba u cm\nk pretvorba u km\n");
	scanf(" %c",&izbor);
	
	switch(izbor){
		case'm':
			milimetar=metar*1000;
			printf("%.3f metra = %3.f milimetra",metar,milimetar);
			break;
			
			case'c':
			centimetar=metar*100;
			printf("%.3f metra = %3.f centimetar",metar,centimetar);
			break;
			
			case'k':
			kilometar=metar/100;
			printf("%.3f metra = %3.f kilometar",metar,kilometar);
			break;
			default: 
			printf("Unijeli ste nepoznatu oznaku");
	
		
	}
	
	
	getch();
}