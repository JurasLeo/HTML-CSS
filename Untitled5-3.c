/*Napisati program koji generira i ispisuje matricu dimenzije 10×10 u kojoj su svi
elementi prvoga reda 1, svi elementi drugoga reda 2, svi elementi trećega reda 3
itd. Generiranje matrice napraviti pomoću petlji.*/

#include<stdio.h>

int main(){
	
	int matrica[10][10];
	
	for(int i = 0; i<10; i++){
		for(int j = 0; j<10; j ++){
			
			matrica[i][j]=i+1;
			printf("%d",matrica[i][j]);
}
		printf("\n");
	}
}