
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <ctype.h>
#include <string.h>
using namespace std;
char make_big(char *str)
{
	//alphabet
	char alpha[] = "qwertyuiopasdfghjklzxcvbnm"; 

	for (int i = 0; i < strlen(str); i++)
	{

		for (int j = 0; j < strlen(alpha); j++)
		{
			if (str[i] == alpha[j])
				str[i] = toupper(str[i]);

		}
	}
	cout << str;
	return 0;
}
void main()
{
	char line[500];
	gets_s(line);
	make_big(line);
	
    _getch();
}

