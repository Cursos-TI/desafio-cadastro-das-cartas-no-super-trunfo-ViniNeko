#include <stdio.h>

int main(){
    unsigned long int Pop1, Pop2; // Pop = População da cidade
    int Tur1, Tur2; // Tur = Número de pontos turísticos
    float Area1, PIB1, Area2, PIB2; // Area = Área da cidade 
    float Densi1, PIBPC1, Densi2, PIBPC2; // Densi = Densidade populacional, PIBPC = PIB per Capita 
    float Super1, Super2; // Esta é para o superpoder

printf("Cadastrar duas cartas para o jogo do Super Trunfo. Estas cartas terão temas de cidade. Vamos começar? \n");

printf("\nPrimeiramente, a carta número 1. \n");
printf("\nDigite a população da cidade: \n");
scanf("%u", &Pop1);

printf("Digite a área da cidade: \n");
scanf("%f", &Area1);

printf("Digite o PIB da cidade: \n");
scanf("%f", &PIB1);

printf("Digite o número de pontos turísticos que a cidade possui: \n");
scanf("%d", &Tur1);

Densi1 = Pop1 / Area1;
PIBPC1 = PIB1 / Pop1;

printf("\nAgora, vamos cadastrar a carta número 2. Tente digitar dados diferentes desta vez. \n");
printf("\nDigite a população da cidade: \n");
scanf("%u", &Pop2);

printf("Digite a área da cidade: \n");
scanf("%f", &Area2);

printf("Digite o PIB da cidade: \n");
scanf("%f", &PIB2);

printf("Digite o número de pontos turísticos que a cidade possui: \n");
scanf("%d", &Tur2);

Densi2 = Pop2 / Area2;
PIBPC2 = PIB2 / Pop2;

printf("\nParabéns! Você cadastrou com sucesso duas cartas para o Super Trunfo. Vamos ver as informações das cartas? \n");

Super1 = Pop1 + Tur1 + Area1 + PIB1 + (1 - Densi1) + PIBPC1;
Super2 = Pop2 + Tur2 + Area2 + PIB2 + (1 - Densi2) + PIBPC2;

printf("\n ** Carta número 1 **\n");
printf("População: %u \nÁrea: %f\n", Pop1, Area1);
printf("PIB: %f \nNúmero de pontos turísticos: %d \n", PIB1, Tur1);
printf("Densidade populacional: %f \nPIB per Capita: %f \n", Densi1, PIBPC1);
printf("Superpoder: %f \n", Super1);

printf("\n ** Carta número 2 **\n");
printf("População: %u \nÁrea: %f\n", Pop2, Area2);
printf("PIB: %f \nNúmero de pontos turísticos: %d \n", PIB2, Tur2);
printf("Densidade populacional: %f \nPIB per Capita: %f \n", Densi2, PIBPC2);
printf("Superpoder: %f \n", Super2);

// Final:

printf("\n*** Comparação de cartas: ***\n \n");

printf("População: %d \nÁrea: %d\n", Pop1 > Pop2, Area1 > Area2);
printf("PIB: %d \nNúmero de pontos turísticos: %d \n", PIB1 > PIB2, PIB2 > Tur2);
printf("Densidade populacional: %d \nPIB per Capita: %d \n", Densi1 < Densi2, PIBPC1 > PIBPC2);
printf("Superpoder: %d \n", Super1 > Super2);

printf("\n 1 = Carta 1 venceu, 0 = Carta 2 venceu");

return 0;

}
