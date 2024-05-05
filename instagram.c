
	//Author: Joe Forest, Pietrina Spencer
	//Date: 5/4/2024
	//Final Project
	

#include <stdio.h>

#define MAX_ROW 100
#define MAX_COL 100

void mainMenu ();
void loadImage();
void editMenu();
void saveFile();
void readFile();
//ConvertChar();
//ConvertInt();
//Crop();
//Dim();
//Bright();
//Rotate();

int main (){

//Variables 
int userNum = 0;
int fileLoad = 0;
int numRow = 0;
int numCol = 0;
int picArray[100][100];
char fileName[30];

FILE *picFile, fp;

mainMenu();

scanf("%d", &userNum);

switch(userNum)
{
//Load File
	case 1:
		printf("What is the name of the image file?: ");
		scanf("%s", fileName);
		//readFile(fileName);
		
		//readFile(fileName, picArray, &numRow, &numCol);
		
		//Read file name from term?
		
		break;
//Display Image
	case 2:
		if(fileLoad == 0){
		printf("Sorry, no image to display");
		}
		else{
		//displayimage function
		}
		break;
//Edit
	case 3:
		//
		if(fileLoad == 0){
			printf("Sorry, no image to edit");
		}
		else{
			editMenu();
		}
		break;
//Exit
	case 0:
		printf("Goodbye!");
		
		return 0;
		
}






return 0;
}

	//FIRST MENU
void mainMenu (){
	printf("**ERINSTAGRAM**\n");
	printf("1: Load image\n");
	printf("2: Display image\n");
	printf("3: Edit image\n");
	printf("0: Exit\n");
	printf("\nChoose from one of the options above: ");
}

	//EDIT MENU
void editMenu(){
	printf("**EDITING**\n");
	printf("1: Crop image\n");
	printf("2: Dim image\n");
	printf("3: Brighten image\n");
	printf("0: Return to main menu\n");
	printf("\nChoose from one of the options above: ");
}

	//READ FILE
	//Having issues with this function, line 111 declarations 
	
void readFile(fileName, int numCol, int numRow, int picArray[][]){
	
	FILE *fp;
	fp = fopen(*fileName, "r");
	
	if(fp == NULL){
		printf("Error opening file!\n");
		return;
	}
	
	fscanf(fp, "%d %d", numRow, numCol); 
	
	for(int i = 0; i < *numCol; i++){
		for(int j = 0; j < *numCol){
			fscanf(fp, "%d", &picArray[i][j]);
			}
		}
	fclose(fp);
}


	//SAVE FILE
	
void saveFile(const char *fileName, int array[MAX_ROW][MAX_COL], int numRow, int numCol){
	FILE *Savefp = fopen(fileName, "w");
	if(Savefp == NULL){
		printf("Error opening file!\n");
		
		return;
	}
	fprintf(Savefp, "%d %d", numRow, numCol);
	
	for(int i = 0; i < numRow; i++){
		for(int j = 0; j < numCol; j++){
			fprintf(Savefp, "%d", array[i][j]);
		}
		fprintf(Savefp, "\n");
	}
}




