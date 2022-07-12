/* Program to store the employee details */



#include <iostream>
#include <cstring>
#include <fstream>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

using namespace std;


//Employee class created
class Employee

{

	public:

		int empid;
		string name;
		string role;



		//constructors created
		Employee(){}
                Employee(int e, string n, string r)
	{
                 empid = e;
	          name = n;
                  role = r;

	}
            

};




