#pragma once
#include "HuffeManTreeNode.h"
class Compare
{
public:
	bool operator() (HuffeManTreeNode* lhs, HuffeManTreeNode* rhs);
};