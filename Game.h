//
// Created by 褚翊喨 on 2023/5/14.
//

#ifndef TIC_TAC_TOE_GAME_H
#define TIC_TAC_TOE_GAME_H

#include <SFML/Graphics.hpp>
#include "Board.h"
#include "Piece.h"

class Game : public sf::Drawable{
public:
    Game();
    Board board = Board();
    void newPiece(int row, int col);
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
    void win();
    void restart();

private:
    Piece pieces[9];
    sf::RectangleShape square[3];
    bool notGameOver = 1;
    char bitBoard[9] = {'0', '0', '0', '0', '0', '0', '0', '0', '0'};
    bool turn = 0;
    short int n = 0;
};


#endif //TIC_TAC_TOE_GAME_H