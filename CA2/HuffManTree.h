#pragma once
#include <queue>
#include "HuffeManTreeNode.h"
#include "Compare.h"
using namespace std;
class HuffManTree 
{
public :
	HuffManTree(priority_queue<HuffeManTreeNode*, vector<HuffeManTreeNode*>, Compare>);
	void encodeTree();
private:
	HuffeManTreeNode* root;
	int weight;
};