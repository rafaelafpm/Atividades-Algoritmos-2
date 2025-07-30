int main (){
char opcao;

 printf("Digite a inicial do seu estado civil para indicarmos um local para visita (c, s, v ou
d): ");
 scanf(" %c", &opcao);

 switch(opcao) {
 case 'c':
 printf("Caramel Sweet & SALT\n");
 break;
 case 's':
 printf("Lond Pub\n");
 break;
 case 'v':
 printf("XI Baile da melhor idade\n");
 break;
 case 'd':
 printf("Academia Smart Fit\n");
 break;
 default:
 printf("Opção inválida!\n");
 break;
 }

 return 0;
  }
