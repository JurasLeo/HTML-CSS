/*Napisati program u kome korisnik unosi tri broja. Potrebno je ispisati umnožak
unesenih brojeva. Umnožak treba vratiti procedura umnozakTriBroja kojoj
se dostavljaju uneseni brojevi.*/

#include<stdio.h>

int umnozakTriBroja(int a,int b,int c){
	return a*b*c;
} 

int main(){
	int prvi,drugi,treci;
	
	printf("Unesite prvi broj: ");
	scanf("%d",&prvi);
	printf("Unesite drugi broj: ");
	scanf("%d",&drugi);
	printf("Unesite treci broj: ");
	scanf("%d",&treci);
	
	int rezultat=umnozakTriBroja(prvi,drugi,treci);
	
	printf("Umnozak vasa tri broja iznosi: %d",rezultat);
}