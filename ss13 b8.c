#include<stdio.h>
int findUCLN(int a,int b){
	int ucln;
	int i;
	for(i=1;i<=a && i<=b;i++){
		if(a%i==0 && b%i==0){
		     ucln=i;
		
	}
	}
	return ucln;
	

}

int main(){
	
 int num1=7;
 int num2=28;

printf("UCLN cua %d va %d la: %d",num1,num2, findUCLN(num1,num2));



   return 0;
}

