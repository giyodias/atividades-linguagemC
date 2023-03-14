
#include <stdio.h>

int main() {

    //calcular o imposto de renda para um grupo de contribuintes considerando:
    //a) leitura de dados: cpf, dependentes, renda anual;
    //b) para cada contribuinte será feito um desconto de R$6000,00 por dependente
    //c) os valores da aliquota para cálculo de imposto são:
    // renda liquida     aliquota
    // ate 20mil         isento
    // 20mil ate 50mil   5%
    // 50mil ate 100mil  10%
    // acima de 100mil   15%

    //Declaração de variáveis
    char cpf[11];
    int dependentes;
    float rendaAnual, valor;

    //Atribuindo os valores que o usuário digitar às variáveis
    printf("Digite seu CPF: ");
    scanf("%s", &cpf);

    printf("Digite a quantidade de dependentes: ");
    scanf("%d", &dependentes);

    printf("Digite a renda anual: ");
    scanf("%f", &rendaAnual);

    //A variável valor é equivalente à renda anual menos o abate causado pelos dependentes.
    //Com base nesse valor calculado iremos realizar os testes.
    valor = rendaAnual - (dependentes * 6000);


    //Se o valor estiver entre 0 e 20mil, aliquota=isento.
    if(valor > 0 && valor < 20000){
        printf("Aliquota: isento.");

    //São utilizados dois caracteres %% para que o caractere % seja impresso na tela.
    }else if(valor >= 200000 && valor < 50000 ){
        printf("Aliquota: 5%%");

    }else if(valor >= 50000 && valor < 100000){
        printf("Aliquota: 10%%");

    //Se o valor for igualou maior que 100mil, aliquota = 15%
    }else if(valor >= 100000){
        printf("Aliquota: 15%%");

    //Caso seja escrito um valor negativo(não se encaixa nas condições acima)
    //a mensagem abaixo será exibida.
    }else{
        printf("Valor inválido.");
    }

    return 0;
}


