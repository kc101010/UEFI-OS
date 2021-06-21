#include "PageMapIndexer.h"

PageMapIndexer::PageMapIndexer(uint64_t virtualAddress){
    //page index
    virtualAddress >>= 12;                     //all addresses in each page are 12 bit aligned (by 4096 bytes)
    P_i = virtualAddress & 0x1ff;              //use and by bitmask to get part of address that actuall corresponds to index
    
    //page table index
    virtualAddress >>= 9;
    PT_i = virtualAddress & 0x1ff;

    //page directory index
    virtualAddress >>= 9;
    PD_i = virtualAddress & 0x1ff;

    //page directory pointer index
    virtualAddress >>= 9;
    PDP_i = virtualAddress & 0x1ff;
};