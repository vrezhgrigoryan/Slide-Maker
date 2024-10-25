#pragma once
#include <iostream>
class IElement
{
public:
	void print(std::ostream&);
};

class Line : public IElement
{
private:
	int x;
	int y;
	int length;
public:
	void print(std::ostream& output);
};
class Circle : public IElement
{
private:
	int x;
	int y;
	int R;
public:
	void print(std::ostream& output);
};
class Square : public IElement
{
private:
	int x;
	int y;
	int a;
public:
	void print(std::ostream& output);
};
class Regtangle : public IElement
{
private:
	int x;
	int y;
	int a;
	int b;
public:
	void print(std::ostream& output);
};

