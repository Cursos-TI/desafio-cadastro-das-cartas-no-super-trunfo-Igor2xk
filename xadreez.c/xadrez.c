#include <stdio.h>

struct Cidade {
    char estado[3];
    char codigo[5];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int numPontosTuristicos;
};

int main() {
    // Criando uma instância de "Cidade"
    struct Cidade cidade1;

    // Atribuindo valores à cidade
    snprintf(cidade1.estado, sizeof(cidade1.estado), "Acre");
    snprintf(cidade1.codigo, sizeof(cidade1.codigo), "A91");
    snprintf(cidade1.nome, sizeof(cidade1.nome), "Bajuri");
    cidade1.populacao = 880631;
    cidade1.area = 152.581;
    cidade1.pib = 300,8;
    cidade1.numPontosTuristicos = 25;

    // Exibindo os dados da cidade
    printf("Carta 1:\n\n");
    printf("Estado: %s\n", cidade1.estado);
    printf("Código: %s\n", cidade1.codigo);
    printf("Nome da Cidade: %s\n", cidade1.nome);
    printf("População: %d\n", cidade1.populacao);
    printf("Área: %.2f km²\n", cidade1.area);
    printf("PIB: %.2f bilhões de reais\n", cidade1.pib);
    printf("Número de Pontos Turísticos: %d\n", cidade1.numPontosTuristicos);

    return 0;
}
