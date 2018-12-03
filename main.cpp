#include "librairies.h"
#include "fenetre.h"

fenetre window;
sf::Event event;

int main(){
    while(window.GetCopieRenderWindow().isOpen()){
        window.GetCopieRenderWindow().clear(sf::Color(255,120,0,255));
        while (window.GetCopieRenderWindow().pollEvent(event)){
            if (event.type == sf::Event::KeyPressed){
                if(event.key.code == sf::Keyboard::Escape){
                    window.Fermer();
                }
            }
        }
        window.GetCopieRenderWindow().display();
    }
    return 0;
}
