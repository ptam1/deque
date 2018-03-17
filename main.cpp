#include <iostream>
#include "deque.h"
#include "node2.h"
using namespace std;


int main()
{
	//Initialize new deque object
	deque<int> d;
	
	//Adding numbers to the deque object 
	d.push_front(56);
	d.push_front(30);
	d.push_front(101);
	d.push_front(5);
	cout << "Using push_front(). The Original Deque is: " << " ";
	//Printing data of deque 
	cout << d << endl;
	
	//Testing empty()
	cout << "Is the Deque Empty?" << " " << d.empty() << endl;
	
	//Testing size()
	cout << "The Size of the Deque is:" << " " << d.size() << endl;
	
	//Testing push_back()
	d.push_back(1);
	cout << "Using push_back() to add #1. The New Deque is: " << " ";
	//Printing data of deque
	cout << d << endl;
	
	//Testing size()
	cout << "The New Size of the Deque is:" << " " << d.size() << endl;
	
	//Testing front() const
	cout << "The Front is: " << " " << d.front() << endl;
	
	//Testing back() const
	cout << "The Back is: " << " " << d.back() << endl; 
	
	//Testing T& front() and T& back()
	cout << "Changing the Front to 2222, and the Back to 8888." << endl;
    d.front() = 2222;
	d.back() = 8888;
	//Printing data of deque
	cout << d << endl; 
	
	//Testing pop_front()
	cout << "Testing pop_front(). The New Deque is: " << " ";
	d.pop_front();
	//Printing data of deque
	cout << d << endl;
	
	//Testing pop_back()
	cout << "Testing pop_back(). The New Deque is: " << " ";
	d.pop_back();
	//Printing data of deque
	cout << d << endl;
	
	
	
	
	
	
	
	
	return 0;
}
