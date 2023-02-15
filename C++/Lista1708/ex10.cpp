#include <stdio.h>

//Aluno: Leonardo Gollub

int main(){
	int voto, Jose=0, Maria=0, Chico=0,
	votonulo=0, votobranco=0, contador;
	
	for(contador=0;contador<5;contador++){
		printf("\nELEICOES PARA PREFEITO\n\n");
		
		printf("Digite [11] para Jose;\n");
		printf("Digite [22] para Maria;\n");
		printf("Digite [33] para Chico;\n");
		printf("Digite [0] para Nulo;\n");
		printf("Digite [1] para Branco;\n");
		
		printf("Informe seu voto: ");
		scanf("%d", &voto);
		
		switch(voto){
			case 11:
				Jose=Jose+1;
				break;
			case 22:
				Maria=Maria+1;
				break;
			case 33:
				Chico=Chico+1;
				break;
			case 0:
				votonulo=votonulo+1;
				break;
			case 1:
			 	votobranco=votobranco+1;
				 break;			
		}
		printf("\n\n***RESULTADO DOS VOTOS***\n\n");
		printf("\nJose teve %d votos",Jose);
		printf("\nMaria teve %d votos",Maria);
		printf("\nChico teve %d votos",Chico);
		printf("\nNulo teve %d votos",votonulo);
		printf("\nBranco teve %d votos",votobranco);
		
		printf("\n\n***RESULTADO DO NOVO PREFEITO***\n\n");
			
			if((Jose>Maria)&&(Jose>Chico)){
				printf("\n Jose � o novo Prefeito!!!\n");
			}else if((Maria>Jose)&&(Maria>Chico)){
				printf("\nMaria � a nova Prefeita!!!\n");
			}else if((Chico>Jose)&&(Chico>Maria)){
				printf("\nChico � o novo Prefeiro!!!\n");
			}
		
	}
	
	
	
	
	
	
	
}
