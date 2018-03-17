#include <iostream>
#include "deque.h"
#include "node2.h"
using namespace std;


int main()
{
	deque<int> d;
	d.push_front(56);
	d.push_front(30);
	d.push_front(101);
	d.push_front(5);
	cout << "Using push_front() the Deque is: " << " ";
	cout << d << endl;
	cout << "Is the Deque Empty?" << " " << d.empty() << endl;
	cout << "The Size of the Deque is:" << " " << d.size() << endl;
	cout << "Using push_back() to add #1: " << " ";
	d.push_back(1);
	cout << "The New Deque is: " << " ";
	cout << d << endl;
	
	return 0;
}
