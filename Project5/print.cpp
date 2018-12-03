#include"print.h"
void sc()//这是一个注释hhjjjjjjj
{
	for (int i = 1; i <= n; i++)
	{
		if (dis[i] < 200)
			cout << m << "->" << i << ":" << "Next:" << xia[m][i] << "   Distance:" << dis[i] << endl;
		else
			cout << m << "->" << i << "Break" << endl;
	}
}