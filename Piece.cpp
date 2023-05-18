//
// Created by 褚翊喨 on 2023/5/19.
//

#include "Piece.h"

Piece::Piece() = default;

Piece::Piece(bool shape) {
    sprite = sf::Sprite();

    if(shape) {
        sprite.setTexture(Texture::x);
    }
    else {
        sprite.setTexture(Texture::o);
    }

    sprite.setOrigin(sf::Vector2f(float(sprite.getTexture()->getSize().x / 2), float(sprite.getTexture()->getSize().y / 2)));
    sprite.setScale(sf::Vector2f(0.2f, 0.2f));
}

void Piece::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    if(display) {
        target.draw(sprite);
    }
}