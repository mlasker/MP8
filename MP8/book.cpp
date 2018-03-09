#include "stdafx.h"
#include "book.h"
#include <iostream>
#include <fstream>

book::book(){

	authorName = "No name";
	bookTitle = "Unknown title";
	ISBN = 0;

}

//temp - update later
void book::print() const {

	
	cout << "Title: " << bookTitle << " Author: " << authorName << " ISBN: " << ISBN << endl;

}

void book::getData(string fileName) {

	ifstream infile;
	infile.open(fileName);

	while (infile) {

		getline(infile, authorName);
		getline(infile, bookTitle);
		string s;
		getline(infile, s);
		ISBN = stol(s);

		if (infile.eof())
			break;
	}

}

int book::getISBN() const {

	return ISBN;

}

