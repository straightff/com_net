#pragma once
#include"data.h"
void sc()
{
	for (int i = 1; i <= n; i++)
	{
		if (dis[i] < 200)
			cout << m << "->" << i << ":" << "��һ����" << xia[m][i] << "���룺" << dis[i] << endl;
		else
			cout << m << "->" << i << ":�Ͽ�" << endl;
	}
}