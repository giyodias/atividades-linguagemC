#include <stdio.h>

int main() {

    // Faça um programa que calcule se um triângulo é:
    // - Isósceles
    // - Escaleno
    // - Equilátero

    // Variáveis do tipo float (podem conter numeros reais) com o nome dos lados de um triângulo
   float ladoA, ladoB, ladoC;

        //printf() para imprimir na tela uma mensagem.
        printf("Digite o lado A do triângulo: ");
        // através do scanf podemos atribuir um valor a uma variável.
        //scanf("tipo de dado da variável", &variável) -> 
        //no segundo campo é necessário colocar a variável que você deseja que ganhe o valor digitado. 
        scanf("%f", &ladoA);

        printf("Digite o lado B do triângulo: ");
        scanf("%f", &ladoB);

        printf("Digite o lado C do triângulo: ");
        scanf("%f", &ladoC);


        // considerando que um triângulo equilátero tem todos os lados iguais, precisamos checar se 
        //todos os lados inseridos acima são iguais.
        if(ladoA == ladoB && ladoA == ladoC && ladoB == ladoC){
            printf("O triângulo é equilátero.");
        //se não forem iguais, vamos para a próxima checagem: se pelo menos dois lados são iguais (triângulo isósceles)
        } else if(ladoA == ladoB  || ladoA == ladoC  || ladoB == ladoC){
            printf("O triângulo é isósceles.");
        // se a condição acima também não se aplicar vamos para a ultima, onde nenhum lado precisa ser igual
        //(triângulo escaleno)
        } else {
            printf("O triângulo é escaleno.");
        }

    return 0;
}



