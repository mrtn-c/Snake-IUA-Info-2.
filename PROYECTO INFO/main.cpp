#include <SFML/graphics.hpp>
#include <iostream>

#include "Snake.h"



using namespace sf;

int main() {
    RenderWindow w(VideoMode(800, 600), "Snake");
    Texture tCabeza, tCola, tCuerpo;

    tCabeza.loadFromFile("cabeza.png");
    tCola.loadFromFile("cola.png");
    tCuerpo.loadFromFile("cuerpo.png");



    return 0;
}