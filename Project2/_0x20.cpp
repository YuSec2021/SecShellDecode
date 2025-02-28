#include "_0x20.h"

void dpath() {
    char path[9] = { 0 };
    path[3] = -76;
    path[4] = -76;
    path[1] = 57;
    path[2] = -95;
    path[5] = -95;
    path[6] = -93;
    path[7] = -88;
    decode(path, 6, 249);
}

void d1() {
    int context[14] = { 0 };
    context[5] = 403508997;
    context[6] = 1459749637;
    *(short*)((char*)context + 1) = 17584;
    context[1] = 503841293;
    context[0] |= 32 << 24;
    context[2] = 1124599043;
    context[3] = 1125915661;
    context[4] = 7213;
    context[4] |= 28 << 16;
    context[7] = 134352160;
    context[8] = 134546206;
    context[9] = 33754947;
    context[10] = 402786584;
    context[11] = 33763139;
    context[12] = 403966232;
    context[13] = 87 | (69<<8) | (58<<16);
    decode((char*)context, 53, 220);
}

void d2() {
    char tmpName[0x23] = { 0 };
    tmpName[2] = -57;
    *(int*)&tmpName[8] = -1043540025;
    *(int*)&tmpName[12] = -678704952;
    tmpName[16] = -52;
    tmpName[19] = -56;
    tmpName[20] = -45;
    *(short*)&tmpName[21] = -14890;
    tmpName[23] = -44;
    tmpName[24] = -44;
    tmpName[26] = -42;
    tmpName[30] = -56;
    tmpName[31] = -44;
    tmpName[33] = -42;
    tmpName[3] = -53;
    *(short*)&tmpName[5] = -10357;
    tmpName[4] = -55;
    tmpName[7] = -63;
    *(short*)&tmpName[17] = -14143;
    tmpName[25] = -63;
    tmpName[27] = -117;
    tmpName[29] = -63;
    tmpName[28] = -20;
    tmpName[32] = -63;
    tmpName[1] = 87;
    decode(tmpName, 32, 243);
}

void _0x20() {
	printf("path: "); dpath();
    printf("context: "); d1();
    printf("tmpName: "); d2();
}