#include "_0x7.h"


void d290() {
	char v290[22] = { 0 };
    v290[2] = -114;
    v290[3] = -59;
    v290[7] = -114;
    v290[5] = -43;
    v290[1] = 1;
    v290[8] = -59;
    v290[4] = -64;
    v290[6] = -64;
    v290[9] = -64;
    v290[10] = -43;
    v290[11] = -64;
    v290[12] = -114;
    v290[13] = -124;
    v290[15] = -114;
    v290[14] = -46;
    v290[16] = -113;
    v290[18] = -64;
    v290[17] = -62;
    v290[19] = -62;
    v290[20] = -55;
    v290[21] = -60;
	decode(v290, 20, 160);
}

void d288() {
	int v288[2] = { 0 };
    v288[1] = 504567834;
    v288[0] = 0x1855FA00;
	decode((char*)v288, 6, 129);
}

void dptr_0() {
	char ptr[15] = { 0 };
    ptr[4] = 20;
    ptr[13] = 22;
    ptr[8] = 67;
    *(short*)&ptr[5] = 1289;
    ptr[1] = -72;
    ptr[9] = 2;
    *(short*)&ptr[2] = 5705;
    ptr[7] = 73;
    ptr[10] = 73;
    ptr[11] = 11;
    ptr[12] = 7;
    ptr[14] = 21;

	decode(ptr, 13, 222);
}

void d289() {
	int v289[2] = { 0 };
    v289[1] = 151260941;
    *(short*)((char*)v289 + 1) = 17063;
    v289[0] |= 15 << 24;

	decode((char*)v289, 6, 203);
}

void dbuf() {
    int buf[] = { 0xE2B40B00 };
	decode((char*)buf, 2, 154);
}

void dtmp4() {
	int tmp[9] = { 0 };
    tmp[5] = 0x74B010C;
    tmp[8] = 274;
    tmp[6] = 0x17170508;
    *(short*)((char*)tmp + 1) = 19417;
    tmp[2] = 0x51005;
    tmp[1] = 1258622981;
    tmp[3] = 1259815243;
    tmp[4] = 117770058;
    tmp[7] = 0x4A1701;
	decode((char*)tmp, 32, 189);
}

void dtmp5() {
	int cache[5] = { 0 };
    cache[0] = 0x1D509B;
    cache[1] = 454434079;
    cache[3] = 219876621;
    cache[4] = 0x1B081A50;
    cache[2] = 521280849;
	decode((char*)cache, 18, 229);
}


void dtmp6() {
	char tmpName[20] = { 0 };
    tmpName[2] = -7;
    tmpName[3] = -28;
    *(short*)&tmpName[5] = -1541;
    tmpName[7] = -28;
    tmpName[8] = -17;
    *(short*)&tmpName[9] = -5890;
    tmpName[1] = 53;
    tmpName[11] = -1;
    tmpName[4] = -91;
    *(int*)&tmpName[12] = -17045339;
    *(int*)&tmpName[16] = -487986523;
	decode(tmpName, 18, 190);
}

void _0x7() {
    printf("v290: "); d290();
    printf("v288: ");  d288();
    printf("ptr: ");  dptr_0();
    printf("v289: ");  d289();
	printf("buf: ");  dbuf();
	printf("tmp: ");  dtmp4();
	printf("cache: ");  dtmp5();
	printf("tmpName: ");  dtmp6();

}