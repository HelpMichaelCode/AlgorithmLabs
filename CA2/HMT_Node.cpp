#include "HMT_Node.h";
#include <string>
using namespace std;

HTM_Node::HTM_Node(string setChar, int setFreqeuncy) : left(NULL), right(NULL)
{
	myChar = setChar;
	characterFrequency = setFreqeuncy;
};

