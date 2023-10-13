#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int acu=0,k=0,cochetotal[12]={0},acu1=0,acu2=0,acu3=0,coche,linea,reca,posi[100][100],i,j;
	
	
	
	
		
		while(coche>=1){
			
			
			printf("ingrese numero de coche\n");
			scanf("%i",&coche);
			if(coche>12 ){
				printf("el numero de coche es invalido\n");
				printf("ingrese otro numero de coche\n");
				scanf("%i",&coche);	
				
			}
			
			
			printf("ingrese numero de linea\n");
			scanf("%i",&linea);
			
			if(linea>3){
				printf("el numero de linea es invalido\n");
				printf("ingrese otro numero de linea\n");
				scanf("%i",&linea);	
				
			}
			
			printf("ingrese la recaudacion\n");
			scanf("%i",&reca);
			
			
			
			posi[linea][coche]=reca;
			
			
			
			for(k=0;k<12;k++){
				
				if(linea-1==k){
					cochetotal[k]=cochetotal[k]+reca;
				}	
			}
			
			
		}

	
	
	
	for(i=1;i<=3;i++){
		printf("\n");	
		for(j=1;j<=12;j++){
			
			printf("%i\t",posi[i][j]);	
			
		acu1=acu1+posi[i][j];	
		switch(i){
		case 1:acu=acu+posi[i][j];break;	
		case 2:acu2=acu2+posi[i][j];break;	
		case 3:acu3=acu3+posi[i][j];break;		
		}
		
		
		}
	
	}
	printf("\n\n el total de la linea 1 es:%d\n",acu);
	printf("el total de la linea 2 es: %d\n",acu2);
	printf("el total de la linea 3 es: %d\n",acu3);
	printf("el total es:%d\n",acu1);
	for(k=0;k<12;k++){		
	printf("lo recaudado en el coche numero %d es:%d\n",k,cochetotal[k]);	
	
	}
	return 0;
}

