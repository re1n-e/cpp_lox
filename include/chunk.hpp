#ifndef chunk_h

#define chunk_h

#include "common.hpp"

typedef enum
{
    OP_RETURN,
} OpCode;

class Chunk
{
private:
    /* data */
public:
    Chunk(/* args */);
    void writeChunk(uint8_t);
    ~Chunk();
};

#endif