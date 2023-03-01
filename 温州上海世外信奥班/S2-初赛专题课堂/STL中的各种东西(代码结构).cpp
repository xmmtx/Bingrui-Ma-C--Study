#include<iostream>
using namespace std;
main()
{
	cout<<"一、向量"<<endl;
	cout<<endl;
	cout<<"头 文 件：#include<vector> vector<int> v;//结构类型，数据类型"<<endl;
	cout<<"定    义：vector<数据类型> 向量名"<<endl;
	cout<<"添加元素：v.push_back()"<<endl;
	cout<<"大    小：v.size()"<<endl;
	cout<<"插    入：v.insert()"<<endl;
	cout<<"删    除：v.erase()"<<endl;
	cout<<"迭 代 器：v.begin() v.end() 起始位置和结束位置的指针"<<endl;
	cout<<"清    空：v.clear()"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"二、栈"<<endl;
	cout<<endl;
	cout<<"头文件：#include<stack>"<<endl;
	cout<<"定  义：stack<数据类型> 栈名"<<endl;
	cout<<"入  栈：s.push()"<<endl;
	cout<<"出  栈：s.pop()"<<endl;
	cout<<"大  小：s.size()"<<endl;
	cout<<"栈  顶：s.top()"<<endl;
	cout<<"栈  空：s.empty() 空则返回true"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"三、队列"<<endl;
	cout<<endl;
	cout<<"头文件：#include<queue>"<<endl;
	cout<<"定  义：queue<数据类型>队列名"<<endl;
	cout<<"入  列：q.push()"<<endl;
	cout<<"出  队：q.pop()"<<endl;
	cout<<"大  小：q.size()"<<endl;
	cout<<"队  首：q.front()"<<endl;
	cout<<"队  尾：q.back()"<<endl;
	cout<<"队  空：q.empty() 空则返回true";
}
