#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char g[50];
	printf("Please paste your GUID(12345678-ABCD-EF12-3456-12345678ABCD):");
	scanf("%s", g);
	printf("Format for dec file:\n");
	//Ignore elments: 8, 13, 18, 23
	printf("{0x%c%c, 0x%c%c, 0x%c%c, 0x%c%c, 0x%c%c, 0x%c%c, 0x%c%c, 0x%c%c, 0x%c%c, 0x%c%c, 0x%c%c, 0x%c%c, 0x%c%c, 0x%c%c, 0x%c%c, 0x%c%c}\n", \
	g[6], g[7], g[4], g[5], g[2], g[3], g[0], g[1], g[11], g[12], g[9], g[10], g[16], g[17], g[14], g[15], g[19], g[20], g[21], g[22], \
	g[24], g[25], g[26], g[27], g[28], g[29], g[30], g[31], g[32], g[33], g[34], g[35]);
	
	printf("\n");
	printf("Format in HEX:\n");
	printf("{0x%c%c%c%c%c%c%c%c, 0x%c%c%c%c, 0x%c%c%c%c, {0x%c%c, 0x%c%c, 0x%c%c, 0x%c%c, 0x%c%c, 0x%c%c, 0x%c%c, 0x%c%c}}\n", \
	g[0], g[1], g[2], g[3], g[4], g[5], g[6], g[7], g[9], g[10], g[11], g[12], g[14], g[15], g[16], g[17], g[19], g[20], g[21], g[22], \
	g[24], g[25], g[26], g[27], g[28], g[29], g[30], g[31], g[32], g[33], g[34], g[35]);
	
	system("pause");
	return 0;
}
