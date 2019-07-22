#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


//设计一个立方体类（cube）  求出立方体的面积和体积，分别用全局函数和成员函数判断两个立方体是否相等


class Cube{
public:
	void setl(int l){
		m_l = l;
	}
	void setw(int w){
		m_w = w;
	}
	void seth(int h){
		m_h = h;
	}
	int getl(){
		return m_l;
	}
	int getw(){
		return m_w;
	}
	int geth(){
		return m_h;
	}
	//求体积
	void  VCube(){
		int area = m_l*m_w*m_h;
		cout << "圆的体积是：" << area << endl;
	}
	//求面积
	void areaCube(){
		int area = m_l*m_w * 2 + m_h*m_l * 2 + m_h*m_w * 2;
		cout << "圆的面积是：" << area << endl;
	}

//使用成员函数，来判断这两个立方体的不同

	void  compareCube2(Cube &c2){
		bool ret = m_h == c2.geth() && m_h == c2.getl() && m_w == c2.getw();
		if (ret){
			cout << "这两个立方体相同" << endl;
		}
		else
		{
			cout << "这两个立方体不同" << endl;
		}

	}
private:
	int m_l,m_w,m_h;


};
//全局函数，判断两个立方体是否相等
//这儿用引用传递，因为值传递，会开辟一个新空间
bool compareCube(Cube &c1, Cube &c2){
	if (c1.geth() == c2.geth() && c1.getl() == c2.getl() && c1.getw() == c2.getw()){
		return 1;
	}
	else
		return 0;
}
//通过全局函数判断两个立方体是否相等、

void test01(){
	Cube c1;
	Cube c2;
	c1.seth(10);
	c1.setl(10);
	c1.setw(10);
	c1.areaCube();
	c1.VCube();

	c2.seth(10);
	c2.setl(10);
	c2.setw(11);
	//bool ret=compareCube(c1, c2);
	//if (ret){
	//	cout << "这个一个立方体" << endl;
	//}
	//else{
	//	cout << "这是两个不同的立方体" << endl;
	//}
	c1.compareCube2(c2);
}


int main(){
	test01();
	system("pause");
	return 0;
}