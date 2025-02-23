#pragma once

#include <malloc.h>
#include <iostream>

char* _decode(char* enc, int round, char key);
void decode(char* enc, int round, char key);