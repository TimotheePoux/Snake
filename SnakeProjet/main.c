#include <stdio.h>

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
	char grille[17][17];
	for (int i = 0; i < 17; i++) {
		for (int j = 0; j < 17; j++) {
			grille[j][i] = ' ';
		}
	}
	afficheGrille(grille);

	return 0;
}