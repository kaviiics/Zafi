#pragma once
#include <array>
#include "bitboard.h"

class Board {
public:
    Board();

    std::array<Bitboard, 6> pieces;
    std::array<Bitboard, 2> colors;
    Bitboard occupied;
    bool sideToMove = White;

    void SetPiece(int pieceType, int square, Color color);

    void Print();

};