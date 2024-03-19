#pragma once
class FigureN1
{
private : int p1x;
private : int p2x;
private : int p3x;
private : int p1y;
private : int p2y;
private : int p3y;
public : void SetPointsX(int pos1x, int pos2x, int pos3x) {
	p1x = pos1x;
	p2x = pos2x;
	p3x = pos3x;
	}
public: void SetPointsY(int pos1y, int pos2y, int pos3y) {
	p1y = pos1y;
	p2y = pos2y;
	p3y = pos3y;
}
public:int getTrue(int x, int y) {
	if (x == p1x && y == p1y) {
		return 1;
	}
	else if (x == p2x && y == p2y) {
		return 1;
	}
	else if (x == p3x && y == p3y) {
		return 1;
	}
	else
		return 0;
}
};
//if (x == p1x || x == p2x || x == p3x)
//if (y == p1y || y == p2y || y == p3y)
//return 1;

