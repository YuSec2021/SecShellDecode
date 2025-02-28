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

void dtmp7() {
    char format[8] = { 0 };
    format[0] = 0;
    format[7] = 0;
    format[1] = 50;
    format[3] = -64;
    format[6] = -64;
    format[2] = -106;
    format[4] = -100;
    format[5] = -106;
    decode(format, 5, 129);
}

void dv3() {
    char v3[0x23] = { 0 };
    v3[2] = 82;
    v3[5] = 9;
    v3[7] = 82;
    v3[10] = 9;
    v3[12] = 82;
    v3[13] = 88;
    v3[15] = 82;
    v3[16] = 83;
    v3[22] = 82;
    v3[30] = 83;
    v3[24] = 17;
    v3[17] = 30;
    v3[19] = 30;
    v3[23] = 30;
    v3[1] = -39;
    v3[3] = 25;
    v3[4] = 28;
    v3[6] = 28;
    v3[8] = 25;
    v3[9] = 28;
    v3[11] = 28;
    v3[14] = 14;
    v3[18] = 28;
    v3[25] = 28;
    v3[26] = 14;
    v3[32] = 11;
    v3[27] = 14;
    v3[29] = 14;
    v3[31] = 25;
    v3[20] = 21;
    v3[21] = 24;
    v3[28] = 24;
    v3[33] = 24;
    decode(v3, 32, 164);
}

void dv2() {
    char v2[0x15] = { 0 };
    v2[2] = -80;
    v2[3] = -3;
    v2[4] = -1;
    v2[5] = -3;
    v2[9] = -3;
    v2[11] = -1;
    v2[10] = -14;
    v2[16] = -80;
    v2[12] = -19;
    v2[13] = -19;
    v2[15] = -19;
    v2[17] = -6;
    v2[18] = -24;
    v2[1] = 105;
    v2[8] = -79;
    v2[6] = -10;
    v2[7] = -5;
    v2[14] = -5;
    v2[19] = -5;
    decode(v2, 18, 247);
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
    printf("format: "); dtmp7();
    printf("v2: "); dv2();
    printf("v3: "); dv3();

}