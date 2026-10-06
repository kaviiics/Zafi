#include <print>
#include <iostream>
#include "types.h"
#include "bitboard.h"
#include "board.h"

int main()
{
    Board board;
    
    board.SetPiece(Pawn, a2, White);
    board.Print();
}
