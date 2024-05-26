#include <iostream>
#include <cstring>
#include "ListQuad.h"


QuadsLinkedList::QuadsLinkedList()
{
	Ptr = NULL;
	Ptr->code = 1;
}

QuadsLinkedList::~QuadsLinkedList()
{
	Node* Element = this->Ptr;

	while (Element != NULL)
	{
		Node* temp = Element->next;
		delete Element;
		Element = temp;
	}
}

void QuadsLinkedList::Insert(Quadrilateral* q)
{
	if (this->Ptr->code == 50)
	{
		cout << "list is full";
		return;
	}
	else
	{
		Node* newNode = new Node;
		newNode->quad = q;
		newNode->code = this->Ptr->code + 1;
		newNode->next = this->Ptr;

		this->Ptr = newNode;
	}

}

void QuadsLinkedList::Remove(Quadrilateral* q)
{
	Node* Element = this->Ptr;
	Node* temp = Element;
	while (Element != NULL)
	{
		if (Element->quad == q)
		{
			temp->next = Element->next;
			delete Element;
			break;
		}
		else
		{
			temp = Element;
			Element = Element->next;
		}
	}
}

void QuadsLinkedList::Show()
{
	for (Node* Element = this->Ptr; Element != NULL; Element = Element->next)
	{
	    Element->quad->Drawing();
	}
	cout << endl;
}
