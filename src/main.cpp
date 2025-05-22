#include <iostream>
#include <common.hpp>
#include <chunk.hpp>

int main()
{
    Chunk *chunk = new Chunk;
    chunk->writeChunk(OP_RETURN);
}