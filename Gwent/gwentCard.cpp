#include <stdio.h> //Test git upload
#include <iostream>
#include "gwentCard.h"
#include "globalVariables.h"
#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>

//gwentCard(int x_input, int y_input) { cardx = x_input; cardy = y_input; }

int gwentCard::getx() { return cardx; }
int gwentCard::gety() { return cardy; }

void gwentCard::setx(int x_input) { cardx = x_input; }
void gwentCard::sety(int y_input) { cardy = y_input; }

void gwentCard::draw(ALLEGRO_BITMAP *card) { al_draw_scaled_bitmap(card, cardInsetx, cardInsety, cardWidth, cardHeight, cardx, cardy, cardWidth, cardHeight, 0); }