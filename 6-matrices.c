#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int  acu=0,acu2=0,h=1,k=0,i,j,personas[20][6]={{0},{0}};
	float prom=0;
	
	
	
	
	for(i=0;i<20;i++){       
		
		for(j=0;j<6;j++)
		{
			
			printf("cantidad de habitantes en el departamento %d del piso %d:\n\t",j+1,i+1);	
			scanf("%d",&personas[i][j]);
		}
		printf("\n");
		
		
	}
	
	for(i=0;i<20;i++){
		
		
		for(j=0;j<6;j++)
		{
			
			
			prom=prom+personas[i][j];
			acu=acu+personas[i][j];
		}
		prom=prom/6;
		
		printf("el promedio en el piso numero %d es:%.2f\n",i+1,prom);
		
		
		prom=0;
		
		
	}
	
	printf("el total de habitantes es:%d\n",acu);
	
	
	
	
	return 0;
}


