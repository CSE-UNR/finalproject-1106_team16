
	//Author: Joe Forest, Pietrina Spencer
	//Date: 5/4/2024
	//Final Project
	
#include <stdio.h>

//#define MAX_ROW[100]
//#define MAX_COL[100]

void mainMenu ();
int loadImage();
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
int numRow, numCol;
int picArray[100][100];
char fileName[30];

FILE *picFile;

mainMenu();

scanf("%d", &userNum);

switch(userNum)
{
	case 1:
		//functionload
		
		printf("What is the name of the image file?: ");
		scanf("%s", fileName);
		readFile(fileName);
		
		readFile(fileName, picArray, &numRow, &numCol);
		
		//Read file name from term?
		
		break;
	case 2:
		//Displayimage
		if(fileLoad == 0){
		printf("Sorry, no image to display");
		}
		else{
		//displayimage function
		}
		break;
	case 3:
		//
		if(fileLoad == 0){
			printf("Sorry, no image to edit");
		}
		else{
			editMenu();
		}
		break;
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
void readFile(const int *fileName, int picArray[100][100], int *num_col){
	FILE *file = fopen(fileName, "r");
	if(file == NULL){
		printf("Error opening file!\n");
		return;
	}
	
	fscanf(file, "%d%d", numRow, numCol); 
	
	for(int i = 0; i < *num_col; i++){
		for(int j = 0; j < *num_col){
			fscanf(file, "%d", &picArray[i][j]);
			}
		}
	fclose(fileName);
}





