/*Definirati funkciju koja šifrira dolazece stringove tako da netko gleda tekst koji je ako je samoglasnik pomakne za 2 mjesta
unaprijed u ascii kodu ako je suglasnik pomakne unazad 2 mjesta u ascii kodu, ako je neki drugi znak ostaje isti*/

 

#include<stdio.h>
#include<string.h>
#include<conio.h>

 

void coding(char string[]);

 

int main(){
    char string1[50],string2[50];
    puts("Unesi neki string :  ");
    gets(string1);
    strcpy(string2,string1);//ovom se funkcijom u string2 polaze sadrzaj string1, sad string 2 čuva originalnu vrijednost string 1
    coding(string1);
    printf("\ntekst: %s kodirao se u: %s",string2,string1);    
    return 0;
}
//definicija funkcije
void coding(char string[]){
    int i;
    for(i=0;i<strlen(string);i++){
        if(string[i]=='a'||string[i]=='A'||string[i]=='e'||string[i]=='E'||string[i]=='i'||string[i]=='I'||string[i]=='o'||string[i]=='O'||string[i]=='u'||string[i]=='U'){
            string[i]+=2;
        }
        else if((string[i]>=65 && string[i]<=90)  || (string[i]>=97 && string[i]<=122)){
            string[i]-=2;
        }
        else{
            string[i]=string[i];
        }
    }
}