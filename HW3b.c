#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

int random_between(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int main(int argc, char *argv[])
{
	printf("\n\nHi there. Welcome. You are playing against computer.\n");
	while(1){ 
		printf("\nType 1 for Rock, 2 For Paper, 3 for Scissors, 4 to exit.\n");
		int player = (rand()%(3-1+1)+1);
		int computer = (rand()%(3-1+1)+1);
		char input[5];	
		fgets(input, sizeof(input), stdin);
		while(sscanf(input, "%d", &player) != 1) {
  			printf("Enter correct whole number.\n");
			fgets(input, sizeof(input), stdin);
		}				
		if(player != 1 && player != 2 && player != 3  && player != 4){
			printf("Please enter a valid number!\n");continue;
		}
		char player_turn[15];
		char comp_turn[15];
		if(computer == 1){
			strcpy(comp_turn, "Rock");
		}
		else if(computer == 2){
			strcpy(comp_turn, "Paper");
		}
		else{
			strcpy(comp_turn, "Scissors");
		}
		if(player == 1){
			strcpy(player_turn, "Rock");
		}
		else if(player == 2){
			strcpy(player_turn, "Paper");
		}
		else{
			strcpy(player_turn, "Scissors");
		}	
		if(player == 4){
			printf("Goodbye! Thanks for playing!\n");break;
		}
		if((computer == 1 && player == 3)||(computer == 2 && player == 1)||(computer == 3 && player == 2)){
			printf("Computer Played: %s\nYou Played: %s\nYou Lost!\n", comp_turn, player_turn);
		}
			else if(computer == player){
				printf("Computer Played: %s\nYou Played: %s\nYou Tied with computer!\n", comp_turn, player_turn);
			}
		else{
			printf("Computer Played: %s\nYou Played: %s\nAwesome, You Won!\n", comp_turn, player_turn);
	}
}
	return 1;
}
