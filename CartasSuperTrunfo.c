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
    
    // Menu Interativo para escolha do atributo para comparação


    int menu;

    printf("Pronto para escolher o atributo que será comparado?\n");
    printf("Digite [1] para População\n");
    printf("Digite [2] para Área\n");
    printf("Digite [3] para PIB\n");
    printf("Digite [4] para Pontos Turísticos\n");
    printf("Digite [5] para Densidade populacional\n");
    printf("Digite [6] para Pib per Capita\n");
    printf("Digite [7] para Super Poder\n");
    scanf("%d", &menu);
    

    switch (menu)
    {
        case 1:
            printf("Atributo populaçao!\n");
            break;
        case 2: 
            printf("Atributo Área!\n");
            break;
        case 3: 
            printf("Atributo PIB!\n");
            break;
        case 4:
            printf("Atributo Pontos Turísticos!\n");
            break;
        case 5:
            printf("Atributo Densidade populacional!\n");
            break;
        case 6:
            printf("Atributo Pib per Capita!\n");
            break;
        case 7:
            printf("Atributo Super Poder!\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;

    return 0;
    }


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

    SupPoder1 = Populacao1 + Area1 + (Pib1 * 1e9) + NumPontosTuristicos1 + PibPerCap1 + DensPop1 + DensPopInvertida1;
    SupPoder2 = Populacao2 + Area2 + (Pib2 * 1e9) + NumPontosTuristicos2 + PibPerCap2 + DensPop2 + DensPopInvertida2;

    
    
    //Comparação de cartas e resultado

   
    if (menu == 1)
    {
        if (Populacao1 > Populacao2) {
            printf("\nCarta 1 \n");
            printf("Código da Carta: %c%s\n", Estado01, CodCarta1);
            printf("Nome da Cidade: %s\n", NomeCidade1);
            printf("População: %d \n", Populacao1);
            printf("\nCarta 2 \n");            
            printf("Código da Carta: %c%s\n", Estado02, CodCarta2);
            printf("Nome da Cidade: %s\n", NomeCidade2);   
            printf("População: %d \n", Populacao2);
            printf("Carta 1 (São Paulo) venceu!");
        } else if (Populacao2 > Populacao1) {
            printf("\nCarta 1 \n");
            printf("Código da Carta: %c%s\n", Estado01, CodCarta1);
            printf("Nome da Cidade: %s\n", NomeCidade1);
            printf("População: %d \n", Populacao1);
            printf("\nCarta 2 \n");            
            printf("Código da Carta: %c%s\n", Estado02, CodCarta2);
            printf("Nome da Cidade: %s\n", NomeCidade2);   
            printf("População: %d \n", Populacao2);
            printf("Carta 2 (rio de Janeiro) venceu!"); 
        } else {
            printf("Empate!");
        }
               
    } else if (menu == 2) {
        if (Area1 > Area2){
            printf("\nCarta 1 \n");
            printf("Estado: %c\n", Estado01);
            printf("Código da Carta: %c%s\n", Estado01, CodCarta1);
            printf("Nome da Cidade: %s\n", NomeCidade1);
            printf("Área: %.2f km²\n", Area1);
            printf("\nCarta 2 \n");
            printf("Estado: %c\n", Estado02);
            printf("Código da Carta: %c%s\n", Estado02, CodCarta2);
            printf("Nome da Cidade: %s\n", NomeCidade2);
            printf("Área: %.2f km²\n", Area2); 
            printf("Carta 1 (São Paulo) venceu!");

        } else if (Area2 > Area1) {
            printf("\nCarta 1 \n");
            printf("Estado: %c\n", Estado01);
            printf("Código da Carta: %c%s\n", Estado01, CodCarta1);
            printf("Nome da Cidade: %s\n", NomeCidade1);
            printf("Área: %.2f km²\n", Area1);
            printf("\nCarta 2 \n");
            printf("Estado: %c\n", Estado02);
            printf("Código da Carta: %c%s\n", Estado02, CodCarta2);
            printf("Nome da Cidade: %s\n", NomeCidade2);
            printf("Área: %.2f km²\n", Area2);   
            printf("Carta 2 (rio de Janeiro) venceu!");  
        } else {
            printf("Empate!");
        }
               
                
    } else if (menu == 3) {
        if (Pib1 > Pib2){
            printf("\nCarta 1 \n");
            printf("Estado: %c\n", Estado01);
            printf("Código da Carta: %c%s\n", Estado01, CodCarta1);
            printf("Nome da Cidade: %s\n", NomeCidade1);
            printf("PIB: R$ %.2f Bilhões de reais\n", Pib1);
            printf("\nCarta 2 \n");
            printf("Estado: %c\n", Estado02);
            printf("Código da Carta: %c%s\n", Estado02, CodCarta2);
            printf("Nome da Cidade: %s\n", NomeCidade2); 
            printf("PIB: R$ %.2f Bilhões de reais\n", Pib2);
            printf("Carta 1 (São Paulo) venceu!");

        } else if (Pib2 > Pib1) {
            printf("\nCarta 1 \n");
            printf("Estado: %c\n", Estado01);
            printf("Código da Carta: %c%s\n", Estado01, CodCarta1);
            printf("Nome da Cidade: %s\n", NomeCidade1);
            printf("PIB: R$ %.2f Bilhões de reais\n", Pib1);
            printf("\nCarta 2 \n");
            printf("Estado: %c\n", Estado02);
            printf("Código da Carta: %c%s\n", Estado02, CodCarta2);
            printf("Nome da Cidade: %s\n", NomeCidade2); 
            printf("PIB: R$ %.2f Bilhões de reais\n", Pib2);  
            printf("Carta 2 (rio de Janeiro) venceu!");  
        } else {
            printf("Empate!");
        }   
    } else if (menu == 4) {
        if (NumPontosTuristicos1 > NumPontosTuristicos2){
            printf("\nCarta 1 \n");
            printf("Estado: %c\n", Estado01);
            printf("Código da Carta: %c%s\n", Estado01, CodCarta1);
            printf("Nome da Cidade: %s\n", NomeCidade1);
            printf("Pontos turísticos: %d\n", NumPontosTuristicos1);
            printf("\nCarta 2 \n");
            printf("Estado: %c\n", Estado02);
            printf("Código da Carta: %c%s\n", Estado02, CodCarta2);
            printf("Nome da Cidade: %s\n", NomeCidade2); 
            printf("Pontos turísticos: %d\n", NumPontosTuristicos2);
            printf("Carta 1 (São Paulo) venceu!");

        } else if (NumPontosTuristicos2 > NumPontosTuristicos1) {
            printf("\nCarta 1 \n");
            printf("Estado: %c\n", Estado01);
            printf("Código da Carta: %c%s\n", Estado01, CodCarta1);
            printf("Nome da Cidade: %s\n", NomeCidade1);
            printf("Pontos turísticos: %d\n", NumPontosTuristicos1);
            printf("\nCarta 2 \n");
            printf("Estado: %c\n", Estado02);
            printf("Código da Carta: %c%s\n", Estado02, CodCarta2);
            printf("Nome da Cidade: %s\n", NomeCidade2); 
            printf("Pontos turísticos: %d\n", NumPontosTuristicos2);  
            printf("Carta 2 (rio de Janeiro) venceu!");  
        } else {
            printf("Empate!");
        }
    } else if (menu == 5) {
        if (DensPop1 < DensPop2){
            printf("\nCarta 1 \n");
            printf("Estado: %c\n", Estado01);
            printf("Código da Carta: %c%s\n", Estado01, CodCarta1);
            printf("Nome da Cidade: %s\n", NomeCidade1);
            printf("Densidade populacional: %.2f hab/km²\n", DensPop1);
            printf("\nCarta 2 \n");
            printf("Estado: %c\n", Estado02);
            printf("Código da Carta: %c%s\n", Estado02, CodCarta2);
            printf("Nome da Cidade: %s\n", NomeCidade2); 
            printf("Densidade populacional: %.2f hab/km²\n", DensPop2);
            printf("Carta 1 (São Paulo) venceu! (Menor densidade populacional)\n");

        } else if (DensPop2 < DensPop1) {
            printf("\nCarta 1 \n");
            printf("Estado: %c\n", Estado01);
            printf("Código da Carta: %c%s\n", Estado01, CodCarta1);
            printf("Nome da Cidade: %s\n", NomeCidade1);
            printf("Densidade populacional: %.2f hab/km²\n", DensPop1);
            printf("\nCarta 2 \n");
            printf("Estado: %c\n", Estado02);
            printf("Código da Carta: %c%s\n", Estado02, CodCarta2);
            printf("Nome da Cidade: %s\n", NomeCidade2); 
            printf("Densidade populacional: %.2f hab/km²\n", DensPop2);  
            printf("Carta 2 (rio de Janeiro) venceu!(Menor densidade populacional)\n");  
        } else {
            printf("Empate!");
        }

    } else if (menu == 6) {
        if (PibPerCap1 > PibPerCap2){
            printf("\nCarta 1 \n");
            printf("Estado: %c\n", Estado01);
            printf("Código da Carta: %c%s\n", Estado01, CodCarta1);
            printf("Nome da Cidade: %s\n", NomeCidade1);
            printf("PIB per Capita: %.2f de reais\n", PibPerCap1);
            printf("\nCarta 2 \n");
            printf("Estado: %c\n", Estado02);
            printf("Código da Carta: %c%s\n", Estado02, CodCarta2);
            printf("Nome da Cidade: %s\n", NomeCidade2); 
            printf("PIB per Capita: %.2f de reais\n", PibPerCap2);
            printf("Carta 1 (São Paulo) venceu!\n");

        } else if (PibPerCap2 > PibPerCap1) {
            printf("\nCarta 1 \n");
            printf("Estado: %c\n", Estado01);
            printf("Código da Carta: %c%s\n", Estado01, CodCarta1);
            printf("Nome da Cidade: %s\n", NomeCidade1);
            printf("PIB per Capita: %.2f de reais\n", PibPerCap1);
            printf("\nCarta 2 \n");
            printf("Estado: %c\n", Estado02);
            printf("Código da Carta: %c%s\n", Estado02, CodCarta2);
            printf("Nome da Cidade: %s\n", NomeCidade2); 
            printf("PIB per Capita: %.2f de reais\n", PibPerCap2); 
            printf("Carta 2 (rio de Janeiro) venceu!\n");  
        } else {
            printf("Empate!");
        }
          
    } else if (menu == 7) {
        if (SupPoder1 > SupPoder2){
            printf("\nCarta 1 \n");
            printf("Estado: %c\n", Estado01);
            printf("Código da Carta: %c%s\n", Estado01, CodCarta1);
            printf("Nome da Cidade: %s\n", NomeCidade1);
            printf("O valor do Super Poder é: %.0f\n", SupPoder1);
            printf("\nCarta 2 \n");
            printf("Estado: %c\n", Estado02);
            printf("Código da Carta: %c%s\n", Estado02, CodCarta2);
            printf("Nome da Cidade: %s\n", NomeCidade2); 
            printf("O valor do Super Poder é: %.0f\n", SupPoder2);
            printf("Carta 1 (São Paulo) venceu!\n");

        } else if (SupPoder2 > SupPoder1) {
            printf("\nCarta 1 \n");
            printf("Estado: %c\n", Estado01);
            printf("Código da Carta: %c%s\n", Estado01, CodCarta1);
            printf("Nome da Cidade: %s\n", NomeCidade1);
            printf("O valor do Super Poder é: %.0f\n", SupPoder1);
            printf("\nCarta 2 \n");
            printf("Estado: %c\n", Estado02);
            printf("Código da Carta: %c%s\n", Estado02, CodCarta2);
            printf("Nome da Cidade: %s\n", NomeCidade2); 
            printf("O valor do Super Poder é: %.0f\n", SupPoder2);
            printf("Carta 2 (rio de Janeiro) venceu!\n");  
        } else {
            printf("Empate!");
        }
    }
       

    return 0;

}