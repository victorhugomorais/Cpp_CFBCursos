#include <stdio.h>
#include <string.h>

int main(void) {
char palavra [50];
char palavra2[50];
char letra;
int acerto;
int chances=6;
int printTela = 0;

int i = 0, j = 0;

printf("Mande o amigo fechar os olhos: \n");
printf("Digite a palavra a ser descoberta: \n");
scanf("%[^\n]", palavra);

for (printTela=0; printTela<strlen(palavra); printTela++){
      palavra2[printTela] = '_';
      printf ("%c", palavra2[printTela]);
}
system("clear");

fflush(stdin);

while (i<strlen(palavra) || chances > 0){
    printf ("\nDigite uma letra: ");
    scanf ("%c", &letra);
    for (j=0; j<strlen(palavra); j++){
      if (palavra[j] == letra){
          printf ("ACERTOU A LETRA %c !!\n", letra);
          palavra2[j]=letra;
          printf ("%s", palavra2);
          i++;
      }
      //else if (//chances)
      if (strcmp(palavra, palavra2)==0){
        printf ("VOCE GANHOU!!\n");
        //i=stlen(palavra);
      }
    } 
}
  
}