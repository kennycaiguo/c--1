//设计一个圆类和点类，求点和圆之间的位置关系
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


class Dot{
public:
	void setX(int setX){
		x = setX;
	}
	int getX(){
		return x;
	}
	void setY(int setY){
		y= setY;
	}
	int getY(){
		return x;
	}


private:
	int x;
	int y;
};

class Circle{
public:
	//设置半径
	void setR(int r){
		c_R = r;
	}
	//获取半径
	int getR(){
		return c_R;
	}
	//设置圆心
	void setCCenter(Dot d){
		c_Center = d;
	}
	//获取圆心
	Dot getCCenter(){
		return c_Center;
	}
private:
	int c_R;
	Dot c_Center; //这是圆心
	
};
//获取圆心到点之间的距离
void distance(Circle  &c,Dot d1){
	int d = (c.getCCenter().getX() - d1.getX())*(c.getCCenter().getX() - d1.getX()) + (c.getCCenter().getY() - d1.getY())* (c.getCCenter().getY() - d1.getY());
	int rDistance = c.getR()*c.getR();
		if (rDistance > d){
		cout << "点在圆内" << endl;
	}
		else if (rDistance<d){
		cout << "点在圆外" << endl;
	}
	else
	{
		cout << "点在圆上" << endl;
	}
}

void test(){
	Circle c1;
	Dot d1;
	Dot d2;
	d2.setX(4) ;
	d2.setY(8);
	c1.setR(10);
	c1.setCCenter(d2);
	c1.setCCenter(d2);
	d1.setX(6);
	d1.setY(6);
	distance(c1, d1);

}

int main(){
	test();
	system("pause");
}