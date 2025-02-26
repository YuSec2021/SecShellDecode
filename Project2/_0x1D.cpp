#include "_0x1D.h"

void decode_v290() {
	char v290[28] = { 0 };
	v290[10] = -64;
	v290[11] = -47;
	v290[12] = -47;
	v290[1] = 1;
	v290[2] = -64;
	v290[3] = -49;
	v290[4] = -59;
	v290[5] = -45;
	v290[6] = -50;
	v290[7] = -56;
	v290[8] = -59;
	v290[9] = -114;
	v290[13] = -114;
	v290[14] = -32;
	v290[15] = -62;
	v290[16] = -43;
	v290[17] = -56;
	v290[18] = -41;
	v290[19] = -56;
	v290[20] = -43;
	v290[21] = -40;
	v290[22] = -11;
	v290[23] = -55;
	v290[24] = -45;
	v290[25] = -60;
	v290[26] = -64;
	v290[27] = -59;
	decode(v290, 26, 160);
}

void decode_v288() {
	int v288[6] = { 0 };
	v288[1] = -790901556;
	v288[2] = -891420726;
	v288[3] = -891828009;
	v288[4] = -858330425;
	v288[5] = 0xDADFDB;
	v288[0] = 0xCBDD2400;
	decode((char*)v288, 21, 154);
}

void decode_v303() {
	int v303[8] = { 0 };
	v303[2] = -404034319;
	v303[3] = -202120532;
	v303[4] = -136265044;
	v303[5] = -135596566;
	v303[6] = -236201990;
	v303[7] = -1192762650;
	v303[1] = 0xE7EDE2CF;
	v303[0] = 0xAAAB48 << 8;
	decode((char*)v303, 30, 203);

}

void decode_v284() {
	int v284[5] = { 0 };
	v284[1] = 218574090;
	v284[2] = 1024662282;
	v284[3] = 453644305;
	v284[4] = 2566;
	v284[0] = 0x1B19B2 << 8;
	decode((char*)v284, 16, 204);
}

void decode_ptr() {
	char* ptr = (char*)malloc(29);
	ptr[9] = -36;
	ptr[12] = -100;
	ptr[16] = -100;
	ptr[18] = -36;
	ptr[17] = -16;
	ptr[19] = -35;
	ptr[20] = -57;
	ptr[21] = -42;
	ptr[22] = -53;
	ptr[23] = -57;
	ptr[24] = -6;
	ptr[25] = -34;
	*(short*)&ptr[1] = -25839;
	ptr[10] = 218;
	ptr[3] = -102;
	*(int*)&ptr[4] = -673328385;
	ptr[8] = -63;
	ptr[11] = -41;
	ptr[13] = -46;
	ptr[14] = -61;
	ptr[15] = -61;
	ptr[26] = -61;
	ptr[27] = -33;
	ptr[28] = -120;
	decode(ptr, 27, 162);
}

void decode_v289() {
	int v289[7] = { 0 };
	v289[5] = 386543123;
	*(short*)((char*)v289 + 1) = 1752;
	v289[0] |= 9 << 24;
	v289[1] = 235410691;
	v289[2] = 386287619;
	v289[3] = 136595479;
	v289[4] = 520229641;
	v289[6] = 11;
	decode((char*)v289, 23, 191);
}

void decode_v285() {
	int v285[5] = { 0 };
	v285[1] = -437790990;
	v285[2] = -471734291;
	v285[3] = -404166709;
	v285[0] = 0xE3E129 << 8;
	v285[4] = 0xF4E3E1;
	decode((char*)v285, 17, 175);
}

void decode_file1() {
	char file[39] = { 0 };
	*(int*)&file[8] = -67702547;
	file[7] = -5;
	file[12] = -80;
	*(short*)&file[13] = -3844;
	file[15] = -15;
	file[26] = -4;
	*(int*)&file[16] = -336463125;
	file[27] = -12;
	file[29] = -8;
	file[30] = -6;
	file[31] = -46;
	*(int*)&file[20] = -1326256208;
	file[33] = -15;
	file[24] = -49;
	file[1] = 2;
	file[2] = -73;
	file[3] = -74;
	file[4] = -45;
	*(short*)&file[5] = -3586;
	file[25] = -2;
	file[28] = -2;
	file[32] = -2;
	file[34] = -2;
	file[35] = -8;
	file[36] = -6;
	file[37] = -19;
	file[38] = -92;
	decode(file, 37, 157);
}

