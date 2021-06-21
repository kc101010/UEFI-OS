#pragma once

#include <stdint.h>

class PageMapIndexer{
    public:
        PageMapIndexer(uint64_t virtualAddress);
        uint64_t PDP_i; //page directory pointer index
        uint64_t PD_i; //page directory index
        uint64_t PT_i; //page table index
        uint64_t P_i; //page index



};