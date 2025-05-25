#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Adeildo Belisario - Desafio Novato/Desafio Aventureiro/Desafio Mestre

int main() {
    //Banco de variáveis
    
    char NomeCidade1[15], NomeCidade2[15];
    int Populacao1, Populacao2; // Coloquei o tipo int pq aqui no vscode online não estava suportando unsigned
    float Area1, Area2;
    float Pib1, Pib2;
    int NumPontosTuristicos1, NumPontosTuristicos2;
    float SupPoder1, SupPoder2;
    int ResultPop, ResultArea, ResultPiB, ResultPontTur, ResultDens, ResultPibPerCap, ResultSupPod;
    int Atributo1, Atributo2;


    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Dando informações iniciais

    printf("Olá, vamos inserir os dados para as cartas do SuperTrunfo!\n");
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // perguntando os dados da primeira carta


    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", &NomeCidade1);

    printf("Digite a população: ");
    scanf("%d", &Populacao1);

    printf("Digite a área desta cidade (em Km²): ");
    scanf("%f", &Area1);
    
    printf("Digite o PIB desta cidade (em Bilhões de reais): ");
    scanf("%f", &Pib1);

    printf("Digite o número de pontos turísticos desta cidade: ");
    scanf("%d", &NumPontosTuristicos1);

    // //perguntando os dados da segunda carta

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", &NomeCidade2);

    printf("Digite a população: ");
    scanf("%d", &Populacao2);

    printf("Digite a área desta cidade (em Km²): ");
    scanf("%f", &Area2);
    
    printf("Digite o PIB desta cidade (em Bilhões de reais): ");
    scanf("%f", &Pib2);

    printf("Digite o número de pontos turísticos desta cidade: ");
    scanf("%d", &NumPontosTuristicos2);
    
        
    // Menu Interativo para escolha de 2 atributos para comparação

    printf("Escolha 2 atributos para comparação: \n");

    // Escolha do primeiro atributo
    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("[1] - População\n[2] - Área\n[3] - PIB\n[4] - Pontos Turísticos\n[5] - Densidade Demográfica (Menor valor vence)\n[6] - PIB per Capita\n[7] - Super Poder\n");
    printf("Digite sua escolha: ");
    scanf("%d", &Atributo1);

    // a segunda escolha, removendo o primeiro atributo escolhido
    printf("\nEscolha o segundo atributo para comparação (deve ser diferente do primeiro):\n");

    switch (Atributo1) {
        case 1:
            printf("[2] - Área\n3 - PIB\n4 - Pontos Turísticos\n[5] - Densidade Demográfica\n[6] - PIB per Capita\n[7] - Super Poder\n");
            break;
        case 2:
            printf("[1] - População\n[3] - PIB\n[4] - Pontos Turísticos\n[5] - Densidade Demográfica\n[6] - PIB per Capita\n[7] - Super Poder\n");
            break;
        case 3:
            printf("[1] - População\n[2] - Área\n[4] - Pontos Turísticos\n[5] - Densidade Demográfica\n[6] - PIB per Capita\n[7] - Super Poder\n");
            break;
        case 4:
            printf("[1] - População\n[2] - Área\n[3] - PIB\n[5] - Densidade Demográfica\n[6] - PIB per Capita\n[7] - Super Poder\n");
            break;
        case 5:
            printf("[1] - População\n[2] - Área\n[3] - PIB\n[4] - Pontos Turísticos\n[6] - PIB per Capita\n[7] - Super Poder\n");
            break;
        case 6:
            printf("[1] - População\n[2] - Área\n[3] - PIB\n[4] - Pontos Turísticos\n[5] - Densidade Demográfica\n[7] - Super Poder\n");
            break;
        case 7:
            printf("[1] - População\n[2] - Área\n[3] - PIB\n[4] - Pontos Turísticos\n[5] - Densidade Demográfica\n[6] - PIB per Capita\n");
            break;
        default:
            printf("\n ERRO: Opção inválida! Reinicie o programa.\n");
            return 1;
    }

    printf("\nDigite sua escolha: ");
    scanf("%d", &Atributo2);
    
    //Se Escolher opções iguais
    if (Atributo1 == Atributo2)
    {
        printf("Erro! Escolha 2 opções diferentes!\n");
        
        return 1;
    }
    
    // Exibir escolha para não ter dúvidas
    printf("Você escolheu os atributos %d e %d\n", Atributo1, Atributo2);

    // Fazendo as contas

    // Densidade populacional
    float DensPop1 = (float) Populacao1 / (float) Area1;
    float DensPop2 = (float) Populacao2 / Area2;
    //Pib per Capita
    float PibPerCap1 = (Pib1 * 1e9) / Populacao1;
    float PibPerCap2 = (Pib2 * 1e9) / Populacao2;
    //Densidade populacional invertida
    float DensPopInvertida1, DensPopInvertida2;

    DensPopInvertida1 = 1 / DensPop1 * 10000;
    DensPopInvertida2 = 1 / DensPop2 * 10000;

    SupPoder1 = Populacao1 + Area1 + (Pib1 * 1e9) + NumPontosTuristicos1 + PibPerCap1 + DensPopInvertida1;
    SupPoder2 = Populacao2 + Area2 + (Pib2 * 1e9) + NumPontosTuristicos2 + PibPerCap2 + DensPopInvertida2;

    //Comparação de cartas e resultado

    float Val1Atrib1, Val2Atrib1, Val1Atrib2, Val2Atrib2;
    float soma1 = 0, soma2 = 0;



    // Atributo 1
    switch (Atributo1) {
        case 1: Val1Atrib1 = Populacao1; Val2Atrib1 = Populacao2; break;
        case 2: Val1Atrib1 = Area1; Val2Atrib1 = Area2; break;
        case 3: Val1Atrib1 = Pib1; Val2Atrib1 = Pib2; break;
        case 4: Val1Atrib1 = NumPontosTuristicos1; Val2Atrib1 = NumPontosTuristicos2; break;
        case 5: Val1Atrib1 = DensPopInvertida1; Val2Atrib1 = DensPopInvertida2; break; 
        case 6: Val1Atrib1 = PibPerCap1; Val2Atrib1 = PibPerCap2; break;
        case 7: Val1Atrib1 = SupPoder1; Val2Atrib1 = SupPoder2; break;
}

// Atributo 2
    switch (Atributo2) {
        case 1: Val1Atrib2 = Populacao1; Val2Atrib2 = Populacao2; break;
        case 2: Val1Atrib2 = Area1; Val2Atrib2 = Area2; break;
        case 3: Val1Atrib2 = Pib1; Val2Atrib2 = Pib2; break;
        case 4: Val1Atrib2 = NumPontosTuristicos1; Val2Atrib2 = NumPontosTuristicos2; break;
        case 5: Val1Atrib2 = DensPopInvertida1; Val2Atrib2 = DensPopInvertida2; break; 
        case 6: Val1Atrib2 = PibPerCap1; Val2Atrib2 = PibPerCap2; break;
        case 7: Val1Atrib2 = SupPoder1; Val2Atrib2 = SupPoder2; break;
    }

// As comparações individuais
printf("\n Comparando atributos individuais:\n");
printf("Atributo %d:\nCarta 1 (%s): %.4f\nCarta 2 (%s): %.4f\n", Atributo1, NomeCidade1, Val1Atrib1, NomeCidade2, Val2Atrib1);
printf("Vencedor do primeiro atributo: %s\n", (Val1Atrib1 > Val2Atrib1) ? NomeCidade1 : NomeCidade2);

printf("\nAtributo %d:\nCarta 1 (%s): %.4f\nCarta 2 (%s): %.4f\n", Atributo2, NomeCidade1, Val1Atrib2, NomeCidade2, Val2Atrib2);
printf("Vencedor do segundo atributo: %s\n", (Val1Atrib2 > Val2Atrib2) ? NomeCidade1 : NomeCidade2);



// Agora somamos os valores dos atributos escolhidos

soma1 += Val1Atrib1;
soma1 += Val1Atrib2;
soma2 += Val2Atrib1;
soma2 += Val2Atrib2;

// Vencedor da rodada
printf("\n Soma dos atributos escolhidos:\n");
printf("Carta 1 (%s): %.2f\nCarta 2 (%s): %.2f\n", NomeCidade1, soma1, NomeCidade2, soma2);

if (soma1 > soma2) {
    printf(" Vencedora da rodada: %s!\n", NomeCidade1);
} else if (soma2 > soma1) {
    printf(" Vencedora da rodada: %s!\n", NomeCidade2);
} else {
    printf(" Empate!\n");
}

    return 0;

}