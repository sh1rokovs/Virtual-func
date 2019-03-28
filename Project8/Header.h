#pragma once
#include<iostream>

using namespace std;

class Enemy
{
public:
	virtual void attack()
	{}
};

class Ninja : public Enemy
{
public:
	void attack()
	{
		cout << "Monster!" << endl;
	}
};

class Monster : public Enemy
{
public:
	void attack()
	{
		cout << "Ninja!" << endl;
	}
};