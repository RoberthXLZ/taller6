#include <stdio.h>


void desglosar(char *fecha);
void intercambiar(char ** a,char** b);
int main(int argc, char *argv[]) {
	
	char dato[100];
	char *fecha,*a,*b;
	char c1[100],c2[100];
	printf("Ingrese fecha:");
	gets(dato);
	fecha=dato;
	desglosar(fecha);
	printf("\nIngrese elemento 1: ");
	gets(c1);
	printf("Ingrese elemento 2: ");
	gets(c2);
	a=c1;
	b=c2;
	printf("%s",a);
	intercambiar(&a,&b);
	return 0;
}




void desglosar(char *fecha){
	int i=0,c=0;
	char dia,mes,anio;
		printf("ANIO: ");
		
	while(i<4){
		printf("%c",fecha[i]);
		i++;
	}
	i++;
	printf("\n MES: ");
	while(i>4&&i<7){
		printf("%c",fecha[i]);
		i++;
	}
	i++;
	printf("\n DIA: ");
	
	while(i>=8&i<=9){
		printf("%c",fecha[i]);
		i++;
	}

	
	
}

	void intercambiar(char** a,char**b)
{
   char *auxiliar;
      *auxiliar=a;
       a=b;
       b=*auxiliar;
printf("El valor del elemento 1 es: %s",a);
printf("El valor del elemento 2 es: %s",b);

}




