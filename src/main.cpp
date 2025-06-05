#include <iostream>
#include "common.hpp"
#include "chunk.hpp"

// g++ -I./include src/*.cpp -o cpp_lox

int main()
{
    Chunk *chunk = new Chunk;
    chunk->writeChunk(OP_RETURN);
}