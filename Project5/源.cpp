#include"del.h"
#include"dijkstra.h"
#include"input_file.h"
#include"print.h"
#include"trans_int.h"
#include"zengjia.h"
int xia[100][100];//下一跳
int map[100][100];//存储图
int dis[10000];//存储距离
int book[10000];//1为有搜过，0为没有。
int m, n = 9, a, b;//n为节点数
int main()//1
{
    cout<<"刘嵩"<<endl;
	int k, l;
	for (k = 0; k <= 100; ++k)
		for (l = 0; l <= 100; ++l)
			xia[k][l] = l;//初始化下一跳
	for (int i = 1; i <= 100; i++)
		for (int j = 1; j <= 100; j++)
		{
			map[i][j] = 200;
			if (i == j)map[i][j] = 0;
		}
	wj();
	int n3 = 4;
	int h = 1;
	for (; h != 0;)
	{
		cout << "选择操作：1.增加；2.删除；3.查询节点路由表；4.退出 (请输入数字)";
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
			cout << "error!请输入1，2，3，4:";
			cin >> n3;
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(10000, '\n');
				cout << "error!请重新输入:";
				cin >> n3;
			}
		}
		if (n3 == 1)zj();
		if (n3 == 2)
		{
			del();
		}
		if (n3 == 3)
		{
			m = 0;
			system("cls");
			cout << "查询哪一个节点的路由表：";
			cin >> m;
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(10000, '\n');
				cout << "error!请重新输入:";
				cin >> m;
			}
			dijkstra(m);//以m为源点。
			sc();
			for (int t = 0; t <= 10000; ++t)
				book[t] = 0;
		}
		if (n3 == 4) h = 0;
	}
}
