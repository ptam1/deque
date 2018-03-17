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
	
	//Testing overloaded = function
	cout << "Testing overloaded operator == #1" << endl;
	deque<int> dq1;
	dq1.push_front(0);
	dq1.push_front(1);
	dq1.push_front(2);
	dq1.push_front(3);
	deque<int> dq2;
	dq2.push_front(100);
	dq2.push_front(200);
	dq2.push_front(300);
	dq2.push_front(400);
	cout << "Dq1 is: " << " " << dq1 << endl;
	cout << "Dq2 is: " << " " << dq2 << endl;
    cout << "Answer: " << " " << (dq1 == dq2) << endl;
	
	//Testing overloaded = function
	cout << "Testing overloaded operator == #2" << endl;
	deque<int> dq3;
	dq3.push_front(0);
	dq3.push_front(1);
	dq3.push_front(2);
	dq3.push_front(3);
	deque<int> dq4;
	dq4.push_front(0);
	dq4.push_front(1);
	dq4.push_front(2);
	dq4.push_front(3);
	cout << "Dq1 is: " << " " << dq3 << endl;
	cout << "Dq2 is: " << " " << dq4 << endl;
    cout << "Answer: " << " " << (dq3 == dq4) << endl;
	
	
	
	
	
	
	return 0;
}
