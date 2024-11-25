#include<stdio.h>

int main(){
	int n; 
	int a = 5;
	while(1){ 
		printf("nhap so ngau nhien tu 1 den 10:\n"); 
		scanf("%d", &n); 
		if(n == a){
			break; 
		} 
	} 
	
	printf("tot"); 
	
	return 0; 
	
}
