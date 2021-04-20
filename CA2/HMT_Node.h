#pragma once
#include <string>
using namespace std;

class HTM_Node
{
public:
	string myChar;
	int characterFrequency;
	HTM_Node(string, int);
	HTM_Node* left;
	HTM_Node* right;
private:
};