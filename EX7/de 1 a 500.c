#include <stdio.h>
#include <locale.h>


//Um programa que exibe o somat�rio dos valores pares existentes na faixa
//de 1 (inclusive) at� 500 (inclusive).


int main(int argc, char** argv)
{
	int i, total = 0;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Somat�rio de 1 at� 500: ");
	
	for (i = 1; i <= 500; i++) {
				if (i % 2 == 0) 
				{
					total = i + total;
				}
					
	}		
			printf("\n\nO resultado final do somat�rio � de: %i\n", total);
	return 0;
}