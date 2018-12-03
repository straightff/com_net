#include"del.h"
 void del()
{
	int n3 = 0;
	cout << "删除：1.点；2.边 （输入数字）：";
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
		int u;
		cout << "删除哪一个节点：";
		cin >> u;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "error!请重新输入:";
			cin >> u;
		}
		for (int i = 0; i <= n; ++i)
		{
			map[u][i] = 200;
			map[i][u] = map[u][i];
			if (i == u)map[u][u] = 0;
		}
	}
	if (n3 == 2)
	{
		cout << "删除哪一条边：";
		int o1, o2;
		cin >> o1 >> o2;
		if (o1 == o2)cout << "error!";
		else { map[o1][o2] = 200; map[o2][o1] = map[o1][o2]; }
	}
}
