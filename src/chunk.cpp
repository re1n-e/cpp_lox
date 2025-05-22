#include "common.hpp"

class Chunk
{
    std::vector<uint8_t> code;

public:
    Chunk()
    {
        this->code = {0};
    }

    void writeChunk(uint8_t byte)
    {
        this->code.push_back(byte);
    }

    ~Chunk()
    {
    }
};