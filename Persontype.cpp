#include <string>
#include <iostream>

using namespace std;

class PersonType {

private:
	string firstName;
	string lastName;

public:
	void print() const;
	void setName(string first, string last);
	string getFirstName() const;
	string getLastName() const;
	PersonType();
	PersonType(string first, string last);

};

void PersonType:: print() const
{
	cout << firstName << " " << lastName << endl;
}
void PersonType::setName(string first, string last)
{
	firstName = first;
	lastName = last;
}

string PersonType::getFirstName() const
{
	return firstName;
}

string PersonType:: getLastName() const
{
	return lastName;
}

PersonType::PersonType()
{
	firstName = " ";
	lastName = " ";
}

PersonType::PersonType(string first, string last)
{
	firstName = first;
	lastName = last;
}

int main() {

	PersonType *myperson = new PersonType();

	myperson->setName("quintin","Smith");

	myperson->print();

	cout << myperson->getLastName() << endl;

	system("pause");

	return 0;
}

