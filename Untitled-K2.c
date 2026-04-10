/*Deklarirajte 3 polja od 3 elementa naziva CPU, RAM,HARD. 
Unesite po 3 velicine za svako polje te izracunajte indeks svakog racunala po formuli indeks=CPU*RAM*HARD/100. 
Za svaku trojku CPU,RAM i HARD racuna se indeks koji pripada polju imena IND od 3 elementa. 
Generirati ispis kao u donjem primjeru te ispisati prosjecnu brzinu CPU-a racunala u Ghz. 
CPU RAM HARD INDEKS 2.2 4 500 44 2.7 6 1000 162 3.2 8 1000 256 Prosjecna brzina=2.7*/

#include<stdio.h>
int main(){
    
    float cpu[3],ram[3],hard[3],ind[3];
    
    printf("Unesite brzinu prvog CPU: ");
    scanf("%f",&cpu[0]);
    printf("Unesite velicinu prvog RAM: ");
    scanf("%f",&ram[0]);
    printf("Unesite velicinu prvog HARD: ");
    scanf("%f",&hard[0]);
    
    ind[0]=(cpu[0]*ram[0]*hard[0])/100;
    
    printf("Unesite brzinu drugog CPU: ");
    scanf("%f",&cpu[1]);
    printf("Unesite velicinu drugog RAM: ");
    scanf("%f",&ram[1]);
    printf("Unesite velicinu drugog HARD: ");
    scanf("%f",&hard[1]);
    
    ind[1]=(cpu[1]*ram[1]*hard[1])/100;
    
    printf("Unesite brzinu treceg CPU: ");
    scanf("%f",&cpu[2]);
    printf("Unesite velicinu treceg RAM: ");
    scanf("%f",&ram[2]);
    printf("Unesite velicinu treceg HARD: ");
    scanf("%f",&hard[2]);
    
    ind[2]=(cpu[2]*ram[2]*hard[2])/100;
    
    float prosjek;
    
    prosjek=(cpu[1]+cpu[0]+cpu[2])/3;
    
    printf("CPU  \t        RAM   \t    HARD   \t  INDEKS");
    printf("\n%f\t %f\t %f\t %f\t",cpu[0],ram[0],hard[0],ind[0]);
    printf("\n%f\t %f\t %f\t %f\t",cpu[1],ram[1],hard[1],ind[1]);
    printf("\n%f\t %f\t %f\t %f\t",cpu[2],ram[2],hard[2],ind[2]);
    
    printf("\nProsjek brzine racunala iznosi:%f.",prosjek);
}