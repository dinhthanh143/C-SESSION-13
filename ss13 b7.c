#include<stdio.h>
void createMatrix(int rows, int cols){
int i,j;
int arr[100][100];

for(i=0;i<rows;i++){
	for(j=0;j<cols;j++){
		printf("moi nhap gia tri cho arr[%d][%d]= ",i,j);
		scanf("%d", &arr[i][j]);
		
		}
}

for(i=0;i<rows;i++){
	for(j=0;j<cols;j++){
printf("%d\t", arr[i][j]);
	}
	printf("\n");
}
	
}

int main(){
int arr[100][100];	

int rows,cols;
printf("moi nhap so hang: ");
scanf("%d", &rows);


printf("moi nhap so cot: ");
scanf("%d", &cols);


   createMatrix(rows,cols);
   printf("%d", arr[0][0]);
   
  

   return 0;
}

