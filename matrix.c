#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define rows 5
#define cols 5

void fillMatrix(int matrix[rows][cols]);
void printMatrix(int matrix[rows][cols]);
void transposeMatrix(int matrix[rows][cols]);
void multiplyMatrix (int m1[2][cols], int m2[rows][cols], int resultMatrix[rows][cols]); //change later


int main(){

	int matrix[rows][cols];
	fillMatrix(matrix); // Q1
	printMatrix(matrix);  //Q2
	transposeMatrix(matrix);  //Q3
	printMatrix(matrix);
	int matrix2[2][5]={0,1,2,3,4,5,6,7,8,9}; 
	int matrixResult[rows][cols];
	multiplyMatrix(matrix2, matrix, matrixResult); //Q4
	printMatrix(matrixResult);
	return 0;

}





void fillMatrix(int matrix[rows][cols]){
time_t t;

srand((unsigned) time(&t));
for (int i=0;i<rows;i++){

    for (int j=0; j<cols;j++){

     matrix[i][j]=(rand()%100 + 1);
   }

}

}

void printMatrix(int matrix[rows][cols]){

	for (int i=0; i<rows;i++){

  		for (int j=0; j<cols;j++){

		printf("%d\t",matrix[i][j]);

		}
	printf("\n");
	}
printf("\n");
}

void transposeMatrix(int matrix[rows][cols]){
	int temp;
	for (int i=0; i<rows;i++){

		for (int j=i+1; j<cols; j++){
		
		temp=*(*(matrix + i) + j);
		*(*(matrix + i) + j)=*(*(matrix + j)+ i);
		*(*(matrix + j) + i)=temp;

		}
	}


}

void multiplyMatrix(int m1[2][5], int m2[rows][cols], int resultMatrix[rows][cols]){

	int sum;
	for (int i=0; i<5;i++){ //change back to i<2

		for (int j=0; j<5; j++){ //change back j<cols
		 sum=0;


		 	for (int k=0; k< 5; k++){ //change back to k<5

			if (i<2){ //change later 
				sum = sum + (*(*(m1 + i) + k)) * (*(*(m2 + k) + j));
			}
			}
			*(*(resultMatrix + i) + j) = sum;

		if (i >= 2){

		*(*(resultMatrix + i) + j )=0;
		}
		}

	}
}






















