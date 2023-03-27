#include <stdio.h>
#include <stdlib.h>

int main()
{

    int opcao;
    char resposta;
    
        printf("Bem-vindo! Pressione Enter para continuar...");
    getchar(); 
    
    printf("Bem-vindo ao jogo professor girotto!\n\n");
    
    do {
printf("1. Pergunta e resposta\n");
printf("2. Cobra na caixa!\n");
printf("3. Gousmas War\n");
printf("4. Sair\n");
  printf("\nEscolha uma opcao: ");
scanf("%d", &opcao);
        
 switch(opcao) {
   case 1:
   {
  int score = 0;
 char play_again = 's';

do {
 printf("Pergunta 1: Qual o pais com a maior populaçao do mundo em 2023?\n");
 printf("a) India\n");
  printf("b) Estados Unidos\n");
 printf("c) China\n");
printf("d) Brasil\n");
getchar(); // pra consumir o \n do scanf
 resposta = getchar();
 if (resposta == 'c') {
 printf("Resposta correta!\n");
score++;
   } else {
  printf("Resposta incorreta. A resposta correta c) China\n");
}

 printf("Pergunta 2: Em que ano ocorreu a Revolução Francesa?\n");
printf("a) 1776\n");
printf("b) 1788\n");
printf("c) 1789\n");
printf("d) 1803\n");
getchar();
resposta = getchar();
if (resposta == 'c') {
printf("Resposta correta!\n");
score++;
 } else {
printf("Resposta incorreta. A resposta correta  c) 1789.\n");
 }

printf("Pergunta 3: Qual é o nome do primeiro homem a pisar na lua?\n");
printf("a) Neil Armstrong\n");
printf("b) Buzz Aldrin\n");
printf("c) Yuri Gagarin\n");
printf("d) Alan Shepard\n");
getchar();
resposta = getchar();
 if (resposta == 'a') {
printf("Resposta correta!\n");
score++;
 } else {
printf("Resposta incorreta. A resposta correta  a) Neil Armstrong.\n");
 }

printf("Pergunta 4: Qual é o nome do maior rio do mundo?\n");

printf("a) Nilo\n");
printf("b) Amazonas\n");
printf("c) Yangtze\n");
printf("d) Mississippi\n");
getchar();
resposta = getchar();
if (resposta == 'a') {
printf("Resposta correta!\n");
score++;
} else {
printf("Resposta incorreta. A resposta correta  a) Nilo.\n");
}


printf("Pergunta 5: Quem pintou a famosa obra A Ultima Ceia?\n");
printf("a) Vincent van Gogh\n");
printf("b) Pablo Picasso\n");
printf("c) Leonardo da Vinci\n");
printf("d) Michelangelo\n");
getchar();
resposta = getchar();
 if (resposta == 'c') {
 printf("Resposta correta!\n");
score++;
                    } else {
 printf("Resposta incorreta. A resposta correta  c) H2O.\n");
}

printf("Seu score final foi: %d/5\n", score);

printf("Deseja jogar novamente? (s/n)\n");
getchar();
play_again = getchar();
} while (play_again == 's');
}
break;
case 2:
printf("Você abriu a caixa e encontrou uma cobra! Fim de jogo.\n");
 break;
        case 3:
printf("Você esta jogando Gousmas War!\n");
            break;
        case 4:
printf("Saindo do jogo...\n");
            break;
        default:
printf("Opção inválida! Tente novamente.\n");
            break;
    }
} while (opcao != 4);

return 0;
}
