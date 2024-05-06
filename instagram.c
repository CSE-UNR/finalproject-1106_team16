
	//Author: Joe Forest, Pietrina Spencer
	//Date: 5/4/2024
	//Final Project
	

#include <stdio.h>

#define MAX_ROW 100
#define MAX_COL 100

void mainMenu ();
void loadImage();
void editMenu();
void readFile(fileName, int numCol, int numRow, int picArray[MAX_ROW][MAX_COL]);
void displayImage();
void endProgram();
void cropImage();
void dimImage();
void brightenImage();
void saveFile(const char *fileName, int array[MAX_ROW][MAX_COL], int numRow, int numCol);
//ConvertChar();
//ConvertInt();
//Rotate();

int main (){

//Variables 
int userNum = 0, userEdit = 0;
int fileLoad = 0;
int numRow = 0;
int numCol = 0;
int picArray[MAX_ROW][MAX_COL];
char fileName[30];

FILE *picFile;

mainMenu();

scanf("%d", &userNum);

switch(userNum)
{
//Read File
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
			scanf("%d", &userEdit);
// Beginning of edit switch		
				switch (userEdit){
					//Crop
					case 1:
						cropImage();
					//Dim
					case 2:
						dimImage();
					//Brighten
					case 3:
						brightenImage();
					//Main Menu
					case 0:
						mainMenu();
					
			
			
			
//End of edit switch			
			}	
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


	//READ FILE
	//Having issues with this function, line 111 declarations 
	
void readFile(fileName, int numCol, int numRow, int picArray[MAX_ROW][MAX_COL]){
	
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








	//Display Image
	
void displayImage(){




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

	//Exit Function
void endProgram(){


}	

	//Crop Image
void cropImage(){



}	

	//Dim Image
void dimImage(){



}
	
	//Brighten Image
void brightenImage(){



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





