#include "stdio.h" 
#include "common.h"
#include "count.h"

static unsigned long len(const byte *cc){
    byte *c = (byte*)cc;
    while(*c) c++;
    return (unsigned long)(c - cc);
}

void build_string(unsigned int argc, byte **args, byte *buff){
    unsigned long buff_i = 0;
    for(int i = 1; i < argc; i++){
        byte *arg = args[i];
        for(int i = 0; i < len(arg); i++){
            buff[buff_i++] = arg[i];
        }
        buff[buff_i++] = ' ';
    }
}


int main(int argc, byte **argv){
    if(argc < 2){
        err("invalid args\n");
        return 1;
    }

    byte buff[128];
    build_string(argc, argv, buff);
    printf("built %s\n", buff);

    printf("words: %llu\n", count_words(buff));
    printf("characters: %llu\n", count_chars_graphical(buff));

}