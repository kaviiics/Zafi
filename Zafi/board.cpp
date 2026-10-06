#include "board.h"

Board::Board() {
    pieces.fill(Bitboard());
    colors.fill(Bitboard());
    occupied = Bitboard();
    sideToMove = White;
}

void Board::SetPiece(int pieceType, int square, Color color) {
    pieces[pieceType].SetSquare(square);
    colors[color].SetSquare(square);
    occupied.SetSquare(square);
}

void Board::Print() {
    std::println("  +-----------------+");

    for (int rank = 7; rank >= 0; --rank)
    {
        std::print("{} | ", rank + 1);

        for (int file = 0; file < 8; ++file)
        {
            int square = rank * 8 + file;
            bool isOccupied = occupied & (1ULL << square);
            char pieceChar = '.';

            if (isOccupied) {
                for (int pieceType = 0; pieceType < 6; ++pieceType) {
                    if (pieces[pieceType] & (1ULL << square)) {
                        pieceChar = "PNBRQK"[pieceType];
                        break;
                    }
                }
            }

            std::print("{} ", pieceChar);
        }

        std::println("|");
    }

    std::println("  +-----------------+");
    std::println("    A B C D E F G H");
}