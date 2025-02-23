#include "decode.h"

char* _decode(char* enc, int round, char key) {
    char tmp = enc[1] ^ key;
    char* res = (char*)malloc(round + 2);
    int idx = 0;
    while (idx < round) {
        res[idx] = enc[idx + 2] ^ tmp;
        idx++;
    }
    res[idx] = '\x00';
    return res;
}

void decode(char* enc, int round, char key) {
    char* res = _decode(enc, round, key);
    printf("%s\n", res);
}
