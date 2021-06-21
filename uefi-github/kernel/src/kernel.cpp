#include "kernelUtil.h"

extern "C" void _start(BootInfo* bootInfo){
    BasicRenderer newRenderer = BasicRenderer(bootInfo->framebuffer, bootInfo->psf1_Font);

    //newRenderer.Print("Attempting to Init Kernel");

    KernelInfo kernelInfo = InitializeKernel(bootInfo);
    PageTableManager* pageTableManager = kernelInfo.pageTableManager;
   
    newRenderer.Print("Kernel Initialized Successfully");
   
    while(true);
}