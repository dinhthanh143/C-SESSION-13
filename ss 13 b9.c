#include<stdio.h>
void showMenu(){
	printf("\n MENU \n\n");
	printf("1. Nhap gia tri cac phan tu cua mang. \n");
	printf("2. In gia tri cac phan tu cua mang theo ma tran.  \n");
	printf("3. In ra cac phan tu o goc theo ma tran. \n");
	printf("4. In ra cac phan tu nam tren duong bien theo ma tran.\n");
	printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran. \n");
	printf("6. In ra cac phan tu la so nguyen to theo ma tran. \n");
	printf("7. Thoat. \n");
    printf("lua chon cua ban: ");
	
}

void insertElements(int arr[100][100],int a,int b){
	int i,j;
	for(i=0;i<a;i++){
	for(j=0;j<b;j++){
		printf("moi nhap gia tri cho arr[%d][%d]= ",i,j);
		scanf("%d", &arr[i][j]);
		
		}
}
}

void createMatrix(int arr[100][100],int a,int b){
	int i,j;
	for(i=0;i<a;i++){
	for(j=0;j<b;j++){
printf("%d\t", arr[i][j]);
	}
	printf("\n");
}
}

void printEdge(int arr[100][100],int a,int b){
	int i,j;
	for(i=0;i<a;i++){
	for(j=0;j<b;j++){
		if(i==0 || j==0 || i==a-1 || j== b-1){
			printf("%d \t",arr[i][j]);
		}
		}
		printf("\n");
	}
}

void printCorner(int arr[100][100],int rows,int cols){
	int i,j;
	for(i=0;i<rows;i++){
	for(j=0;j<cols;j++){
		if(i==0 && j==0 || i==0 && j==cols-1 || j==0 && i== rows-1 || j==cols-1 && i== rows-1){
			printf("%d \t",arr[i][j]);
		}
		}
		printf("\n");
	}
}

int checkPrime(int n){
 int i;
 if (n<=1) {
        return 0;
    }
    for ( i=2;i*i<=n;i++) {
        if (n%i==0) {
            return 0;
        }
    }
    return 1;	
}

void printDiagonal(int arr[100][100],int rows,int cols){
int i;
int j=0;

	for(i=0;i<rows;i++){	
	printf("%d\t",arr[i][j]);
		j++;
	}
	printf("\n");
	j=cols-1;
	for(i=0;i<rows;i++){	
	printf("%d\t",arr[i][j]);
		j--;
	}
	
	
}


int main(){
int i,j;
int arr[100][100];
int rows,cols;
int choice;
while (choice!=7){
		showMenu();
		scanf("%d", &choice);
switch(choice){
	case 1:
		printf("moi nhap so hang: ");
		scanf("%d", &rows);
		printf("moi nhap so cot: ");
		scanf("%d", &cols);	
			
		insertElements(arr,rows,cols);	
		break;	
	
	case 2:
		createMatrix(arr,rows,cols);
		break;
	
	case 4:
	    printEdge(arr,rows,cols);
	 	break;
	
	case 3:
		printCorner(arr,rows,cols);
	 	break;
	
	case 6:
		for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
		if (checkPrime(arr[i][j])){
			printf("%d\t ", arr[i][j]);
		}		
	}
		
}
			
	 	break;
	 	
	case 5: 
		if (rows!=cols){
			printf("so hang phai bang so cot \n");
		}else{
				printDiagonal(arr,rows,cols);
		
		
		
			
		}
	 break;
	 	
	default:
		printf("\n lua chon khong hop le \n");
			
			
	}
}


   return 0;
}

