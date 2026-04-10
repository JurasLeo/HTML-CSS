/*Napisati program kojim se unose dva niza znakova (dva stringa). Nakon unosa,
program treba ispisati onaj niz znakova koji ima više suglasnika (samoglasnici su
a, e, i ,o ,u, A, E, I, O, U).*/

#include<stdio.h>
#include<string.h>

int main(){
	
	
	char prvi_niz[25],drugi_niz[25];
	int prvi=0,drugi=0;
	
	printf("Unesite prvi niz znakova: ");
	scanf(" %s",prvi_niz);
	printf("Unesite drugi niz znakova: ");
	scanf(" %s",drugi_niz);
	
	for(int i = 0; i<strlen(prvi_niz); i++){
		
		if(prvi_niz[i]!='a' && prvi_niz[i]!='A' && prvi_niz[i]!='e' && prvi_niz[i]!='E' && prvi_niz[i]!='i' && prvi_niz[i]!='I' && prvi_niz[i]!='O' && 
		   prvi_niz[i]!='o' && prvi_niz[i]!='u' && prvi_niz[i]!='U'){
		   	prvi++;
		}
	}
	for(int i = 0;i<strlen(drugi_niz);i++){
		
		if(drugi_niz[i]!='a' && drugi_niz[i]!='A' && drugi_niz[i]!='e' && drugi_niz[i]!='E' && drugi_niz[i]!='i' && drugi_niz[i]!='I' && drugi_niz[i]!='O' && 
		   drugi_niz[i]!='o' && drugi_niz[i]!='u' && drugi_niz[i]!='U'){
		   	drugi++;
	
}
}
   if(prvi==drugi){
   	printf("Prvi i drugi niz imaju jednak broj suglasnika");
   }
   else if(prvi>drugi){
   	printf("Prvi niz ima vise suglasnika.\nBroj suglasnika je:%d",prvi);
   	
   }
   else
       printf("Drugi niz ima vise suglasnika,\nBroj suglasnika je:%d",drugi);
   
}