/*Napisati program u koji se unosi matrica dimenzije m×n. Korisnik unosi
dimenziju matrice. Potrebno je izračunati i ispisati sumu svih elemenata u matrici.
Program također ispisuje sumu svakog pojedinog reda te pronalazi i ispisuje red u
kojem je suma najmanja.*/

#include<stdio.h>


int main(){
	
	int n,m;
	printf("Unesite broj redaka matrice: ");
	scanf("%d",&n);
	printf("Unesite broj stupaca matrice: ");
	scanf("%d",&m);
	
	
	int matrica[n][m];
	int suma[n],suma_s=0;
	
	
	for(int i=0; i<n; i++){
		suma[i]=0;
	}
	
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			
			printf("Unesite element matrice[%d][%d]:",i+1,j+1);
			scanf("%d",&matrica[i][j]);
			suma_s+=matrica[i][j];
			suma[i]+=matrica[i][j];
			
			}
            	
	}
	printf("\nIspis matrice\n");
	for(int i =0; i<n; i++){
		for(int j = 0; j<m; j++){
			
			printf("%d",matrica[i][j]);
		}
	printf("\n");
	
}
printf("Suma svih elemenata:%d",suma_s);


for(int i=0; i<n;i++){
	printf("\nSuma %d. redka iznosi %d.",i+1,suma[i]);
	printf("\n");
}
int najmanja=suma[0];
    for(int i=0; i<n; i++){
        if(suma[i]<najmanja){
            najmanja=suma[i];
        }
    }
printf("\nSuma najmanjeg retka iznosi: %d",najmanja);
printf("\n");
for(int i = 0; i < n ; i++){
	
	if(suma[i]==najmanja){
		 for (int j = 0; j < m; j++){
          printf("%d",matrica[i][j]);
        }
        }   
	}
}


