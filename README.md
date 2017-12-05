# The Coin Problem

```c
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
```

## Split it

```c
#define min(x,y) (x>y) ? y : x; 
```

This  definition create a function that choose the small one in $x$ and $y$ .



```
for(int i = 0 ;i< 6 ; i++){
		scanf("%d",C+i);
	}
	scanf("%d",&A);
```

Get the input



```c
	int count = 0;
	for(int i = 6 - 1 ; i>=0 ;i--){
		int choose = min(A/V[i], C[i]);
		A-= choose* V[i];
		count += choose;
	}
```

Notice the

```c
min(A/V[i], C[i]);
```

We are greedy to get more coins in large value.

e.g.

A = 201 $C_{50}=3$ 

Then,

$\frac{A}{50}=4$, $C_{50}=3$

So we choose 3





