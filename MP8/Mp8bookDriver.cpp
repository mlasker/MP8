// MP8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "book.h"

int main()
{

	book b1 = book();
	b1.print();

	book b2 = book();
	b2.getData("mp8book.txt");
	b2.print();
    return 0;
}

