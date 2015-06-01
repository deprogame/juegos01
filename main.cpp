#include <SFML/Graphics.hpp>
#include <iostream>
/* Paso 1 Crear una ventana de dibujo
int main()
{
    sf::RenderWindow ventana(sf::VideoMode(800,600),"Un VG en 30 Min");

    while (ventana.isOpen())
    {
        sf::Event event;

        while (ventana.pollEvent(event))
        {
           if(event.type == sf::Event::Closed)
                ventana.close();
        }
        ventana.clear();
        ventana.display();
    }
}
