

#ifndef LISTQUAD_H
#define LISTQUAD_H
#define _CRT_SECURE_NO_WARNINGS

#include <iostream> 
#include "CQuadrilateral.h"

using namespace std;

struct Node
	{
	    Quadrilateral* quad;
		int code;
	    Node* next;
	};

class QuadsLinkedList
{
    public:
		QuadsLinkedList();
        ~QuadsLinkedList();

		void Insert(Quadrilateral* q);
        void Remove(Quadrilateral* q);
	    void Show();

    private:
	   Node* Ptr;
};

#endif