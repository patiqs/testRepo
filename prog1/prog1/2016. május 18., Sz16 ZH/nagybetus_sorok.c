#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int foo(FILE *f){

	char line[101];
	int db = 0;
	int volt = 0;

	while(fgets(line, 100, f) != NULL){
		for (int i = 0; i < strlen(line); i++){
			if (islower(line[i]))
				volt = 1;
		}
		if (volt == 1)
			volt = 0;
		else
			db++;
	}

	return db;
}