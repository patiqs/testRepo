#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int foo(FILE *f){

	int old = 10;
	int new;
	int db = 0;

	while((new = fgetc(f)) != EOF) {
		if (old == 10 && new > 64 && new < 91) {
			db++;
		}
		old = new;
	}

	return db;
}