#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <string.h>

typedef struct {
  char categoria[16];
  char produto[20];
  float qntproduto;
  char medida[4];
  float preco;
} Produto;

Produto teste[20];
char produto[20];
int posicao;

 void inicializar(void);
 char a;
 char categoria, pagamento;
 int qntcategoria, parcelas;
 int qntotal;
 int i = 0;
 int m = 0;
 int f = 0;
 float precofinal, conta, cont, desc;


int main(void) {

 setlocale(LC_ALL,"portuguese");
 for (i=0; i<20; i++){
   strcpy(teste[i].produto, "NULL");
   strcpy(teste[i].categoria, "NULL");
   strcpy(teste[i].medida, "NULL");
   teste[i].qntproduto = 0;
   teste[i].preco = 0.00;
 }
 inicializar();
 
} void inicializar(void) {
  do {
 printf("Selecione a categoria do produto: \n a)VERDURAS\n b)LEGUMES\n c)CARNES\n d)LIMPEZA\n");
 scanf("%c", &categoria);
  if(strcmp("a", &categoria) == 0){

   printf("Quantos produtos da categoria VERDURAS? ");
   scanf("%d", &qntcategoria);
   qntotal = qntotal + qntcategoria;
   
   for (i = m; i< qntotal; i++) {
     printf("Digite o nome do produto: ");
     scanf("%s%*c", teste[i].produto);
     printf("Digite a quantidade do produto: ");
     scanf("%f%*c", &teste[i].qntproduto);
     printf("Digite a medida do produto(kg/un/pc/pct): ");
     scanf("%s%*c", teste[i].medida);
     printf("Digite o preco do produto: R$ ");
     scanf("%f%*c", &teste[i].preco);
   } printf("\n Informar novo item para a venda? (s/n) \n");
      scanf("%c", &a);
       m++;
  } 
  if(strcmp("b", &categoria) == 0){
   printf("Quantos produtos da categoria LEGUMES? ");
   scanf("%d", &qntcategoria);
   qntotal = qntotal + qntcategoria;
   
   for (i = m; i< qntotal; i++) {
     printf("Digite o nome do produto: ");
     scanf("%s%*c", teste[i].produto);
     printf("Digite a quantidade do produto: ");
     scanf("%f%*c", &teste[i].qntproduto);
     printf("Digite a medida do produto(kg/un/pc/pct): ");
     scanf("%s%*c", teste[i].medida);
     printf("Digite o preco do produto: R$ ");
     scanf("%f%*c", &teste[i].preco);
   } printf("\n Informar novo item para a venda? (s/n) \n");
      scanf("%c", &a);
       m++;
  }
  if(strcmp("c", &categoria) == 0){
   printf("Quantos produtos da categoria CARNES? ");
   scanf("%d", &qntcategoria);
   qntotal = qntotal + qntcategoria;
   
   for (i = m; i< qntotal; i++) {
     printf("Digite o nome do produto: ");
     scanf("%s%*c", teste[i].produto);
     printf("Digite a quantidade do produto: ");
     scanf("%f%*c", &teste[i].qntproduto);
     printf("Digite a medida do produto(kg/un/pc/pct): ");
     scanf("%s%*c", teste[i].medida);
     printf("Digite o preco do produto: R$ ");
     scanf("%f%*c", &teste[i].preco);
   } printf("\n Informar novo item para a venda? (s/n) \n");
      scanf("%c", &a);
       m++;
  }  
  if(strcmp("d", &categoria) == 0){
   printf("Quantos produtos da categoria LIMPEZA? ");
   scanf("%d", &qntcategoria);
   qntotal = qntotal + qntcategoria;
   
   for (i = m; i< qntotal; i++) {
     printf("Digite o nome do produto: ");
     scanf("%s%*c", teste[i].produto);
     printf("Digite a quantidade do produto: ");
     scanf("%f%*c", &teste[i].qntproduto);
     printf("Digite a medida do produto(kg/un/pc/pct): ");
     scanf("%s%*c", teste[i].medida);
     printf("Digite o preco do produto: R$ ");
     scanf("%f%*c", &teste[i].preco);
   } printf("\n Informar novo item para a venda? (s/n) \n");
      scanf("%c", &a);
       m++;
  } 

 } while (a != 'n');
    
     printf("Marcos Breno Lemos Cavalcante Barros\n marcosbrenolcb@gmail.com\n");
     for (i=0; i<qntotal; i++) {

     printf("\n%s: R$ %.2f (%.2f %s)\n", teste[i].produto, teste[i].preco, teste[i].qntproduto, teste[i].medida);
    
  }
  printf("\nTOTAL DE ITENS: %d\n", qntotal);
  for (i=0; i<qntotal; i++){
    precofinal = precofinal + teste[i].preco;
  } printf("\nVALOR TOTAL: R$ %.2f\n", precofinal);
  printf("\nDigite o desconto: \n");
  scanf("%f", &desc);
  printf("\nDESCONTO: %.2f%%", desc);
  desc = desc/100;
  desc = precofinal * desc;
  precofinal = precofinal - desc;

  printf("\nVALOR DO DESCONTO: R$ %.2f\n", desc);

  printf("\nA VISTA OU PARCELADO?(a/p) \n");

  scanf(" %c", &pagamento);
  
  if(strcmp("a", &pagamento) == 0){
    printf("\nVALOR A PAGAR: R$ %.2f\n", precofinal);
  } if(strcmp("p", &pagamento) == 0){
    printf("\nEM QUANTAS PARCELAS? \n");
    scanf("%d", &parcelas);
    precofinal = precofinal/parcelas;
    printf("\nVALOR A PAGAR: R$ %.2f\n", precofinal);
  }
}