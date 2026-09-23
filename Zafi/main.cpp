#include <print>
#include <iostream>
#include "types.h"

void printBitboard(u64 board)
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

int main()
{
	//std::print("Mark szeretnel velem szexelni?");

    u64 babuk = 0xee412ef00f976157;

    printBitboard(babuk);
}
