/* main program for execution */




#include"employee.h"

using namespace std;



int main()

{
	fstream f;

	Employee E(12345,"vishakha","anlyst");

	int p;
	p = fork();	
	
	if(p == 0)
	{ 
		 cout<<"Child Starts"<<endl;
		 //Writing this data to Employee.txt
             
		 fstream f;
		  f.open("Employee.txt", ios::app);
		  f.write((char*)&E,sizeof(E));
		  f.close();
		 cout<<"Child terminates"<<endl;
	}
	else
	{
	          wait(0);
        	cout<<"Parent Starts"<<endl;
		//Reading data from Employee.txt
	
		ifstream f2;
		f2.open("Employee.txt",ios::in);
		f2.seekg(0);
	         f2.read((char*)&E,sizeof(E));
		 cout<<"employee name"<<E.name<<endl;
		 cout<<"role"<<E.role<<endl;
		 cout<<"emp id"<<E.empid<<endl;
		  f2.close();
		 
		   cout<<"Parent terminates"<<endl;
	}
	return 0;
}


