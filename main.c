#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_BOXES 5
int main()
{

    int opcao;
    char resposta;
    int snake_box;
      srand(time(NULL));
    
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
                        printf("Pergunta 1: Qual é a capital do Brasil?\n");
                        printf("a) Rio de Janeiro\n");
                        printf("b) São Paulo\n");
                        printf("c) Brasília\n");
                        printf("d) Salvador\n");
                        getchar(); // para consumir o caractere '\n' deixado pelo scanf
                        resposta = getchar();
                        if (resposta == 'c') {
                            printf("Resposta correta!\n");
                            score++;
                        } else {
                            printf("Resposta incorreta. A resposta correta c) Brasília\n");
                        }

                        printf("Pergunta 2: Qual é o maior planeta do sistema solar?\n");
                        printf("a) Terra\n");
                        printf("b) Urano\n");
                        printf("c) Júpiter\n");
                        printf("d) Vênus\n");
                        getchar();
                        resposta = getchar();
                        if (resposta == 'c') {
                            printf("Resposta correta!\n");
                            score++;
                        } else {
                            printf("Resposta incorreta. A resposta correta é c) Júpiter.\n");
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
                            printf("Resposta incorreta. A resposta correta é a) Neil Armstrong.\n");
                        }

                        printf("Pergunta 4: Qual é o nome do maior rio do mundo?\n");
                        printf (":a) Nilo\n");
                        printf("b) Amazonas\n");
                        printf("c) Yangtzé\n");
                        printf("d) Mississipi\n");
                        getchar();
                        resposta = getchar();
                        if (resposta == 'a') {
                        printf("Resposta correta!\n");
                        score++;
                        } else {
                        printf("Resposta incorreta. A resposta correta é a) Nilo.\n");
                        }

                    printf("Pergunta 5: Qual é o metal mais caro do mundo?\n");
                    printf("a) Platina\n");
                    printf("b) Ouro\n");
                    printf("c) Prata\n");
                    printf("d) Ródio\n");
                    getchar();
                    resposta = getchar();
                    if (resposta == 'd') {
                        printf("Resposta correta!\n");
                        score++;
                    } else {
                        printf("Resposta incorreta. A resposta correta é d) Ródio.\n");
                    }

                    printf("\nFim do jogo! Sua pontuacao foi %d.\n", score);
                    printf("Deseja jogar novamente? (s/n)\n");
                    getchar();
                    play_again = getchar();
                } while (play_again == 's');
            }
            break;

        case 2:
        {
            int button_box = rand() % NUM_BOXES;  // escolhe aleatoriamente a caixa com o botão
            int snake_box = rand() % NUM_BOXES;   // escolhe aleatoriamente a caixa com a cobra
            while (snake_box == button_box) {     // garante que a caixa com a cobra e o botão são diferentes
                snake_box = rand() % NUM_BOXES;
            }
            int chosen_box;
            int turn = rand() % 2;                // escolhe aleatoriamente quem começa
            char name1[20], name2[20];
            printf("Bem-vindo ao jogo da cobra na caixa!\n");
            printf("Jogador 1, por favor digite seu primeiro nome: ");
            scanf("%s", name1);
            printf("Jogador 2, por favor digite seu primeiro nome: ");
            scanf("%s", name2);
            printf("%s e %s, um de vocês ira abrir a primeira caixa.\n", name1, name2);
            printf("Boa sorte!\n\n");
            while (1) {                           // loop do jogo
                if (turn == 0) {
                    printf("%s, e sua vez de escolher uma caixa (1-5): ", name1);
                } else {
                    printf("%s, e sua vez de escolher uma caixa (1-5): ", name2);
                }
                scanf("%d", &chosen_box);
                if (chosen_box < 1 || chosen_box > 5) {
                    printf("Por favor, escolha um número entre 1 e 5.\n");
                    continue;
                }
                chosen_box--;  // índice começa em 0
                if (chosen_box == button_box) {
                    printf("Parabens,voce encontrou o botão e abriu o cofre! Você venceu o jogo!\n");
               break; // sai do loop do jogo
               } else if (chosen_box == snake_box) {
               printf("Infelizmente, voce escolheu a caixa com a cobra venenosa e foi picado!\n");
               break; // sai do loop do jogo
               } else {
               printf("Esta caixa esta vazia.\n");
               turn = !turn; // passa a vez para o outro jogador
               } 
               }
               break;
}


    case 3:
        printf("Gousmas War é um jogo de estratégia em tempo real.\n");
        printf("Cada jogador começa com um exército de unidades e deve conquistar a base do outro jogador.\n");
        printf("Boa sorte!\n\n");
        break;

    case 4:
        printf("Obrigado por jogar!\n");
        break;

    default:
        printf("Por favor, escolha uma opcao válida.\n");
        break;
    }
} while (opcao != 4);

return 0;
}
       

    
       

    
