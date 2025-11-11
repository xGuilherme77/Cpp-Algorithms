/*
	Name: multiMatriz.cpp
	Author: Guilherme A.
	Date: 11/11/25 09:40
	Description: programa que multiplica matrizes
*/

#include <stdio.h>
#include <stdlib.h>

main(){

	int linhA, colunA, linhaB, colunaB;
	
	puts("Programa para multiplicacao de matrizes");
	
	//Matriz A		
	puts("Numero de linhas da matriz A: ");
	scanf("%d", &linhA);
	puts("Numero de coluna da matriz A: ");
	scanf("%d", &colunA);
	
	//Matriz B
	puts("Numero de linhas da matriz B: ");
	scanf("%d", &linhaB);
	puts("Numero de coluna da matriz B: ");
	scanf("%d", &colunaB);
	
	if(colunA != linhaB){
		puts("Nao e possivel");
		exit(0);
	}	
	int matA[linhA][colunA];
	int matB[linhaB][colunaB];
	
	puts("Matriz A");
	for(int i = 0; i < linhA; i++){
		for(int j = 0; j < colunA; j++){
			printf("matriz[%d][%d]", i,j);	
			scanf("%d", &matA[i][j]);
		}
	}
	puts(" ");
	puts("Matriz B");
	for(int i = 0; i < linhaB; i++){
		for(int j = 0; j < colunaB; j++){
			printf("matriz[%d][%d]", i,j);	
			scanf("%d", &matB[i][j]);	
		}
	}
	puts(" ");
	puts("\t==========// Matriz carregada //==========");
	
	for(int i = 0; i < linhA; i++){
		for(int j = 0; j < colunA; j++){
			printf("\t[%d]", matA[i][j]);	
		}
		printf("\n");
	}
	puts("");
	for(int i = 0; i < linhaB; i++){
		for(int j = 0; j < colunaB; j++){
			printf("\t[%d]", matB[i][j]);	
		}
		printf("\n");
	}	
	
	puts("\t==========// Matriz multiplicada //==========");
	
	int matR[linhA][colunaB];
	
	for(int i = 0; i < linhA; i++){//percorre as linhas da matriz A
		for(int j = 0; j < colunaB; j++){//percorre as colunas da matriz B
			 matR[i][j] = 0;
			 for(int k = 0; k < colunA; k++){
			 	matR[i][j] += matA[i][k] * matB[k][j];
			 }	
			 
		}
	
	}
	
	for(int i = 0; i < linhA; i++){
		for(int j = 0; j < colunaB; j++){
			printf("\t[%d]", matR[i][j]);	
		}
		printf("\n");
	}
}
