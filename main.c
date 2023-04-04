#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_FURY 5
#define MAX_GOUSMAS 2
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
                        printf("b) Sao Paulo\n");
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
            printf("%s e %s, um de vocês irá abrir a primeira caixa.\n", name1, name2);
            printf("Boa sorte!\n\n");
            while (1) {                           // loop do jogo
                if (turn == 0) {
                    printf("%s, é sua vez de escolher uma caixa (1-5): ", name1);
                } else {
                    printf("%s, é sua vez de escolher uma caixa (1-5): ", name2);
                }
                scanf("%d", &chosen_box);
                if (chosen_box < 1 || chosen_box > 5) {
                    printf("Por favor, escolha um número entre 1 e 5.\n");
                    continue;
                }
                chosen_box--;  // índice começa em 0
                if (chosen_box == button_box) {
                    printf("Parabéns,você encontrou o botão e abriu o cofre! Você venceu o jogo!\n");
break; // sai do loop do jogo
} else if (chosen_box == snake_box) {
printf("Infelizmente, você escolheu a caixa com a cobra venenosa e foi picado!\n");
break; // sai do loop do jogo
} else {
printf("Esta caixa está vazia.\n");
turn = !turn; // passa a vez para o outro jogador
}
}
break;
}

case 3:
   {
   
      
typedef struct Gousma {
    int fury;
} Gousma;

// Struct for a player
typedef struct Player {
    Gousma gousmas[MAX_GOUSMAS];
    int active_gousma;
} Player;

// Function to print the status of the game
void print_game_status(Player player1, Player player2) {
    printf("Player 1: Gousma 1 (%d/%d), Gousma 2 (%d/%d)\n", player1.gousmas[0].fury, MAX_FURY, player1.gousmas[1].fury, MAX_FURY);
    printf("Player 2: Gousma 1 (%d/%d), Gousma 2 (%d/%d)\n", player2.gousmas[0].fury, MAX_FURY, player2.gousmas[1].fury, MAX_FURY);
}

// Function to choose a random player to start the game
int choose_starting_player() {
    srand(time(NULL));
    return rand() % 2 + 1;
}

// Function to check if a player has any active Gousmas left
int check_active_gousmas(Player player) {
    for (int i = 0; i < MAX_GOUSMAS; i++) {
        if (player.gousmas[i].fury > 0) {
            return 1;
        }
    }
    return 0;
}

// Function to check if a Gousma has reached the maximum fury level and disintegrate it if so
void check_max_fury(Gousma* gousma) {
    if (gousma->fury >= MAX_FURY) {
        printf("Gousma with fury %d foi desintegrado!\n", gousma->fury);
        gousma->fury = 0;
    }
}

// Function to select a target Gousma for an attack
int select_target_gousma(Player player) {
    int target_gousma;
    do {
        printf("Select target Gousma (1 or 2): ");
        scanf("%d", &target_gousma);
    } while (target_gousma < 1 || target_gousma > MAX_GOUSMAS || target_gousma == player.active_gousma);
    return target_gousma - 1;
}

// Function to perform an attack
void attack(Player* attacker, Player* defender) {
    int target_gousma = select_target_gousma(*defender);
    defender->gousmas[target_gousma].fury += attacker->gousmas[attacker->active_gousma].fury;
    attacker->gousmas[attacker->active_gousma].fury = 0;
    check_max_fury(&defender->gousmas[target_gousma]);
    if (defender->gousmas[target_gousma].fury >= MAX_FURY) {
        defender->gousmas[target_gousma].fury = 0;
    }
}

// Function to perform a division
void divide(Player* player) {
    if (player->gousmas[1].fury == 0 && player->gousmas[0].fury > 1) {
        player->gousmas[1].fury = player->gousmas[0].fury / 2;
        player->gousmas[0].fury /= 2;
printf("Gousma 1 divided into two with fury levels %d and %d!\n", player->gousmas[0].fury, player->gousmas[1].fury);
}
}

// Main function to run the game
int main() {
// Initialize the players and their Gousmas
Player player1 = {
.gousmas = {{.fury = MAX_FURY}, {.fury = MAX_FURY}},
.active_gousma = 0
};
Player player2 = {
.gousmas = {{.fury = MAX_FURY}, {.fury = MAX_FURY}},
.active_gousma = 0
};


// Choose a random player to start the game
int current_player = choose_starting_player();

// Run the game until one of the players has no active Gousmas left
while (check_active_gousmas(player1) && check_active_gousmas(player2)) {
    printf("Current player: %d\n", current_player);
    print_game_status(player1, player2);

    // Choose the action to perform
    int action;
    do {
        printf("Choose an action (1 for attack, 2 for division): ");
        scanf("%d", &action);
    } while (action < 1 || action > 2);

    // Perform the chosen action
    if (action == 1) {
        printf("Select attacking Gousma (1 or 2): ");
        scanf("%d", &player1.active_gousma);
        attack(&player1, &player2);
    } else {
        divide(&player1);
    }

    // Switch to the other player
    current_player = (current_player == 1) ? 2 : 1;
}

// Declare the winner
if (check_active_gousmas(player1)) {
    printf("Player 1 wins!\n");
} else {
    printf("Player 2 wins!\n");
}
}

// End the game
break;
}
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
       

    
       

    
       

    
