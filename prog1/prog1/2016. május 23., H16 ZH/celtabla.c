#include <stdio.h>
#include <stdlib.h>

int main(){

	int esetek;

	scanf("%d", &esetek);

	int meret[esetek];
	for (int i = 0; i < esetek; i++){
		scanf("%d", &meret[i]);
	}

	for (int m = 0; m < esetek; m++){

	int kezdo = 0;
	int vegzo = (4 * meret[m] - 3);

	char **tomb = malloc(vegzo*sizeof(char *));

	for (int i = 0; i < vegzo; i++){
		tomb[i] = malloc(vegzo*sizeof(char));
	}

	while (vegzo >= 1){

	for (int i = kezdo; i < vegzo; i++){
		for (int j = kezdo; j < vegzo; j++){
			if ((i == kezdo) || (i == (vegzo-1)))
				tomb[i][j] = '*';
			else
				if ((j == kezdo) || (j == (vegzo-1)))
					tomb[i][j] = '*';
				else
					tomb[i][j] = ' ';
		}
	}

	kezdo += 2;
	vegzo -= 2;

	}

	for (int i = 0; i < (4*meret[m]-3); i++){
		for (int j = 0; j < (4*meret[m]-3); j++){
			printf("%c", tomb[i][j]);
		}
		if ((i != (4*meret[m]-4)) && (m < esetek))
		printf("\n");
	}

	if (m < esetek-1)
		printf("\n\n");

	free(tomb);

	}

	printf("\n");

	return 0;
}