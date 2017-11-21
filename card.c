#include <stdio.h>
#include <stdlib.h>

int main(){
	char card_name[3];
	//puts("Enter the card_name: ");
	//scanf("%2s", card_name);
	int val = 0;

	do{
		puts("Enter the card_name: ");
		scanf("%2s", card_name);
		val = 0;
		switch(card_name[0]){
			case 'K':
			case 'Q':
			case 'J':
				val = 11;
				break;
			case 'A':
				val = 10;
				break;
			case 'X':
				continue;
			default:
				val = atoi(card_name);
		}
		printf("The card value is: %i\n", val);
	} while(card_name[0] != 'X');
	return 0;
}
