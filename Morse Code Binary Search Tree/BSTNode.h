/*
	Programmer: Kaitlyn Hornbuckle
			Class: CPT 122, Spring 2021; Lab Section 6
			Date: March 30, 2021
			Description: The program simulates a morse code encoder using a binary search tree!
*/

#ifndef leaf
#define leaf

#include <iostream>
#include <fstream>

template <typename N>
class BSTNode
{
public:
	//constructor
	BSTNode();

	//copy constructor
	BSTNode(std::string code, char character);

	//getters
	std::string getData() const;
	char getLetter() const;
	BSTNode<N>* getRightptr();
	BSTNode<N>* getLeftptr();

	//setters
	void setData(std::string words);
	void setRightptr(std::string code, char character);
	void setLeftptr(std::string code, char character);
	void setLetter(char character);



private:
	BSTNode<N>* left;
	BSTNode<N>* right;
	

	std::string data;
	char letter;

};

//constructor
template <typename N>
BSTNode<N>::BSTNode()
{
	left = nullptr;
	right = nullptr;



	data = "";
	letter = '\0';
	//delete(left);
	//delete left;
}

template <typename N>
//copy constructor
BSTNode<N>::BSTNode(std::string code, char character)
{

	this->data = code;
	this->letter = character;



}

template <typename N>
//getters
std::string BSTNode<N>::getData() const
{
	return this->data;
}

template <typename N>
char BSTNode<N>::getLetter() const
{
	return this->letter;
}

template <typename N>
BSTNode<N>* BSTNode<N>::getRightptr()
{
	return this->right;
}

template <typename N>
BSTNode<N>* BSTNode<N>::getLeftptr()
{
	return this->left;
}


template <typename N>
//setters
void BSTNode<N>::setData(std::string words)
{
	data = words;
}

template <typename N>
void BSTNode<N>::setRightptr(std::string code, char character)
{
	this->right = new BSTNode(code, character);
}

template <typename N>
void BSTNode<N>::setLeftptr(std::string code, char character)
{
	this->left = new BSTNode(code, character);
}


template <typename N>
void BSTNode<N>::setLetter(char character)
{
	letter = character;
}


#endif

