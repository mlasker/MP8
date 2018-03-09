#include <string>
using namespace std;

class book
{
private:

	string authorName;
	string bookTitle;
	long ISBN;

public:

	book();
	void print() const;
	void getData(string fileName);
	int getISBN() const;

};

