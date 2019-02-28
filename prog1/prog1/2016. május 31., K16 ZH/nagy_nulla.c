#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *foo(int n, int h, int w){

	int sor = 0;
	int db = 0;

	char *tomb = malloc((h*(n*w + n)+1)*sizeof(char));

	for (int i = 1; i <= h; i++){
		if ((i == 1) || (i == h)){
			for (int j = 1; j <= (n*w + n); j++){
				if ((j % (w+1) == 0) && j != (n*w + n))
					tomb[db] = ' ';
				else{
					if (j != (n*w + n))
						tomb[db] = '*';
					else
						tomb[db] = '\n';
				}
				db++;
			}
		}
		else{
			for (int j = 1; j <= (n*w + n); j++){
				if ((j % (w+1) == 1) || (j % (w+1) == w))
					tomb[db] = '*';
				else{
					if (j != (n*w + n))
						tomb[db] = ' ';
					else 
						tomb[db] = '\n';
				}
				db++;
			}
		}
	}

	tomb[db] = '\0';

	return tomb;
}