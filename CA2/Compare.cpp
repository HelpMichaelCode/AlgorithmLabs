#include "Compare.h"

bool Compare::operator()(HuffeManTreeNode* lhs, HuffeManTreeNode* rhs)
{
    return lhs->characterFrequency > rhs->characterFrequency;
}
