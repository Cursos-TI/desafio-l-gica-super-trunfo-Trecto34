#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

char estado, estado2, codigo[20], codigo2[20], nome_cidade[20],
nome_cidade2[20];
int pontos_turisticos, pontos_turisticos2;
signed long int populacao, populacao2;
float area, area2, pib, pib2, densidade, densidade2, pibpc, pibpc2;
float invdensidade, invdensidade2, superpoder, superpoder2;
int bilhao = 1000000000;

int main() {
  // Carta 1
  printf("-=-=-=-=CARTA 1=-=-=-=-\n");
  printf("Digite o estado: ");
  scanf("%s", &estado);

  printf("Digite o Cdigo da carta: ");
  scanf("%s", codigo);

  printf("Digite o nome da cidade: ");
  getchar();                           // Usando isso para evitar que a linha pule para o final do programa
  fgets(nome_cidade, 20, stdin);      // fgets ao inves de scanf, para capturar espacos

  printf("Digite o total da populacao: ");
  scanf("%lu", &populacao);
  getchar();

  printf("Digite a Area total em km2: ");
  scanf("%f", &area);

  printf("Digite o PIB: ");
  scanf("%f", &pib);

  printf("Digite o total de Pontos Turisticos: ");
  scanf("%d", &pontos_turisticos);
  getchar();

  densidade     = populacao / area;                   // Calcula a Densidade'
  invdensidade  = area / populacao;                   // Calcula o Inverso da Densidade
  pibpc         = (pib * bilhao) / populacao;         // Calcula o Pìb per Capita
  superpoder    = pontos_turisticos
    + populacao
    + area
    + pib
    + invdensidade
    + pibpc;                             //

  // repete
  printf("-=-=-=-=CARTA 2=-=-=-=-\n");
  printf("Digite o estado: ");
  scanf("%s", &estado2);

  printf("Digite o Cdigo da carta: ");
  scanf("%s", codigo2);

  printf("Digite o nome da cidade: ");
  getchar();
  fgets(nome_cidade2, 20, stdin);

  printf("Digite o total da populacao: ");
  scanf("%lu", &populacao2);
  getchar();

  printf("Digite a Area total em km2: ");
  scanf("%f", &area2);

  printf("Digite o PIB: ");
  scanf("%f", &pib2);

  printf("Digite o total de Pontos Turisticos: ");
  scanf("%d", &pontos_turisticos2);
  getchar();

  densidade2     = populacao2 / area2;
  invdensidade2  = area2 / populacao2;
  pibpc2         = (pib2 * bilhao) / populacao2;
  superpoder2    = pontos_turisticos2
    + populacao2
    + area2
    + pib2
    + invdensidade2
    + pibpc2;

  printf("Comparação de Cartas:\n\n"); //Removi o código antigo para se adequar ao pedido.
  printf("População: Carta %d venceu (%d)\n", 
         (populacao > populacao2)  ? 1 : 2,
         (populacao > populacao2));
  // printf("Área: Carta %d venceu (%d)\n",
  //        (area > area2)            ? 1 : 2,
  //        (area > area2));
  // printf("PIB: Carta %d venceu (%d)\n",
  //        (pib > pib2)              ? 1 : 2,
  //        (pib > pib2));
  // printf("Pontos Turísticos: Carta %d venceu (%d)\n",
  //        (pontos_turisticos > pontos_turisticos2) ? 1 : 2,
  //        (pontos_turisticos > pontos_turisticos2));
  // // Para densidade, menor valor vence
  // printf("Densidade Populacional: Carta %d venceu (%d)\n",
  //        (densidade < densidade2)  ? 1 : 2,
  //        (densidade < densidade2));
  // printf("PIB per Capita: Carta %d venceu (%d)\n",
  //        (pibpc > pibpc2)          ? 1 : 2,
  //        (pibpc > pibpc2));
  // printf("Super Poder: Carta %d venceu (%d)\n",
  //        (superpoder > superpoder2) ? 1 : 2,
  //        (superpoder > superpoder2));

  return 0;
}
