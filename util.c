#include "common.h"

unsigned long len(const byte *cc){
    byte *c = (byte*)cc;
    while(*c) c++;
    return (unsigned long)(c - cc);
}