#include <stdio.h>

int main(void) {

	char newline = '\n';
	char horiz = '\t';
	char vert = '\v';
	char backspace = '\b';
	char carriage = '\r';
	char form = '\f';
	char backslash = '\\';
	char singleq = '\'';
	char doubleq = '\"';
	char null = '\0';

	printf("Character           Description           Decimal           Hexadecimal\n");
	printf("-----------------------------------------------------------------------\n");
	printf("   \\n               newline               %3d               0x%03x\n", newline, newline, newline);
	printf("   \\t               horizontal tab        %3d               0x%03x\n", horiz, horiz, horiz);
	printf("   \\v               vertical tab          %3d               0x%03x\n", vert, vert, vert);
	printf("   \\b               backspace             %3d               0x%03x\n", backspace, backspace, backspace);
	printf("   \\r               carriage return       %3d               0x%03x\n", carriage, carriage, carriage);
	printf("   \\f               form feed             %3d               0x%03x\n", form, form, form);
	printf("   %c                backslash             %3d               0x%03x\n", backslash, backslash, backslash);
	printf("   %c                single quote          %3d               0x%03x\n", singleq, singleq, singleq);
	printf("   %c                double quote          %3d               0x%03x\n", doubleq, doubleq, doubleq);
	printf("   \\0               null                  %3d               0x%03x\n", null, null, null);

	getchar();
	return 0;
}