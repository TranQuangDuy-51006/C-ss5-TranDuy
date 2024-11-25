#include<stdio.h>

int main(){ 
	int tich; 
	for( int i = 1; i <= 10; i ++){
		for(int j = 1; j <= 10; j++){
			tich = i * j;
			printf("%d x %d = %d\n", i , j , tich);
		}
		printf(" \n"); 
	}   
	return 0; 
	
}
