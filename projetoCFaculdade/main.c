#include <stdio.h>

int main(void) {
  char name[25];
  char cpf[11];
  int qntProd;
  int opcao = 0; 
  float valorParcela = 0;

    printf("Digite o nome do responsavel pela compra: ");
    gets(name);
    

    printf("Digite seu cpf: ");
    gets(cpf);
    
    printf("Número de produtos que deseja comprar: ");
    scanf("%i", &qntProd);

    float vetQntProdut[qntProd];
    int i;
    float soma = 0;
    for(i = 1; i <= qntProd; i++){
      printf("Insira o valor do produto: \n");
      scanf("%f", &vetQntProdut[i-1]);
      soma = (soma + vetQntProdut[i-1]);
    }

    printf("------------ Resumo parcial da compra -----------\n");
    printf("Preco total sobre o valor de tabela : %.2f\n", soma);
    printf("\n");
    printf("------------ Modalidades de pagamento -----------\n");
    printf("1. À vista .......... desconto de 2.5%% sobre o preco de tabela\n");
    printf("2. De 2 ate 5 vezes ....... preco de tabela sem desconto ou acrescimo\n");
    printf("3. De 6 ate 10 vezes ........ juros de 6.0%% sobre o preco de tabela\n");
    printf("4. De 11 ate 15 vezes ....... juros de 13.0%% sobre o preco de tabela\n");
    printf("Digite o numero de parcelas para o pagamento: \n");
    scanf("%i", &opcao);
      float valorCorrigido = 0;
      if(opcao == 1){
        valorCorrigido = soma - (soma * 0.025);
        printf("%.2f\n", valorCorrigido);        
        } else if(opcao >= 2 && opcao <=5){
        valorCorrigido = soma;
        printf("R$%.2f\n", valorCorrigido);
        } else if (opcao >= 6 && opcao <= 10) {
        valorCorrigido = soma + (soma * 0.06);    
        printf("%.2f\n", valorCorrigido);
        } else if (opcao >= 11 && opcao <= 15){
         valorCorrigido = soma + (soma * 0.13);
          printf("%.2f\n", valorCorrigido);
        } else {
          printf("Numero de parcelas não permitido. Operacao encerrada!");
        }  
      
        printf("---------------Resumo da compra -----------\n");
        printf("Cliente: %s ", name);
        printf("- CPF: %s\n", cpf);
        printf("Preco de tabela: %.2f\n", soma);
        printf("Numero de parcelas: %i\n", opcao);
        if(opcao == 1){
        printf("compra a vista com 2.5%% de desconto.\n");        
        } else if(opcao >= 2 && opcao <=5){
        printf("compra a prazo em %i vezes pelo preco de tabela\n", opcao);
        } else if (opcao >= 6 && opcao <= 10) {   
        printf("compra a prazo em %i vezes com juros de 6%%.\n", opcao);
        } else if (opcao >= 11 && opcao <= 15){
          printf("compra a prazo em %i vezes com juros de 13%%\n", opcao);
        } else {
          printf("Numero de parcelas não permitido. Operacao encerrada!\n");
        }  
        printf("Preco total: R$%.2f\n ", valorCorrigido);
        valorParcela = valorCorrigido/opcao;
        printf("Valor da parcela: R$%.2f\n", valorParcela);
}