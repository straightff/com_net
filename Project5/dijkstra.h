#pragma once
#include"data.h"
void dijkstra(int u)//参数是源点编号
{
	int t = 0;
	for (t = 0; t <= 10000; ++t)
		dis[t] = 200;
	int start = u;
	book[start] = 1;
	for (int i = 1; i <= n; i++)
	{
		dis[i] = min(dis[i], map[start][i]);//先更新一遍
	}
	for (int i = 1; i <= n - 1; i++)
	{
		int minn = 999;
		for (int j = 1; j <= n; j++)
			if (book[j] == 0 && minn > dis[j])
			{
				minn = dis[j];
				start = j;//找到离源点最近的点，然后把编号记录下来
			}
		book[start] = 1;
		for (int j = 1; j <= n; j++)
		{
			if (dis[j] > dis[start] + map[start][j])xia[u][j] = xia[u][start];
			dis[j] = min(dis[j], dis[start] + map[start][j]);
		}//以新的点来更新d
	}
}