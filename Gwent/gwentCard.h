#ifndef gwentCard_H
#define gwentCard_H
#include <stdio.h>
#include <iostream>
#include "globalVariables.h"
#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>

class gwentCard {


public:

	//gwentCard(int, int);

	int getx();
	int gety();

	void setx(int);
	void sety(int);

	void draw(ALLEGRO_BITMAP *);

private:
	int cardx;
	int cardy;
};
#endif