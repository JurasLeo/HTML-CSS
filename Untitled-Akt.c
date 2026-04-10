/*Kreirati proceduru koja omogucava unosenje n vrijednosti u neko polje
Kreirati funkciju koja vraca najmanji od unesenih brojeva
kreirati i trecu funkciju koja vraca kroz argument sumu nekih brojeva.sve u glavnom dijelu programa*/
#include<stdio.h>

void brojevi(int n,int polje[]){
	for(int i = 0; i<n; i++){
		printf("Unesite %d. broj:",i+1);
		scanf("%d",&polje[i]);
	}
}
void najmanji(int min,int n,int polje[]){
	min=polje[0];
	for(int i = 0;i<n;i++){
		if(min>polje[i]){
			min=polje[i];
		}
	}
	printf("Najmanji uneseni broj je:%d\n",min);
}
void ukupno(int n,int polje[],int *suma){
     *suma=0;
	for(int i = 0;i<n; i++){
		*suma+=polje[i];
	}
	printf("Suma svih unesenih brojeva iznosi:%d",*suma);
}
int main(){
	int n,min,suma;
	printf("Unesite koliko brojeva zelite unijeti: ");
	scanf("%d",&n);
	
	int polje[n];
	
	brojevi(n,polje);
	najmanji(min,n,polje);
	ukupno(n,polje,&suma);
	
	
}