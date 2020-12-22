#include<iostream>

using namespace std;
typedef int faq;
struct emal
{
	emal* link;
	faq inf;
};

void enqueue(emal*& first, emal*& last, faq value)
{
	emal* tmp = new emal; 
	tmp->inf = value; 
	tmp->link = NULL; 
	if (last != NULL)
		last->link = tmp; 
	last = tmp; 
	if (first == NULL)
		first = tmp; 
}

faq dequeue(emal * &first, emal * &last)
{
	emal* tmp = first->link; 
	faq value = first->inf; 
	delete first; 
	first = tmp; 
	if (first == NULL)
		last = NULL; 
	return value; 
}

int add(emal*& first)
{
	if (first == NULL)
		return 0;
	emal* p = first;

	while (first->link !=NULL)
	{
		if (first->inf == 5)
		{
			emal* tmp = new emal;
			tmp->inf = 100;
			tmp->link = first->link;
			first->link = tmp;

		}
	first = first->link;
	}
}
int main()
{
	emal* first=NULL;
	emal* last=NULL;
	for (int i = 1; i < 10; i++)
	{
		enqueue(first,last, i);
	}
		
		add(first);
	while (first!=NULL)
	{
		cout << dequeue(first, last) << "  ";
	}
	
}