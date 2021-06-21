#pragma once
#include <stdint.h>

enum PT_Flag{
    Present = 0, //MMU can access
    ReadWrite = 1, //mem can be read/written
    UserSuper = 2, //wheteher mem can be accessed by user or supervisor
    WriteThrough = 3,
    CacheDisabled = 4,
    Accessed = 5,        
    LargerPages = 7, //turns next page dir entry into a page of the size of all page entries that the page dir entry would have held, (512 * 4096)
    Custom0 = 9,
    Custom1 = 10,
    Custom3 = 11,
    NX = 63 //only if supported
};

struct PageDirectoryEntry{
    uint64_t Value;
    void SetFlag(PT_Flag flag, bool enabled);
    bool GetFlag(PT_Flag flag);
    void SetAddress(uint64_t address);
    uint64_t GetAddress();
};

struct PageTable{
    PageDirectoryEntry entries[512];
}__attribute__((aligned(0x1000)));