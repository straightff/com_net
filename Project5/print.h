#pragma once
#include"data.h"
void sc()//这是一个注释
{
	for (int i = 1; i <= n; i++)
	{
		if (dis[i] < 200)
			cout << m << "->" << i << ":" << "ÏÂÒ»Ìø£º" << xia[m][i] << "¾àÀë£º" << dis[i] << endl;
		else
			cout << m << "->" << i << ":¶Ï¿ª" << endl;
	}
}