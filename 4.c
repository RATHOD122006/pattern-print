#include<stdio.h>
// alphabet a 

int main(){
	
	int rows=5;
	
	for (int i=1;i<=rows;i++){
		
		for (int j=1;j<=rows;j++){
			
			if(i==1 || i==3 || j==1 || j==5){
				
				printf("* ");
				
			}else{
				
				printf("  ");
				
			}
		}
		printf("\n");
	}
	
	return 0;
}