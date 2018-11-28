#pragma once
#include<iostream>
#include <cmath>
#include <string>
#include <fstream>
#include "windows.h"
using namespace std;
int xia[100][100];//下一跳
int map[100][100];//存储图
int dis[10000];//存储距离
int book[10000];//1为有搜过，0为没有。
int m, n = 9, a, b;//n为节点数
