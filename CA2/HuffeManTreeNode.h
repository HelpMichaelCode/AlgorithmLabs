#pragma once
#include <string>
using namespace std;

class HuffeManTreeNode
{
	friend class Compare;
public:
	int myChar;
	int characterFrequency;
	HuffeManTreeNode(int, int);
	HuffeManTreeNode* left;
	HuffeManTreeNode* right; 
	
private:
};