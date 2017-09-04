/***************************************************************
****************************************************************
		PRÁCTICA 3 - 4   --   EL PINCHA GLOBOS (+ BOUNCING BALL)

	
	
			  Autor: Jose María Monreal González

****************************************************************
****************************************************************
*/



#include "JuegoPG.h"
#include <iostream>

using namespace std;

int main(int argc, char* args[]){

	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF); // Check Memory Leaks

	JuegoPG juego;
	
	juego.run();
	
	return 0;
}