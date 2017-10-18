#include <stdio.h>
int main(void)
{
	char Scenario[3][20] = { { "亀は出かけました." },{ "ウサギが来ました." },{ "毎度!" }, };
	int i, j;
	for (j = 0; j < 3; j++)
	{
		for (i = 0; i < 18; i += 2)
		{
			printf("%c%c\n", Scenario[j][i], Scenario[j][i + 1]);
		}
	}
	for (j = 0; j < 18; j += 2)
	{
		for (i = 2; i > -1 ; i --)
		{
			printf("%c%c    ", Scenario[i][j], Scenario[i][j + 1]);
		}
		printf("\n");

	}

	return (0);
}