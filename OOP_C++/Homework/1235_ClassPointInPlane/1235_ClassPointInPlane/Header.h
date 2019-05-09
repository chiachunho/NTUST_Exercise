// Student ID: B10615043
// Date: March 26, 2018
// Last Update: March 26, 2018
// Problem statement: This header to defined class Point .

#include <iostream>

using namespace std;

class Point 
{
public:
	void set(int x, int y);
	void move(int xDelta, int yDelta);
	int retrieveVertical();
	int retrieveHorizontal();
	void rotate();

private:
	int xValue;
	int yValue;

};

// Intent: Write in data.
// Pre: value of Point x and Point y.
// Post: none return.
void Point::set(int x, int y)
{
	xValue = x;
	yValue = y;
}

// Intent: Change point data.
// Pre: value of Point x and Point y.
// Post: none return.
void Point::move(int xDelta, int yDelta)
{
	xValue += xDelta;
	yValue += yDelta;
}

// Intent: Return X point.
// Pre: none.
// Post: return x point.
int Point::retrieveVertical()
{
	return xValue;
}

// Intent: Return y point.
// Pre: none.
// Post: return y point.
int Point::retrieveHorizontal()
{
	return yValue;
}
// Intent: change point location by 90 degress.
// Pre: none.
// Post: return changed point.
void Point::rotate()
{
	int tmp;
	tmp = xValue * (-1);
	xValue = yValue;
	yValue = tmp;
}