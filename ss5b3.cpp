#include<stdio.h>

int main(){
	int n, sum;
	printf("nhap n:\n"); 
	scanf("%d", &n); 
	for(int i = 0; i <= n; i ++){ 
		sum += i;  
	} 
	
	printf("%d", sum); 
	
	return 0; 
	
}
