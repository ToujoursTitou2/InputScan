#ifndef INPUTSCAN_H
#define INPUTSCAN_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void clearBuffer();
char charScan(char *input, int size);
int intScan(int size);
double doubleScan(int size);
#endif
