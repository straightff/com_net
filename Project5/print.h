#pragma once
#include"data.h"
<<<<<<< HEAD
void sc()//1222
=======
void sc()//这是一个注释hhjjjjjjj
>>>>>>> 161735423e69600ab105c4c00f6e0d110b77c298
{
	for (int i = 1; i <= n; i++)
	{
		if (dis[i] < 200)
			cout << m << "->" << i << ":" << "Next:" << xia[m][i] << "   Distance:" << dis[i] << endl;
		else
			cout << m << "->" << i << "Break" << endl;
	}
}