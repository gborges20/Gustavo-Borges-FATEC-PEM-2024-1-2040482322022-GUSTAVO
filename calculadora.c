#include <stdio.h>

float n1;
float n2;
float resultado;
//operacoes aritmeticas
 float mult(float n1, float n2)
{
	resultado = n1*n2;
	return resultado;
}

float add(float n1, float n2)
{
	resultado = n1+n2;
	return resultado;
}

float div(float n1, float n2)
{
	resultado = n1/n2;
	return resultado;
}

float sub(float n1, float n2)
{
	resultado = n1-n2;
	return resultado;
}
//laco de repeticao do sistema de entrada e saida
int main(void) 
{
	int op=1;

	do
	{
		int operacoes [5] = {0,1,2,3,4};
		
		printf("Insira um dos numeros abaixo para escolher:\n");
		printf("1 - adicao\n");
		printf("2 - subtracao\n");
		printf("3 - multiplicacao\n");
		printf("4 - divisao\n\n");
		printf("0 - sair\n\n");
		printf("Qual operação deseja executar:\n");
		scanf("%i",&op);
	
			switch (op)
		{
			case 0:
			return 0;
			break;
		
			case 1:
			printf("Insira um numero:\n");
			scanf("%f",&n1);
			printf("Insira outro numero:\n");
			scanf("%f",&n2);
		
			resultado = add(n1,n2);
		
			printf("Resultado = %f\n\n\n", resultado);
			break;
			
			case 2:
			printf("Insira um num:\n");
			scanf("%f",&n1);
			printf("Insira outro num:\n");
			scanf("%f",&n2);

			resultado = sub(n1,n2);

			printf("Resultado = %f\n\n\n", resultado);
			break;
			
			case 3:
			printf("Insira um num:\n");
			scanf("%f",&n1);
			printf("Insira outro num:\n");
			scanf("%f",&n2);

			resultado = mult(n1,n2);

			printf("Resultado = %f\n\n\n", resultado);
			break;
			
			case 4:
			printf("Insira um num:\n");
			scanf("%f",&n1);
			printf("Insira outro num:\n");
			scanf("%f",&n2);

			resultado = div(n1,n2);

			printf("Resultado = %f\n\n\n", resultado);
			break;
    } 
    
  }while(op>0 && op<6);
        
  
	
	
	return 0;
}


