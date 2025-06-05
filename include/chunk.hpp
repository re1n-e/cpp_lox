#ifndef chunk_h
#define chunk_h

#include "common.hpp"
#include <vector>  

typedef enum {
    OP_RETURN,
} OpCode;

class Chunk {
private:
    std::vector<uint8_t> code; 

public:
    Chunk();
    void writeChunk(uint8_t);
    ~Chunk();
};

#endif