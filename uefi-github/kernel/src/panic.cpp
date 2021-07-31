#include "panic.h"
#include "BasicRenderer.h"


void Panic(const char *panicMessage){
    GlobalRenderer->Clear(0xd825db);
    GlobalRenderer->CursorPosition = {0,0};

    GlobalRenderer->Colour = 0;
    GlobalRenderer->Print("Kernel Panic!!");

    GlobalRenderer->Next();
    GlobalRenderer->Next();

    GlobalRenderer->Print(panicMessage);

}