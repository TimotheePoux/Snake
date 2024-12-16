#include <stdio.h>

void sleep(unsigned long int n) {
	/* boucle vide parcourue (n * 100000) fois*/
	int i = 0;
	unsigned long int max = n * 100000;
	do {
		/* Faire qqch de stupide qui prend du temps */
		i++;
	} while (i <= max);
}

void afficheGrille(char grille[17][17]) {
	for (int i = 0; i < 19; i++) {
		printf("# ");
	}
	printf("\n");
	for (int i = 0; i < 17; i++) {
		printf("# ");
		for (int j = 0; j < 17; j++) {
			printf("%c ", grille[j][i]);
		}
		printf("#\n");
	}
	for (int i = 0; i < 19; i++) {
		printf("# ");
	}
}

int main() {
	int dimSnake[2] = { 9,9 };
	char direction = 'd';
	char grille[17][17];
	while(1){
		system("cls");
		if (direction == 'd') {
			dimSnake[0] += 1;
		}
		for (int i = 0; i < 17; i++) {
			for (int j = 0; j < 17; j++) {
				if (j == dimSnake[0] && i == dimSnake[1]) {
					grille[j][i] = '0';
				}
				else {
					grille[j][i] = ' ';
				}
			}
		}
		afficheGrille(grille);
		sleep(60);
	}

	return 0;
}