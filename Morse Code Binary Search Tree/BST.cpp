/*
	Programmer: Kaitlyn Hornbuckle
			Class: CPT 122, Spring 2021; Lab Section 6
			Date: March 30, 2021
			Description: The program simulates a morse code encoder using a binary search tree!
*/

#include "BST.h"
/*
template <typename B>
//constructor
BST<B>::BST()
{
	//Opens & reads from file
	root = nullptr;
	data = "";
	character = '\0';
	std::string meow = "";

	std::ifstream readFile("MorseTable.txt", std::ios::in);

	

	while (readFile)
	{
		readFile >> character;
		//std::cout << character; //used for error checking
		readFile >> data;
		//std::cout << data; //used for error checking

		//Insert Function is called!
		insertNode(root, character, data);
	}

		std::cout << "OMG I GOT A TREE!! HALLELUJAH! :D" << std::endl << std::endl;
		std::cout << "Here is the entire alphabet stored in the tree:" << std::endl << std::endl;

		//Prints the binary search tree
		print(root);

		//Closes the MorseTable.txt file
		readFile.close();

		//Prints out the morse code stored in Convert.txt
		search(root);

}

template <typename B>
//destructor
BST<B>::~BST()
{
	std::cout << std::endl << "Inside the BST destructor! Successfully removed the tree" << std::endl;

	if (root != nullptr)
	{
		delete root;
	}
}
*/
/*
template <typename B>
//getters
std::string BST<B>::getData()
{
	return data;
}

template <typename B>
//inserts node
//PRECONDITIONS: setData() from BSTNode.h must be used prior to calling insertNode()
void BST<B>::insertNode(BSTNode<B>* current_ptr, char character, std::string code)
{
	if (isEmpty() == true) 
	{
		std::cout << "OH NO! There is nothing in the tree!" << std::endl;
		root = new BSTNode(code, character);
	}
	else
	{

		//This puts a value on the left-hand side of the tree
		if (character < (current_ptr->getLetter()))
		{
			if (current_ptr->getLeftptr() == nullptr)
			{
				current_ptr->setLeftptr(code, character);
			}
			else 
			{
				//Recursive step to iterate to empty leaf node
				insertNode(current_ptr->getLeftptr(), character, code);
			}
		}
		//This puts a value on the right-hand side of the tree
		else if (character > (current_ptr->getLetter()))
		{
			if (current_ptr->getRightptr() == nullptr)
			{
				current_ptr->setRightptr(code, character);
			}
			else 
			{
				//Recursive step to iterate to empty leaf node
				insertNode(current_ptr->getRightptr(), character, code);
			}
		
        }
		
	}


	
}

template <typename B>
//Prints the entire tree from left to right!
void BST<B>::print(BSTNode<B>* tree)
{
	if (tree != nullptr)
	{
		print(tree->getLeftptr());
		std::cout << "Letter: " << tree->getLetter() << std::endl;
		std::cout << "Morse Code: " << tree->getData() << std::endl;
		print(tree->getRightptr());
	}
}

template <typename B>
//Decodes the message in Convert.txt
void BST<B>::search(BSTNode<B>* tree)
{
	std::ifstream readFile("Convert.txt", std::ios::in);

	char message = '\0';
	readFile >> message;
	//Reads message from Convert.txt and prepares to decode
	while (readFile)
	{
		match(tree, message);
		readFile >> message;
	}
	
}

template <typename B>
//This will find the matching letter/morse code in the BST!
void BST<B>::match(BSTNode<B>* tree, char message)
{
	if (message != 32) //this checks the message for spaces!
	{
		//This searches for a corresponding letter!
		//This will be true if the letter is the root!
		if (tree->getLetter() == message)
		{
			//std::cout << "Found a match!";
			std::cout << tree->getData() << " ";

		}

		else if (message < (tree->getLetter()))
		{
			if (tree->getLeftptr()->getLetter() == message)
			{
				//std::cout << "Found a match!";
				std::cout << tree->getLeftptr()->getData() << " ";
			}
			else
			{
				//Recursive step
				match(tree->getLeftptr(), message);

			}
		}
		//This writes a value on the right-hand side of the tree
		else if (message > (tree->getLetter()))
		{
			if (tree->getRightptr()->getLetter() == message)
			{
				//std::cout << "Found a match!";
				std::cout << tree->getRightptr()->getData() << " ";
			}
			else
			{
				//Recursive step
				match(tree->getRightptr(), message);
			}

		}
	}
	else
	{
		//Prints three spaces
		std::cout << "   ";
	}
}

template <typename B>
//Checks if tree is empty. Returns true if empty, returns false otherwise.
bool BST<B>::isEmpty()
{
	if (root == nullptr)
	{
		return true;
	}
	else
	{
		return false;
	}
}

*/