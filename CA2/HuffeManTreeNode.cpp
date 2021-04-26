#include "HuffeManTreeNode.h";
#include <string>
using namespace std;

HuffeManTreeNode::HuffeManTreeNode(int setChar, int setFreqeuncy) : left(nullptr), right(nullptr)
{
	myChar = setChar;
	characterFrequency = setFreqeuncy;
};

