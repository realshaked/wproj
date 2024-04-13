#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char pei[255];
	char der[255];
	strcpy(pei, "pei");
	strcpy(der, "der");
	strcat(pei,der);
	printf("%s", pei);
}
