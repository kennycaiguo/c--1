#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


class Person{
public:
	Person(){}
	//初始化属性
		Person(char * name, int age){
			m_Name = (char*)malloc(strlen(name) + 1);
			strcpy(m_Name, name);
			m_age = age;
		}

		//拷贝构造， 系统会提供默认拷贝构造，而且是简单的拷贝构造
		//深拷贝，里面分区有内容，重新拷贝一份
		Person(const Person&p){
			m_age = p.m_age;
			m_Name = (char*)malloc(strlen(p.m_Name) + 1);
			strcpy(m_Name, p.m_Name);

		}
		//析构函数,提供了一个析构函数，程序就崩溃了，因为第一次释放了分区空间两次，导致程序崩溃

		~Person(){
			cout << "析构函数调用" << endl;
			if (m_Name != NULL){
				free(m_Name);
				m_Name = NULL;
			}
		}
		char * m_Name;
		int m_age;
};
void test01(){
	Person p1("敌方",10);
	Person p2(p1);

}

int main(){
	test01();
	system("psuse");
	return EXIT_SUCCESS;
}