#pragma once
#include "EstadoJuego.h"
#include "JuegoPG.h"

class EstadoPG : public EstadoJuego
{
public:
	EstadoPG(JuegoPG* ptr);
	virtual ~EstadoPG();

	virtual void draw();
	virtual void onClick();
	virtual void update();
	GAME_STATES getCurrentState() { return currentState; };

protected:
	JuegoPG* obJuego;
	SDL_Renderer* pRender;
	TexturasSDL* textura;
	std::vector<ObjetoJuego*> arrayObjetos;
	GAME_STATES currentState;
};

