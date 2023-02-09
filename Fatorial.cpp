#include <stdio.h>
#include <locale.h>

int fatorial(int n);

int main(){
	setlocale (LC_ALL, "portuguese_Brazil");
	
	int num, r;
	
	scanf ("%d", &num);
	
	r = fatorial(num);
	
	if(r == -1){
		printf("Entrada Inválida");
	} else{
		printf("%d", fatorial(num));
	}	
}

/*
	Função: calcular fatorial
	Entrada: n inteiro
	Saída: fatorial de n, se n > 0 ou -1, se n < 0
*/

int fatorial(int n){
	if (n == 0) /*return 1*/{
		return 1;
	}
	
	if(n > 0){
		return n * fatorial (n-1);
	}
	
	return -1;
}
