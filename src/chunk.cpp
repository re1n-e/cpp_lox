#include "chunk.hpp"
#include <vector>

Chunk::Chunk()
{
    this->code = {0};
}

void Chunk::writeChunk(uint8_t byte)
{
    this->code.push_back(byte);
}

Chunk::~Chunk()
{
    // Optional cleanup
}