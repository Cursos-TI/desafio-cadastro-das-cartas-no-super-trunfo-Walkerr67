#include <stdio.h>


int main() {
    char nome[30] ;
    float populacao;
    float area;
    float PIB;
    float pontosturisticos;
    char cidade[30];
    float quociente;

    char nome2[30];
    float populacao2;
    float area2;
    float PIB2;
    float pontosturisticos2;
    char cidade2[30];

    printf("Se 0 a Primeira Cidade Vence, Se 1 a Segunda Cidade Vence\n");
    printf ("Densidade Populacional Vence Quem Tiver o Menor Valor\n");

    
    printf("Digite o Código da Cidade");
    scanf("%s", &cidade);

    printf("Digite o Nome da Cidade");
    scanf("%s", &nome );

    printf("Digite a Quantidade da População");
    scanf("%d", &populacao);
    
    printf("Digite a Área");
    scanf("%d", &area);

    printf("Digite o PBI");
    scanf("%d", &PIB);  
    
    printf("Digite os Pontos Turísticos");
    scanf("%d",&pontosturisticos);

    
    printf("Digite o Código da Cidade 2");
    scanf("%s", &cidade2);

    printf("Digite o Nome da Cidade 2");
    scanf("%s", &nome2 );

    printf("Digite a Quantidade da População 2");
    scanf("%d", &populacao2);
    
    printf("Digite a Área 2");
    scanf("%d", &area2);

    printf("Digite o PBI 2");
    scanf("%d", &PIB2);  
    
    printf("Digite os Pontos Turísticos 2");
    scanf("%d",&pontosturisticos2);

    
    printf(" - Código da Cidade: %s\n - Nome da cidade: %s\n - Quantidade da População: %d\n - area: %d\n - Pontos Turísticos: %d\n - PIB : %d\n ", cidade, nome, populacao, area, pontosturisticos,PIB);
    printf(" - Código da Cidade 2: %s\n - Nome da cidade 2: %s\n - Quantidade da População 2: %d\n - area 2: %d\n - Pontos Turísticos 2: %d\n - PIB 2 : %d\n ", cidade2, nome2, populacao2, area2, pontosturisticos2,PIB2);


    printf("Pontos Turisticos x Pontos Turisticos : %d\n", pontosturisticos < pontosturisticos2);
    printf("Quantidade da População x Quantidade da População : %d\n", populacao < populacao2);
    printf("Area x Area : %d\n",area < area2);
    printf("PIB X PIB : %d\n", PIB < PIB2 );

    quociente = (float) populacao / area;
    quociente = (float) PIB / populacao;
    printf("Densidade Populacional: %.2f\n", quociente);
    printf(" PIB per Capita: %.2f\n", quociente); 

    quociente = (float) populacao2 / area2;
    quociente = (float) PIB2 / populacao2;
    printf("Densidade Populacional2: %.2f\n", quociente);
    printf(" PIB per Capita2: %.2f\n", quociente);
        

    return 0;


    

    
}

    

