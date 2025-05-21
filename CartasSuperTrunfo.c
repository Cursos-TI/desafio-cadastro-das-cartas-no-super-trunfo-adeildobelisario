#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Adeildo Belisario - Desafio Novato/Desafio Aventureiro/Desafio Mestre

int main() {
    //Banco de variáveis
    char Estado01, Estado02;
    char CodCarta1[5], CodCarta2[5];
    char NomeCidade1[15], NomeCidade2[15];
    int Populacao1, Populacao2; // Coloquei o tipo int pq aqui no vscode online não estava suportando unsigned
    float Area1, Area2;
    float Pib1, Pib2;
    int NumPontosTuristicos1, NumPontosTuristicos2;
    float SupPoder1, SupPoder2;
    int ResultPop, ResultArea, ResultPiB, ResultPontTur, ResultDens, ResultPibPerCap, ResultSupPod;



    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Dando informações iniciais

    printf("Olá, vamos inserir os dados para as cartas do SuperTrunfo!\n");
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // perguntando os dados da primeira carta

    printf("Escolha uma letra entre A - H: ");
    scanf("%c", &Estado01);

    printf("Digite o código da carta (ex: de 01 a 04): ");
    scanf("%s", &CodCarta1);

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

    //perguntando os dados da segunda carta

    printf("Escolha uma letra entre A - H: ");
    scanf(" %c", &Estado02);//Estava dando erro e coloquei um espaço antes de %

    printf("Digite o código da carta (ex: de 01 a 04): ");
    scanf("%s", &CodCarta2);

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
    
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    // Fazendo as contas

    float DensPop1 = (float) Populacao1 / (float) Area1;
    float PibPerCap1 = (Pib1 * 1e9) / Populacao1;
    float DensPop2 = (float) Populacao2 / Area2;
    float PibPerCap2 = (Pib2 * 1e9) / Populacao2;
    float DensPopInvertida1, DensPopInvertida2;

    DensPopInvertida1 = 1 / DensPop1;
    DensPopInvertida2 = 1 / DensPop2;

    SupPoder1 = Populacao1 + Area1 + Pib1 + NumPontosTuristicos1 + PibPerCap1 + DensPop1 + DensPopInvertida1;
    SupPoder2 = Populacao2 + Area2 + Pib2 + NumPontosTuristicos2 + PibPerCap2 + DensPop2 + DensPopInvertida2;

    

    // Mostrando os dados cadastrados da primeira carta

    printf("\nCarta 1 \n");
    printf("Estado: %c\n", Estado01);
    printf("Código da Carta: %c%s\n", Estado01, CodCarta1);
    printf("Nome da Cidade: %s\n", NomeCidade1);
    printf("População: %d \n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: R$ %.2f Bilhões de reais\n", Pib1);
    printf("Pontos turísticos: %d\n", NumPontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", DensPop1);
    printf("PIB per Capita: %.2f de reais\n", PibPerCap1);
    printf("O valor do Super Poder é: %f\n", SupPoder1);

    
    // // Mostrando os dados cadastrados da segunda carta

    printf("\nCarta 2 \n");
    printf("Estado: %c\n", Estado02);
    printf("Código da Carta: %c%s\n", Estado02, CodCarta2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %d \n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: R$ %.2f Bilhões de reais\n", Pib2);
    printf("Pontos turísticos: %d\n", NumPontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", DensPop2);
    printf("PIB per Capita: %.2f de reais\n", PibPerCap2);
    printf("O valor do Super Poder é :%f\n", SupPoder1);
    
    
    // Comparando as cartas

    ResultPop = Populacao1 > Populacao2;
    ResultArea = Area1 > Area2;
    ResultPiB = Pib1 > Pib2;
    ResultPibPerCap = PibPerCap1 > PibPerCap2;
    ResultDens = DensPopInvertida1 > DensPopInvertida2;
    ResultPontTur = NumPontosTuristicos1 > NumPontosTuristicos2;
    ResultSupPod = SupPoder1 > SupPoder2;

    // Exibindo resultados

    
    printf("\nPopulação: Carta %c%s venceu (%d)\n", Estado01, CodCarta1,ResultPop);
    printf("Área: Carta %c%s venceu (%d)\n", Estado01, CodCarta1, ResultArea);
    printf("PIB: %c%s venceu (%d)\n", Estado01, CodCarta1, ResultPiB);
    printf("Pontos Turísticos: %c%s venceu (%d)\n", Estado01, CodCarta1,ResultPiB);
    printf("Densidade populacional: %C%s venceu (%d)\n", Estado02, CodCarta2,ResultDens);
    printf("Pib per Capita: %c%s venceu (%d)\n", Estado01, CodCarta1, ResultPibPerCap);
    printf("Super Poder: %c%s venceu (%d)", Estado01, CodCarta1, ResultSupPod);
    

    

    return 0;

}