#include "BinaryTree.h"
#include "raylib.h"


BinaryTree::BinaryTree()
{
	//set the root to null
	m_pRoot = nullptr;
}


BinaryTree::~BinaryTree()
{
}

bool BinaryTree::isEmpty() const
{
	//return true if the root is null
	if (m_pRoot == nullptr)
	{
		return true;
	}
	else 
	{
		return false;
	}
	
}

void BinaryTree::insert(int a_nValue)
{

	TreeNode* insertNode = new TreeNode(a_nValue);

	//If the tree is empty
	if (isEmpty())
	{
		//The value is inserted at the root
		m_pRoot = insertNode;
	}
	else
	{
		//Set the current node to the root
		TreeNode* currentNode = m_pRoot;
		TreeNode* parentNode = currentNode;

		//While the current node is !null
		while (currentNode != nullptr)
		{
			//If the value to be inserted is less than the value in the current node
			if (a_nValue < currentNode->getData())
			{
				//Set the current node to the left
				parentNode = currentNode;
				currentNode = currentNode->getLeft();
			}
			//If the value to be inserted is greater than the value in the current node
			else if (a_nValue > currentNode->getData())
			{
				//Set the current node to the right
				parentNode = currentNode;
				currentNode = currentNode->getRight();
			}
			//If the value to be inserted is equel the value in the current node
			else if (a_nValue == currentNode->getData())
			{
				//Set the current node to null
				currentNode = nullptr;
			}
		}

		//If the value to be inserted is less than parent
		if (a_nValue < parentNode->getData())
		{
			//Insert value as left child node
			parentNode->setLeft(insertNode);
		}
		else if (a_nValue > parentNode->getData())
		{
			//Insert value as right child
			parentNode->setRight(insertNode);
		}
	}

}

void BinaryTree::remove(int a_nValue)
{
	/*find the value in the tree, obtaining a pointer to the node and its parent
		If the current node has a right branch, then
		find the minimum value in the right branch by iterating down the left branch of the
		current node’s right child until there are no more left branch nodes
		copy the value from this minimum node to the current node
		find the minimum node’s parent node(the parent of the node you are deleting)
		if you are deleting the parent’s left node
			set this left child of the parent to the right child of the minimum
			node
			if you are deleting the parent’s right node
				set the right child of the parent to the minimum node’s right child
				If the current node has no right branch
				if we are deleting the parent’s left child, set the left child of the parent to the left
					child of the current node
					If we are deleting the parent’s right child, set the right child of the parent to the left
					child of the current node
					If we are deleting the root, the root becomes the left child of the current node*/




}

TreeNode * BinaryTree::find(int a_nValue)
{
	return nullptr;
}


void BinaryTree::draw(TreeNode * selected)
{
	draw(m_pRoot, 640, 170, 640, selected);
}

bool BinaryTree::findNode(int a_nSearchValue, TreeNode ** ppOutNode, TreeNode ** ppOutParent)
{
	
	*ppOutNode = m_pRoot;//
	*ppOutParent = m_pRoot;

	if (a_nSearchValue < (*ppOutNode)->getData())
	{
		//Set the current node to the left
		*ppOutParent = *ppOutNode;
		*ppOutNode = (*ppOutParent)->getLeft();
	}
	//If the value to be inserted is greater than the value in the current node
	else if (a_nSearchValue > (*ppOutParent)->getData())
	{
		//Set the current node to the right
		*ppOutParent = *ppOutNode;
		*ppOutNode = (*ppOutParent)->getRight();
	}
	//If the value to be inserted is equel the value in the current node
	else if (a_nSearchValue == (*ppOutNode)->getData())
	{
		//Return the current node and its parent
		return true;
	}

	return false;
}

void BinaryTree::draw(TreeNode * pNode, int x, int y, int horizontalSpacing, TreeNode * selected)
{
	//cut the horizontal spacing in half
	horizontalSpacing /= 2;

	//check that the current node exists
	if (pNode) {
		//check for a left node
		if (pNode->hasLeft()) {
			//draw a line to the left node
			DrawLine(x, y, x - horizontalSpacing, y + 80, RED);
			//draw the left node
			draw(pNode->getLeft(), x - horizontalSpacing, y + 80, horizontalSpacing, selected);
		}
		//check for a right node
		if (pNode->hasRight()) {
			//draw a line to the right node
			DrawLine(x, y, x + horizontalSpacing, y + 80, RED);
			//draw the right node
			draw(pNode->getRight(), x + horizontalSpacing, y + 80, horizontalSpacing, selected);
		}
		//draw the current node
		pNode->draw(x, y, (selected == pNode));
	}
}


