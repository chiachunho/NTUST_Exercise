#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void newCmd() { puts("New Cmd function is called!!"); }
void openCmd() { puts("Open Cmd function is called!!"); }
void closeCmd() { puts("Close Cmd function is called!!"); }
void closeAllCmd() { puts("Close All Cmd function is called!!"); }
void saveCmd() { puts("Save Cmd function is called!!"); }
void saveAsCmd() { puts("Save As Cmd function is called!!"); }
void saveAllCmd() { puts("Save All Cmd function is called!!"); }
void printCmd() { puts("Print Cmd function is called!!"); }
void exitCmd() { 
	puts("Exit Cmd function is called!!"); 
	exit(0);
}

struct fileCmd {

	char *cmdName;
	void(*cmdPointer)(void);

} file_cmd[] = { { "new", newCmd },
				{ "open", openCmd },
				{ "close", closeCmd },
				{ "close all", closeAllCmd },
				{ "save", saveCmd },
				{ "save as", saveAsCmd },
				{ "save all", saveAllCmd },
				{ "print", printCmd },
				{ "exit", exitCmd }
};

int main() {

	char in[100];
	while (gets(in) != NULL) {
		int flag = 0;
		for (int i = 0; i < sizeof(file_cmd) / sizeof(file_cmd[0]); i++) {
			if (!strcmp(in, file_cmd[i].cmdName)) {
				file_cmd[i].cmdPointer();
				flag++;
			}
		}
		if (!flag) puts("ERROR");
	}
	return 0;
}
