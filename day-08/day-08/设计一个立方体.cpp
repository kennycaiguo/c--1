#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


//���һ���������ࣨcube��  ���������������������ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����


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
	//�����
	void  VCube(){
		int area = m_l*m_w*m_h;
		cout << "Բ������ǣ�" << area << endl;
	}
	//�����
	void areaCube(){
		int area = m_l*m_w * 2 + m_h*m_l * 2 + m_h*m_w * 2;
		cout << "Բ������ǣ�" << area << endl;
	}

//ʹ�ó�Ա���������ж�������������Ĳ�ͬ

	void  compareCube2(Cube &c2){
		bool ret = m_h == c2.geth() && m_h == c2.getl() && m_w == c2.getw();
		if (ret){
			cout << "��������������ͬ" << endl;
		}
		else
		{
			cout << "�����������岻ͬ" << endl;
		}

	}
private:
	int m_l,m_w,m_h;


};
//ȫ�ֺ������ж������������Ƿ����
//��������ô��ݣ���Ϊֵ���ݣ��Ὺ��һ���¿ռ�
bool compareCube(Cube &c1, Cube &c2){
	if (c1.geth() == c2.geth() && c1.getl() == c2.getl() && c1.getw() == c2.getw()){
		return 1;
	}
	else
		return 0;
}
//ͨ��ȫ�ֺ����ж������������Ƿ���ȡ�

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
	//	cout << "���һ��������" << endl;
	//}
	//else{
	//	cout << "����������ͬ��������" << endl;
	//}
	c1.compareCube2(c2);
}


int main(){
	test01();
	system("pause");
	return 0;
}