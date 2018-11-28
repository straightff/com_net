#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include<vector>
using namespace std;
int map[100][100];//存储图
int dis[10000];//存储距离
int book[10000];//1为有搜过，0为没有。
int n, m;
struct router
{
	int name;
	int dist;
}node[10];
void dijkstra(int u)//参数是源点编号
{
	memset(dis, 200, sizeof(dis));
	int start = u;
	book[start] = 1;
	for (int i = 1; i <= n; i++)
	{
		dis[i] = min(dis[i], map[start][i]);//先更新一遍
	}
	for (int i = 1; i <= n ; i++)
	{
		int minn = 9999999;
		for (int j = 1; j <= n; j++)
			if (book[j] == 0 && minn > dis[j])
			{
				minn = dis[j];
				start = j;//找到离源点最近的点，然后把编号记录下来
			}
		book[start] = 1;
		for (int j = 1; j <= n; j++)
			dis[j] = min(dis[j], dis[start] + map[start][j]);//以新的点来更新d
	}
}
int main()
{
	cout << "几个节点：";
	cin >> n;
	cout << "几个条线：";
	cin >> m;
	memset(map, 200, sizeof(map));
	for (int i = 1; i <= m; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		map[a][b] = c;
		map[b][a] = c;
	}
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			if (i == j)
				map[i][j] = 0;
	dijkstra(1);//以1为源点。
	for (int i = 1; i <= n; i++)cout << "1->" << i << dis[i] << "	 ";
	while (1);
}