/*Napisati program koji posjeduje strukturu Tocka, s komponentama koordinatama
x i y. Unijeti tri tocke i odrediti pripadaju li one pravcu y=2x+1. */

#include<stdio.h>

typedef struct{
	int x,y;
}tocke;
  
  int main(){
  
  tocke t1,t2,t3;
  
  //prva tocka
  printf("Unijeti 1.kordinatu x:");
  scanf(" %d",&t1.x);
  printf("Unijeti 1.kordinatu y:");
  scanf(" %d",&t1.y);
  
  //druga tocka
  printf("Unijeti 2.kordinatu x:");
  scanf(" %d",&t2.x);
  printf("Unijeti 2.kordinatu y:");
  scanf(" %d",&t2.y);
  
  //treca tocka
  printf("Unijeti 3.kordinatu x:");
  scanf(" %d",&t3.x);
  printf("Unijeti 3.kordinatu y:");
  scanf(" %d",&t3.y);
  
  //Pripadanje tocke
  if(t1.y==2*t1.x+1){
  	printf("\nTocke pripadaju pravcu y=2x+1");
  }
  else{
  	printf("\nTocke ne pripadaju pravcu y=2x+1");
  }
  
  if(t2.y==2*t2.x+1){
  	printf("\nTocke pripadaju pravcu y=2x+1");
  }
  else{
  	printf("\nTocke ne pripadaju pravcu y=2x+1");
  }
  if(t3.y==2*t3.x+1){
  	printf("\nTocke pripadaju pravcu y=2x+1");
  }
  else{
  	printf("\nTocke ne pripadaju pravcu y=2x+1");
  }
 getch(); 
}