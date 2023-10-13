#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int acu=0,menor=100,mult=0,mat[2][3],i,j;
	
	
	
	for(i=0;i<2;i++){
		
		for(j=0;j<3;j++){
			
			
			printf("ingrese la cadena\n");
			scanf("%i",&mat[i][j]);	
			acu=acu+mat[i][j];
			
			
		if(mat[i][j]<menor){
			menor=mat[i][j];		
		   }	
		
			
		}
			
	}
	printf("\n el total es:%d y el menor valor ingresado es:%d",acu,menor);
	
	
	for(i=0;i<2;i++){
		printf("\n");	
		for(j=0;j<3;j++){
			
			if(j==2 && i==0){
				
				mult=mat[i][j]*4*3;
				printf("%i\t",mult);		
				
			}else{
				if(i==0){
					
					mult=mat[i][j]*4;
					printf("%i\t",mult);	
				}else{
					if(j==2){
						
						mult=mat[i][j]*3;	
						printf("%i\t",mult);			
					}else{
						
						printf("%i\t",mat[i][j]);		
						
					}	
				}	
				
			}
			
			
		}
	}
	
	
	return 0;
}

