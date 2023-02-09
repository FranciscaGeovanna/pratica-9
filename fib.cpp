#include <stdio.h>

int fib(int n);

int main(){
	int num, f;
	
	scanf ("%d", &num);
	
	for (int i = 1; i <= num; i++){
		f = fib(i);
		printf("%d ", f);
	}
	return 0;
}

int fib(int n){
	int f;
	
	if(n == 1){
		return 1;
	}
	
	if(n == 2){
		return 1;
	}
	
	f = fib(n-1) + fib(n-2);
	
	return f;
}
