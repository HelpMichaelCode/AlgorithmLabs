#include "HuffManTree.h"

HuffManTree::HuffManTree(priority_queue<HuffeManTreeNode*, vector<HuffeManTreeNode*>, Compare> queue)
{
	while (queue.size() >= 2)
	{
		HuffeManTreeNode* newNode = nullptr; // Creating a node
		newNode->left = queue.top(); // pops out the last element of the queue
		queue.pop(); // pops out that last element from the queue
		newNode->right = queue.top(); // same again here
		queue.pop(); // and also here

		// Below we are creating a new node which has the frequency sum of both left and right node 
		newNode = new HuffeManTreeNode(0, (newNode->left->characterFrequency + newNode->right->characterFrequency));

		// Here we are just pushing that new node back into the queue
		queue.push(newNode);
	}
	root = queue.top();
	weight = root->characterFrequency;
}

void HuffManTree::encodeTree()
{
	while(root != nullptr)
	{
		if(root->left != nullptr)
		{
			
		}
	}
}

