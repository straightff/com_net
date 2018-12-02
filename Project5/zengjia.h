#pragma once
#include"data.h"
void zj()
{
	int n3 = 0;
	cout << "增加：1.点；2.边 （输入数字）：";
	cin >> n3;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(10000, '\n');
		cout << "error!请重新输入:";
		cin >> n3;
	}
	while (n3 != 1 && n3 != 2 && n3 != 3 && n3 != 4)
	{
		cout << "error!请输入1，2:";
		cin >> n3;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "error!请重新输入:";
			cin >> n3;
		}
	}
	if (n3 == 1)
	{
		++n;
		int n2 = 0, v = 0, v1 = 0;
		cout << "增加点有几条边:";
		cin >> v;
		for (n2 = 0; n2 < v; ++n2) {
			cout << n << "->";
			cin >> v1;
			cout << "距离:";
			cin >> map[n][v1];
			map[v1][n] = map[n][v1];
		}
	}
	if (n3 == 2)
	{
		int o1, o2;
		cout << "输入增加边：";
		cin >> o1;
		cout << "->";
		cin >> o2;
		if (o1 > n || o2 > n) cout << "输入了不存在节点" << endl;
		else {
			cout << ":距离："; cin >> map[o1][o2]; map[o2][o1] = map[o1][o2];
		}
	}
}