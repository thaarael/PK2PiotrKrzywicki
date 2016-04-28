#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct HexByte_ {
	char hex_byte[2];
	unsigned char bin_byte;
} HexByte;

HexByte *tab;

typedef struct MainControl_ {
	int mode;
	char *UserStrChange;
	char *UserStrKey;
	char *FileName;
	int ActuallHexByteTabSize;
} MainControl;

void SetWorkMode(MainControl *Interface, char **Args, int ArgsCount) {

}

void LoadFileToTab(char *Filename, int TabSize) {

}

void ReallocTab() {

}

void FindUserKeyInFile(char *Key, int *offset) {

}

void ReplaceDeleteKey(char *Key, int *offset, int mode) {

}

int main(char **argc, int argv) {
	MainControl *ControlInterface = (MainControl *)malloc(sizeof(MainControl));
	system("pause");
}