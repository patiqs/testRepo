#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, int **argv){

	FILE *f;
	f = fopen(argv[1], "r");

	char line[101];
	char szirmok[1600];
	char fajtak[1600];

	int h, sz;
	int db = 0;
	int f_db = 0;
	int szum = 0;
	int volt = 0;

	while (fgets(line, 100, f) != NULL){

		sz = atoi(strtok(line, " "));
		h = atoi(strtok(NULL, " "));

		for (int i = 0; i < h; i++){
			fgets(line, 100, f);
			for (int j = 0; j < sz; j++){
				if (line[j] != '.'){
					szirmok[db] = line[j];
					db++;
				}
			}
		}

		fajtak[0] = szirmok[0];

		for (int i = 1; i < db; i++){
			for (int j = 0; j < f_db; j++){
				if (fajtak[j] == szirmok[i]){
					volt = 1;
				}
			}
			if (volt == 0){
				fajtak[f_db] = szirmok[i];
				f_db++;
			}
			volt = 0;
		}

		printf("%d\n", f_db);


		db = 0;
		f_db = 0;
	}

	fclose(f);

	return 0;
}