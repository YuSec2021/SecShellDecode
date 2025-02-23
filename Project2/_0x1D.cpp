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
	v307[0] = -17 << 24 | -29893 << 8;
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
	v307[13] = -104  << 16;
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





void _0x1D() {
	printf("case 0x1D\n");
	printf("v290: "); decode_v290();
	printf("v288: "); decode_v288();
	printf("v303: "); decode_v303();
	printf("v284: "); decode_v284();
	printf("ptr: "); decode_ptr();
	printf("v289: "); decode_v289();
	printf("v285: "); decode_v285();
	printf("file: "); decode_file1();
	printf("v282: "); decode_282();
	printf("v307: "); decode_307();
	printf("v283: "); decode_283();
	printf("name: "); decode_name1();
}