void decode_282() {
	int v282[4] = { 0 };
	*(short*)((char*)v282 + 1) = -10392;
	v282[0] |= -43 << 24;
	v282[1] = -741220156;
	v282[2] = -707276325;
	v282[3] = -539566343;
	decode((char*)v282, 14, 216);
}

void decode_307() {
	int v307[14] = { 0 };
	v307[2] = -842870900;
	v307[0] = 0xEF8B3B << 8;
	v307[1] = -1026178359;
	v307[3] = -672101180;
	v307[4] = -993146159;
	v307[5] = -276108648;
	v307[6] = -775434814;
	v307[7] = -1933063476;
	v307[8] = -674378560;
	v307[9] = -1932014138;
	v307[13] = -13115; 
	v307[10] = -208875821;
	v307[11] = -1027030846;
	v307[12] = -840251708;
	v307[13] = 0x98 << 16;
	decode((char*)v307, 53, 152);
}

void decode_283() {
	int v283[5] = { 0 };
	v283[1] = -34082066;
	v283[0] = 52 << 8;
	v283[0] |= -4353 << 16 ;
	v283[2] = -235410689;
	v283[3] = -118433808;
	v283[4] = -15;
	decode((char*)v283, 15, 170);
}

void decode_name1() {
	char name[38] = { 0 };
	name[1] = 23;
	name[2] = -48;
	name[4] = -14;
	name[11] = -1;
	name[5] = -8;
	name[12] = -13;
	name[7] = -13;
	name[13] = -14;
	name[8] = -11;
	name[14] = -24;
	name[9] = -8;
	name[15] = -7;
	name[10] = -77;
	name[16] = -14;
	name[18] = -77;
	name[17] = -24;
	name[21] = -77;
	name[19] = -20;
	name[22] = -35;
	name[20] = -15;
	name[23] = -20;
	name[24] = -20;
	name[25] = -16;
	name[26] = -11;
	name[27] = -1;
	name[3] = 0x19;
	name[6] = -18;
	name[28] = 0x19;
	name[29] = -24;
	name[30] = -11;
	name[31] = -13;
	name[32] = -14;
	name[33] = -43;
	name[34] = -14;
	name[35] = -6;
	name[36] = -13;
	name[37] = -89;
	decode(name, 36, 139);
}

void decode_281() {
	int v281[3] = { 0 };
	*(short*)(	(char*)v281 + 1) = 432;
	v281[0] |= 29 << 24;
	v281[1] = 7;
	v281[1] |= 5905 << 16;
	v281[2] = 6966;
	decode((char*)v281, 9, 194);
}

void decode_286() {
	int v286[5] = { 0 };
	*(short*)((char*)v286 + 1) = -12786;
	v286[2] = -437459986;
	v286[0] |= -24 << 24;
	v286[1] = -1377569565;
	v286[3] = -252259923;
	v286[4] = -1176113941;
	decode((char*)v286, 18, 140);
}

void decode_280() {
	int v280[3] = { 0 };
	*(short*)((char*)v280 + 1) = 6309;
	v280[0] |= 29 << 24;
	v280[1] = 355998984;
	v280[2] = 14;
	decode((char*)v280, 7, 217);
}

void decode_287() {
	int v287[5] = { 0 };
	*(short*)((char*)v287 + 1) = -4293;
	v287[0] |= -55 << 24;
	v287[1] = -1933388350;
	v287[2] = -15665;
	v287[2] |= -60 << 24;
	v287[4] = -54;
	v287[4] |= -26428 << 16;
	v287[2] |= 0 << 16;
	v287[4] = 0 << 8;
	v287[3] = -774377332;
	decode((char*)v287, 18, 152);
}

