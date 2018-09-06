#include <stdio.h>

#define INPUT_SIZE  100
#define NB_PLAYERS  2
#define PLAYER_FILENAME "playerList.txt"

struct player {
  char name;
  int age;
  double avg;
};
typedef struct player player_t;

void initArray(char array[], int size);
void takeInput(char array[], int size);
player_t enterPlayer(player_t newPlayer);
int savePlayerNames(player_t players[], char filename[], int size);
void readPlayerNames(char filename[], int size);

int main (void) {
  /* player_t player[NB_PLAYERS]; */
  /* player[0] = enterPlayer(player[0]); */
  /* player[1] = enterPlayer(player[1]); */
  /* savePlayerNames(player, "playerList.txt", NB_PLAYERS); */
  readPlayerNames(PLAYER_FILENAME, NB_PLAYERS);
  return 0;
}

void initArray(char array[], int size) {
  int i;
  for (i = 0; i < size; i++) {
    array[i] = 0;
  }
}

void takeInput(char array[], int size) {
  int i;
  for (i = 0; i < size; i++) {
    scanf("%[^\n]c", &array[i]);
  }
}

player_t enterPlayer(player_t newPlayer) {
  printf("Enter the first letter of the player name> ");
  scanf(" %c", &newPlayer.name);
  printf("Enter the age>  ");
  scanf(" %d", &newPlayer.age);
  printf("Enter the batting average> ");
  scanf(" %lf", &newPlayer.avg);
  return newPlayer;
}

int savePlayerNames(player_t players[], char filename[], int size) {
  FILE* playerList;
  playerList = fopen(filename, "w");
  if (playerList == NULL) {
    /* Failure to open file */
    return 1;
  }
  int i;
  for (i = 0; i < size; i++) {
    fprintf(playerList, "%c \t", players[i].name);
    fprintf(playerList, "%d \t", players[i].age);
    fprintf(playerList, "%lf \n", players[i].avg);
  }
  fclose(playerList);
  /* Success */
  return 0;
}

void readPlayerNames(char filename[], int size) {
  FILE* playerList;
  playerList = fopen(filename, "r");
  int i;
  char c;
  int age;
  double avg;
  for (i = 0; i < size; i++) {
    fscanf(playerList, "%c %*[\t]", &c);
    fscanf(playerList, "%d %*[\t]", &age);
    fscanf(playerList, "%lf %*[\t]", &avg);
    printf("Player %d: %c \t %d \t %lf\n", i, c, age, avg);
  }
  fclose(playerList);
}
