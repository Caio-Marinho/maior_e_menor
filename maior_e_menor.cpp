	#include <stdio.h>
	#include <locale.h>
	//pegar 10 numero do teclado e dizer qual o maior e qual o menor e utilizando meio de função	
    int maior(int N[]){
    	
    	int maior = N[0];
    	
    	for(int i=0; i<10; i++){
    		
    		if(N[i]>maior){
    			
    			maior=N[i];
			}
		}
		return maior;
	}
	
	int menor(int N[]){
		
		int menor = N[0];
		
		for(int i=0; i<10;i++){
			
			if(N[i]<menor){
				menor=N[i];
			}
		}
		return menor;
}
		
int main() {
    setlocale(LC_ALL, "portuguese");

    int N[10];
    int n, max, min;

    for (n = 0; n < 10; n++) {
        printf("%dº Vetor : ", n + 1);
        scanf("%d", &N[n]);
    }

    max = maior(N);
    min = menor(N);

    printf("O maior é: %d\n", max);
    printf("O menor é: %d\n", min);

    return 0;
}
