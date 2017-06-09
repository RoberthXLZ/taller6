#include <stdio.h>
int tam=10, num=0;
int vec[10]={3,4,5,6,0,2,3,4,2,5};
char dato[100];
	char *fecha,a,b;
	char c1[3],c2[3];
int *firstOcurrecnce(int arreglo[ ], int size, int elemento);
void desglosar(char *fecha);
void intercambiar(char *a ,char *b);
int main(){
	
	printf("-----------------Funcion Fecha-------------\n");
	printf("Ingrese fecha:");
	fgets(dato,100,stdin);
	dato[10]='\0';
	fecha=dato;
	desglosar(fecha);
	
	printf("-----------Funcion Ocurrencia-----------\n");
	printf("Ingresa el número a buscar: ");
	scanf("%d",&num);
	fflush( stdin );
	if(firstOcurrecnce(vec,10,num)!=NULL){
	printf("\nEl elemento es:  %d y su direccion es:%x",*firstOcurrecnce(vec,10,num),firstOcurrecnce(vec,10,num));
	}
	else
	{
		printf("No existe elemento");
	}
	printf("\n\n");
	printf("------------------Funcion intercambio--------------\n");
		printf("Ingrese elemento 1: ");
		fgets(c1,3,stdin);
		c1[2]='\0';
		printf("Ingrese elemento 2: ");
		fflush( stdin );
		fgets(c2,3,stdin);
		c2[2]='\0';
		fflush( stdin );
		a=*c1;
		b=*c2;
		intercambiar(&a , &b);
return 0;
}


int *firstOcurrecnce(int arreglo[ ], int size, int elemento){
int *ptr;
ptr=arreglo;
int i=0, cont=0;
while(i<size){
	if (elemento==arreglo[i]){	
		cont=i;
		i=size;
		return &arreglo[cont];
	}
	i++;
	}
	if(i==size){
	return NULL;
	}
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
 printf("\n");
	
}

void intercambiar(char *a,char *b)
 {
    char auxiliar;
       auxiliar=*a;
        *a=*b;
        *b=auxiliar;
 printf("El valor del elemento 1 es: %c",*a);
 printf("\n");
 printf("El valor del elemento 2 es: %c",*b);
 
 }
