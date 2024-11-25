#include<stdio.h>

int main(){
	int n, tich; 
	printf("nhap so ngau nhien:\n"); 
	scanf("%d", &n);  
	for( int i = 1; i <= 10; i ++){
		tich = n * i; 
		printf("%d x %d = %d\n", n , i , tich); 
	} 
	  
	return 0; 
	
}
