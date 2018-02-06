#include <windows.h>  
#include <stdlib.h>  
#include <string.h>  
#include <stdio.h>  
#include <conio.h>  
#include <process.h>  

void writeA();
void writeB();

CONST nextStep = 50000000;
int main(){
	//tao ra thread con
	int threadNr = 0;
	_beginthread(writeA, 0, &threadNr); 
	threadNr ++;
	_beginthread(writeB, 0, &threadNr);
	
	int i=0;
	while (1){
		while(i < nextStep){
			i++;	 
		}	
		printf(".");
		i = 0;
	}	

}

void writeA(){
	int i=0;
	while (1){
		while(i < nextStep){
			i++;	 
		}	
		printf("-");
		i = 0;
	}	
}


void writeB(){
	int i=0;	
	while (1){
		while(i < nextStep){
			i++;	 
		}	
		printf("$");
		i = 0;
	}	
}
