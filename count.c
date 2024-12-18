#include "common.h"
#include "util.h"


unsigned long long count_words(const byte *buff){
    byte putback = 0;
    unsigned long count = 0;
    for(int i = 0; i < len(buff); i++){
        byte c = buff[i];
        if(c == ' ' && putback != ' ') count++;
        putback = c;
    }
    if(putback != ' ') count++;
    return count;
}

unsigned long long count_chars(const byte *buff){
    return len(buff);
}

unsigned long long count_chars_printable(const byte *buff){
    unsigned long long count = 0;
    for(int i = 0; i < len(buff); i++) count += 31 < buff[i] && buff[i] < 126 ? 1 : 0;
    return count;
}

unsigned long long count_chars_graphical(const byte *buff){
    unsigned long long count = 0;
    for(int i = 0; i < len(buff); i++)
        count += 32 < buff[i] && buff[i] < 126 ? 1 : 0;
    return count;
}

unsigned long long count_chars_no_space(const byte *buff){
    unsigned long long count = 0;
    for(int i = 0; i < len(buff); i++){
        count += buff[i] == ' ' ? 0 : 1;
    }
    return count;
}