#include<fstream>
#include<iostream>
using namespace std;

static streambuf	*backup;
static ifstream		fin;

int cin_redirect(char filename[])
{
	fin.open(filename);	
	backup = cin.rdbuf();   
	cin.rdbuf(fin.rdbuf());	
	return 0;
}

int cin_recover()
{
	cin.rdbuf(backup);
	fin.close();
	return 0;
}
