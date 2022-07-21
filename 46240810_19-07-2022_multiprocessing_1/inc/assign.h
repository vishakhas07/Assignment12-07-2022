#pragma once

#include <iostream>
#include <signal.h>
#include <cstring>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <fstream>
#include <string>
#include <time.h>

#define MAXBUFF 1024

using namespace std;


void Write2File(char *fName)
{
		string line;


		
		fstream fs;
	
		fs.open(fName, ios::out);

		if(!fs)

		{

			cout<<"Unable to open the input file(Writing)"<<endl;

			exit(EXIT_FAILURE);

		}


		
		for(int i=0;i<2;i++)

		{



			getline(cin, line);

			fs<<line<<endl;

		}

		fs.close();


}


void ReadFromFile(char *fName)
{
		string line;


		
		fstream fs;


		
		fs.open(fName, ios::in);

		if(!fs)

					{
										
						cout<<"Unable to open the input file(Reading)"<<endl;

						exit(EXIT_FAILURE);


					}



		
		line ="";

		while(getline(fs, line)){

			cout<<line<<endl;

			line="";

		}


		
		fs.close();


}

static void process_display_exit_code(int exitstatus)
{

	cout<<"Interrupt signal ("<<exitstatus<<") received"<<endl;
}

static void signalHandler(int ID)
{
	
	cout<<"ID : "<<ID<<endl;
}

void RegisterSignal()
{

	signal(SIGINT, process_display_exit_code);

	signal(SIGILL, process_display_exit_code);

	signal(SIGFPE, process_display_exit_code);

	signal(SIGSEGV, process_display_exit_code);

	signal(SIGTERM, process_display_exit_code);

	signal(SIGABRT, process_display_exit_code);

	signal(SIGCHLD, process_display_exit_code);
}

void func()
{
		cout<<"the PID of this process is : "<<getpid()<<endl;

		cout<<"The Parent PID of this process is : "<<getppid()<<endl;

		kill(getpid(),SIGUSR1);
}

