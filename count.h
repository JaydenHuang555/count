#ifndef COUNT_H
#define COUNT_H
#include "common.h"


extern unsigned long long count_words(const byte*);

extern unsigned long long count_chars_printable(const byte*);

extern unsigned long long count_chars_graphical(const byte *);

#endif 