#pragma once
#include <print>
#include "types.h"

class Bitboard {
private:
	u64 board;

public:
	Bitboard() {
		board = 0ULL;
	}
    
    void Print()
    {
        std::println("  +-----------------+");

        for (int rank = 7; rank >= 0; --rank)
        {
            std::print("{} | ", rank + 1);

            for (int file = 0; file < 8; ++file)
            {
                int square = rank * 8 + file;

                if (board & (1ULL << square))
                    std::print("1 ");
                else
                    std::print(". ");
            }

            std::println("|");
        }

        std::println("  +-----------------+");
        std::println("    A B C D E F G H");
    }
	
    operator u64() {
		return board;
	}

};