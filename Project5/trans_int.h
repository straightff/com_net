#pragma once
#include"data.h"
int si(string s1)//字符型改整型 122
{
	int s3, s2;
	for (s3 = 0, s2 = 0; s1[s3]; ++s3) { s2 = s2 * 10 + (s1[s3] - '0'); }
	return s2;
}