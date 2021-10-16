#include <stdio.h>
#include <string.h>

int main() {
    // Definimos o tamanho do vetor bidimensional, sendo o primeiro indice para o tamanho das linhas e o segundo o tamanho da string
    char vetor[3][25];
    // Variavel para abrigar o input do usuário
    char nome[25];
    // Calcula o tamanho do vetor para se usar no loop
    size_t sizeV = sizeof(vetor) / sizeof(vetor[0]);
    // Faz o loop percorrendo o vetor
    for(int x = 0; x < (int) sizeV; x++){
        // Imprime a orientacao para o usuari
        printf("Informe o nome do paciente %d\n", x);
        scanf("%s", nome);
        // Copia o valor informado pelo usuario para dentro do vetor
        strcpy(vetor[x], nome);
    };
    printf("Pacientes cadastrados:\n");
    // Loop para percorrer o vetor, agora com os valores preenchidos
    for(int x = 0; x < (int) sizeV; x++) {
        printf("(%d) %s\n", x, vetor[x]);
    }
    return 0;
}