void decode_file2() {
	char file[24] = { 0 };
	file[2] = -12;
	file[3] = -23;
	*(int*)&file[8] = -257367318;
	*(int*)&file[16] = -173479703;
	*(short*)&file[20] = -4638;
	file[1] = 17;
	*(int*)&file[4] = -269228888;
	*(int*)&file[12] = -269093661;
	decode((char*)file, 20, 151);
}

void decode_303() {
	int v303[6] = { 0 };
	v303[3] = -269833756;
	v303[1] = -470616577;
	v303[4] = -336534812;
	v303[2] = -269833749;
	v303[5] = 0xE9F5A8;
	*(short*)((char*)v303 + 1) = -22228;
	v303[0] |= -11 << 24;
	decode((char*)v303, 21, 170);
}

void decode_path() {
	char path[23] = { 0 };
	path[2] = 67;
	path[9] = 67;
	path[12] = 14;
	path[13] = 67;
	path[16] = 14;
	path[17] = 13;
	path[18] = 30;
	path[20] = 66;
	path[1] = -75;
	path[4] = 21;
	path[3] = 31;
	path[5] = 31;
	path[11] = 5;
	path[15] = 5;
	path[21] = 31;
	path[6] = 24;
	path[22] = 3;
	path[7] = 9;
	path[8] = 1;
	path[19] = 24;
	decode(path, 21, 217);
}

void dptr() {
	char ptr[7] = { 0 };
	ptr[1] = -64;
	*(short*)&ptr[2] = 1025;
	*(short*)&ptr[4] = 2319;
	ptr[6] = 27;
	decode(ptr, 6, 173);
}

void dtmp() {
	char tmpName[27] = { 0 };
	tmpName[3] = 9;
	tmpName[11] = 21;
	tmpName[12] = 31;
	tmpName[19] = 7;
	tmpName[15] = 13;
	tmpName[25] = 5;
	*(short*)&tmpName[17] = 1306;
	tmpName[1] = -71;
	tmpName[2] = 28;
	*(int*)&tmpName[4] = 520429342;
	tmpName[8] = 24;
	*(short*)&tmpName[9] = 8002;
	*(short*)&tmpName[13] = 2114;
	*(int*)&tmpName[20] = 1107368514;
	tmpName[26] = 14;
	decode(tmpName, 25, 213);
}

void dstdev() {
	char buf[5] = { 0 };
	*(int*)(buf + 1) = 0xEFB908;
	decode(buf, 2, 148);
}

void dtmp2() {
	char tmp[20] = { 0 };
	*(int*)&tmp[8] = 101385288;
	tmp[3] = 4;
	tmp[2] = 73;
	tmp[12] = 20;
	*(short*)&tmp[13] = 532;
	tmp[15] = 20;
	*(int*)&tmp[16] = 352718153;
	tmp[1] = -28;
	*(int*)&tmp[4] = 34538502;
	decode(tmp, 18, 131);
}

void dtmp3() {
	int tmp[5] = { 0 };
	tmp[0] = -43 << 24;
	tmp[1] = -740370985;
	tmp[4] = -824978792;
	tmp[3] = -975977019;
	*(short*)((char*)tmp + 1) = -26571;
	tmp[2] = -673524327;
	decode((char*)tmp, 18, 131);
}

void _0x1D() {
	printf("case 0x1D\n");
	//printf("v290: "); decode_v290();
	//printf("v288: "); decode_v288();
	//printf("v303: "); decode_v303();
	//printf("v284: "); decode_v284();
	//printf("ptr: "); decode_ptr();
	//printf("v289: "); decode_v289();
	//printf("v285: "); decode_v285();
	//printf("file: "); decode_file1();
	//printf("v282: "); decode_282();
	//printf("v307: "); decode_307();
	//printf("v283: "); decode_283();
	//printf("name: "); decode_name1();
	//printf("v281: "); decode_281();
	printf("v286: "); decode_286();
	printf("v280: "); decode_280();
	printf("v287: "); decode_287();
	printf("file: "); decode_file2();
	printf("303: "); decode_303();
	printf("path: "); decode_path();
	printf("ptr: "); dptr();
	printf("tmp: "); dtmp();
	printf("dev: "); dstdev();
	printf("tmp2: "); dtmp2();
	printf("tmp3: "); dtmp3();
}