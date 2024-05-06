#include <stdio.h>

int main() {
	char array[100][100];
	int i = 0, j = 0, arrayW = 0, arrayH = 0;
	char k = 0;
	FILE *fp;

	fp = fopen("test_imageV2.txt", "r");

	if (fp == NULL) {
		printf("Error opening file!\n");
		return 1;
	} 
	else {
		printf("File opened successfully!\n");

		while (fscanf(fp, "%c", &k) == 1) {
			if (k == '\n') {
				arrayH++;
				if (arrayW == 0) {
					arrayW = j;
					}
				j = 0;
				i++;
			}
			else {
				array[i][j++] = k;
			}
		}

		for (i = 0; i < arrayH; i++) {
			for (j = 0; j < arrayW; j++) {
				printf("%c", array[i][j]);
			}
			printf("\n");
		}

		printf("Array width is: %d\n", arrayW - 1);
		printf("Array height is: %d\n", arrayH);

		fclose(fp);
		return 0;
	}
}

