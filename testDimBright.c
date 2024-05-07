#include <stdio.h>

#define MAX_ROW 100
#define MAX_COL 100

void readFile();
void dim(int array);
void bright(int array)


	int array[MAX_ROW][MAX_COL];
	int i = 0, j = 0, arrayW = 0, arrayH = 0;
	char k = 0;
	//int userNum = 0, userEdit = 0;
	//int numRow = 0;
	//int numCol = 0;
	//int picArray[MAX_ROW][MAX_COL];

int fileLoad = 0;

int main(){
	int array[MAX_ROW][MAX_COL];

array[MAX_ROW][MAX_COL] = readFile();

dim(array[MAX_ROW][MAX_COL]);

	return 0;
}
void readFile(){
	FILE *fp;
	
	
	//printf();
	//fgets();

	fp = fopen("test_image.txt", "r");
	printf("\n");

	if (fp == NULL) {
		printf("Error opening file!\n");
	} 
	else {
		printf("File opened successfully!\n");
		fileLoad = 1;

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
				array[i][j] = k;
				j++;
			}
		}
		fclose(fp);
	}
	return array[i][j];
}

void dim(int array[MAX_ROW][MAX_COL]){
	int i, j;
	
	for(i = 0; i < row; i++){
		for(j = 0; j < col; i++){
			array[i][j] -= 1;
		}
	
	}


}

void bright(int array[MAX_ROW][MAX_COL]){
	int i, j;
	
	for(i = 0; i < row; i++){
		for(j = 0; j < col; i++){
			array[i][j] += 1;
		}
	
	}


}
