#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int sn=0,i,j,nota[2][3]={{0},{0}};
	float prom=0;
	
	
	
	
	for(i=0;i<2;i++)
	{
		printf("El legajo del alumno es:%d\n",i+1);
		for(j=0;j<3;j++)
		{    
			
			printf("escriba la nota del %d trimestre\n",j+1);	
			scanf("%d",&nota[i][j]);
			
		}
	}
	
	printf("desea hacer cambios? (1=si, 2=no)\n",j+1);	
	scanf("%d",&sn);
	
	if(sn==1)
	{
		while(sn!=2){
			
			printf("escriba el legajo del alumno\n");	
			scanf("%d",&i);
			printf("escriba el trimestre a correjir\n");	
			scanf("%d",&j);
			printf("escriba la nueva nota\n");	
			scanf("%d",&nota[i-1][j-1])	;
			
			printf("desea hacer cambios? (1=si, 2=no)\n",j+1);	
			scanf("%d",&sn);
		}
		
	}
	
	printf("N° DE LEGAJO\t 1°TRIMESTRE\t 2°TRIMESTRE\t 3° TRIMESTRE\t PROMEDIO\t\n");
	for(i=0;i<2;i++)
	{
		printf("%d",i+1);
		for(j=0;j<3;j++)
		{    
			
			printf("\t           %d",nota[i][j]);	
			
			prom=prom+nota[i][j];
		}
		
		prom=prom/3;
		printf("\t          %.2f",prom);
		printf("\n");
		prom=0;
		
	}
	
	
	
	
	return 0;
}



