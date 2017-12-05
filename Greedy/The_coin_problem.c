#include<stdio.h>
#define min(x,y) (x>y) ? y : x; 
/*
3 2 1 3 0 2
620
*/ 
int main(){
	int C[6];
	int V[6] = {1, 5, 10, 50, 100, 500};
	int A;
	for(int i = 0 ;i< 6 ; i++){
		scanf("%d",C+i);
	}
	scanf("%d",&A);
	
	int count = 0;
	for(int i = 6 - 1 ; i>=0 ;i--){
		int choose = min(A/V[i], C[i]);
		A-= choose* V[i];
		count += choose;
	}
	printf("%d\n",count);
	
	return 0;
} 
