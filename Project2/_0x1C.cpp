#include "_0x1C.h"

void decode_v2() {
    char v2[6] = { 0 };
    v2[2] = 0x1A;
    v2[1] = 0xEC;
    v2[3] = 0x1A;
    v2[4] = 0x16;
    v2[5] = 7;
    decode(v2, 4, 0x9B);
}

void decode_v3() {
    char v3[8] = { 0 };
    v3[2] = 0xCB;
    v3[5] = 0xCB;
    v3[1] = 0x6D;
    v3[4] = 0xC8;
    v3[3] = 0xD3;
    v3[6] = 0xC7;
    v3[7] = 0xD6;
    decode(v3, 5, 0xCB);
}

void decode_v4() {
    char v4[10] = { 0 };
    v4[4] = 0xC9;
    v4[1] = 0x3A;
    v4[2] = 0xC7;
    v4[3] = 0xC2;
    v4[5] = 0xC8;
    v4[6] = 0x85;
    v4[7] = 0xD8;
    v4[8] = 0xC4;
    decode(v4, 7, 0x91);
}

void decode_v5() {
    char v5[12] = { 0 };
    v5[1] = 0xC9;
    v5[2] = 0x12;
    v5[6] = 0xB;
    v5[9] = 0xB;
    v5[3] = 0xF;
    v5[7] = 0x1A;
    v5[4] = 0xD;
    v5[5] = 0x10;
    v5[8] = 0x1C;
    decode(v5, 8, 0xB6);
}

void decode_v307() {
    int v307[9] = { 0 };
    v307[2] = 0xEBE6FDED;
    v307[3] = 0xFDA1E2E2;
    v307[4] = 0xE2E2EBE6;
    v307[5] = 0xFEEFFCF9;
    v307[6] = 0xA1FCEBFE;
    v307[1] = 0xEBFDA1E3;
    v307[7] = 0xFEE2EBC6;
    v307[0] = 0xE1ED01 << 8;
    v307[8] = 0xFCEB;
    decode((char*)v307, 32, 0x8F);
}

void decode_name() {
    char* name = (char*)malloc(0xA);
    strcpy(name + 2, "'<096:2");
    name[1] = 0xE0;
    decode(name, 7, 0x97);
}

void decode_file() {
    char* file = (char*)malloc(0x15);
    *(int*)&file[12] = 0xDED8FF83;
    file[8] = 0xC0;
    *(int*)&file[16] = 0x97CBC2C5;
    file[3] = 0xC6;
    *(int*)&file[4] = 0x83CDDACD;
    *(short*)&file[9] = 0xC2CD;
    file[1] = 0x32;
    file[11] = 0xCB;
    file[2] = 0xE0;
    decode(file, 18, 0x9E);
}

void _0x1C() {
    printf("case 0x1C\n");
    decode_v2();
    decode_v3();
    decode_v4();
    decode_v5();
    decode_v307();
    decode_name();
    decode_file();
}