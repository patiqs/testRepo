#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void foo(char **tomb, int n){

	int max_len = 0;

	for (int i = 0; i < n; i++){
		if (strlen(tomb[i]) > max_len)
			max_len = strlen(tomb[i]);
	}

	char tmp[max_len];
	tmp[0] = '\0';

	for (int i = 0; i < n; i++){
		for (int j = 0; j < (max_len - strlen(tomb[i])); j++){
			strcat(tmp, ".");
		}
		strcat(tmp, tomb[i]);
		tomb[i] = malloc(max_len*sizeof(char));
		strcpy(tomb[i], tmp);
		strcpy(tmp, "");
	}
}