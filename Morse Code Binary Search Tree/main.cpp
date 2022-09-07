/*
	Programmer: Kaitlyn Hornbuckle
			Class: CPT 122, Spring 2021; Lab Section 6
			Date: March 30, 2021
			Description: The program simulates a morse code encoder using a binary search tree!
*/

#include "BSTNode.h"
#include "BST.h"

int main()
{
	
	//BSTNode<B>* access = nullptr;
	//BST<B>* build;

	std::string message;

	std::cout << "Welcome to the Epic Morse Code Encoder." << std::endl;
	std::cout << "WARNING: This tool was constructed by cats..." << std::endl;

	std::cout << "Please type a message: ";
	std::getline(std::cin, message); //can store sentences!

	//Writes inputted sentence to a file
	std::ofstream writeFile("Convert.txt", std::ios::out);
	writeFile << message;

	//Closes the Convert.txt file for writing
	writeFile.close();

	//need to fix this
	//access->setData(message);

	//This creates the entire tree AND converts the message in Convert.txt!
	//In a way, this makes a private tree! How cool! :)
	


	BST<std::string >();
	



	
	
}