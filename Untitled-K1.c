/*Definirati zapis imena TK(kao neki operater telekomunikacija) koji ima svoje komponente: 
naziv telekomunikacijskog operatera, cijena fiksne linije, cijena interneta i cijena TV (nazvati komponente po želji). 
Dodati još i komponentu ukupno koja je zbroj cijene za telefon, Internet i TV. 
Deklarirati 3 varijable tipa TK: 
Potom ispisati koji je teleoperater(naziv) najjeftiniji i koja je to ukupna cijena najjeftinije pretplate.*/

#include<stdio.h>

typedef struct{
    char name[15];
    float fiksna,internet,TV,ukupno;
}TK;
int main(){
    TK operator1,operator2,operator3;
    
    printf("Unesi naziv 1. teleoperatera: ");
    scanf(" %s",&operator1.name);
    printf("Unesite cijenu fiksne linije 1. teleoperatera: ");
    scanf("%f",&operator1.fiksna);
    printf("Unesite cijenu interneta 1. teleoperatera: ");
    scanf("%f",&operator1.internet);
    printf("Unesite cijenu TV paketa 1. teleoperatera: ");
    scanf("%f",&operator1.TV);
	operator1.ukupno=operator1.fiksna+operator1.internet+operator1.TV;
    printf("%s kosta %.2f kn",operator1.name,operator1.ukupno);
    
    printf("\nUnesi naziv 2. teleoperatera: ");
    scanf(" %s",&operator2.name);
    printf("Unesite cijenu fiksne linije 2. teleoperatera: ");
    scanf("%f",&operator2.fiksna);
    printf("Unesite cijenu interneta 2. teleoperatera: ");
    scanf("%f",&operator2.internet);
    printf("Unesite cijenu TV paketa 2. teleoperatera: ");
    scanf("%f",&operator2.TV);
	operator2.ukupno=operator2.fiksna+operator2.internet+operator2.TV;
    printf(" %s kosta %.2f kn",operator2.name,operator2.ukupno);
    
    printf("\nUnesi naziv 3. teleoperatera: ");
    scanf(" %s",&operator3.name);
    printf("Unesite cijenu fiksne linije 3. teleoperatera: ");
    scanf("%f",&operator3.fiksna);
    printf("Unesite cijenu interneta 3. teleoperatera: ");
    scanf("%f",&operator3.internet);
    printf("Unesite cijenu TV paketa 3. teleoperatera: ");
    scanf("%f",&operator3.TV);
    operator3.ukupno=operator3.fiksna+operator3.internet+operator3.TV;
    printf(" %s kosta %.2f kn",operator3.name,operator3.ukupno);
    
     if(operator1.ukupno<=operator2.ukupno && operator1.ukupno<=operator3.ukupno){
        printf("\n%s je najjeftiniji, kosta %.2f kn mjesecno",operator1.name,operator1.ukupno);
    }
    else if(operator2.ukupno<=operator1.ukupno && operator2.ukupno<=operator3.ukupno){
        printf("\n%s je najjeftiniji, kosta %.2f kn mjesecno",operator2.name,operator2.ukupno);
    }
    else{
        printf("\n%s je najjeftiniji, kosta %.2f kn mjesecno",operator3.name,operator3.ukupno);
    }
}
