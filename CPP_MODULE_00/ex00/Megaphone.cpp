# include <iostream>
# include <cstring>
# include <cctype>

int main (int agc, char **agv)
{
	for (int j = 1; j < agc; j++)
	{
		for (size_t i = 0; i < strlen(agv[j]); i++)
		{
			if (isalpha(agv[j][i]))
			{
				agv[j][i] = toupper(agv[j][i]);
				std::cout << agv[j][i];
			}
			else
				std::cout << agv[j][i];
		}
	}
	if (agc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}