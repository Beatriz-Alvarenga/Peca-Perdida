#include <stdio.h>

int scanSomatoriaPecas(int Nqb) {
    int somaP = 0, // declaração da variável somaP (Soma das Peças)
        Npecas = 0, // declaração da variável Npecas (Número de Peças)
        i = 0; // declaração da variável i (Iterador)
    for(i = 0; i < Nqb - 1 ; i++){ // Laço de repetição para receber os números das peças que temos (Nqb - 1)
        scanf("%d", &Npecas); // Recebendo os valores das peças que temos (de 1 até Nqb - 1)
        somaP = somaP + Npecas; // Somando os números de peças que temos
    }
    return somaP; // Retorna a somatória
}

int main() {
    
    int Nqb = 0, // declaração da variável N (Número do Quebra-cabeça)
    somaP = 0, // declaração da variável somaP (Soma das Peças)
    somaN = 0, // declaração da variável somaN (Soma de Números)
    diff = 0; // declaração da variável diff (Diferença)
    
    scanf("%d", &Nqb); // Recebendo o valor do Quebra-Cabeça
    
    somaP = scanSomatoriaPecas(Nqb); // Recebendo valores da função de leitura
    
    for(; Nqb > 0; Nqb--){ // Usando Nqb como parâmetro para o limite de parada do laço for (Decrementando de 1 em 1)
        somaN = somaN + Nqb; // Somando o decremento da variável Nqb de 1 em 1 (EX: 5 + 4 + 3 + 2 + 1 = 15)
    }
    
    diff = somaN - somaP; // Fazendo a diferença entre as variáveis para resultar no número da peça que falta
    
    printf("%d\n", diff); // Printando a peça que faltava

    return 0; // Fim :)
}