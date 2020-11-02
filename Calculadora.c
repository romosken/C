#include <stdlib.h>

int main(){

	int ope;
	float x,y,soma;

	puts("digite o numero da operacao (1=+;2=-;3=*;4=/)");
	scanf("%d",&ope);

	if(ope==1)
	{
		puts ("Digite dois valores quaisquer para soma:")	;
		scanf ("%f",&x);
		scanf ("%f",&y);
		soma=x+y;
		puts ("Resultado:");
		printf ("%2.2f\n",soma);
	}
	if(ope==2)
	{
		puts ("Digite dois valores quaisquer para subtracao:")	;
		scanf ("%f",&x);
		scanf ("%f",&y);
		soma=x-y;
		puts ("Resultado:");
		printf ("%2.2f\n",soma);
	}
	if(ope==3)
	{
		puts ("Digite dois valores quaisquer para multiplicacao:")	;
		scanf ("%f",&x);
		scanf ("%f",&y);
		soma=x*y;
		puts ("Resultado:");
		printf ("%2.2f\n",soma);
	}
	if(ope==4)
	{
		puts ("Digite dois valores quaisquer para divisao:")	;
		scanf ("%f",&x);
		scanf ("%f",&y);
		soma=x/y;
		puts ("Resultado:");
		printf ("%2.2f\n",soma);
	}
	system("pause");
}
