#include<PINK.h>


class Tree :public PB::Application {
public:
	Tree() {

	}
	~Tree() {

	}
};

PB::Application*  PB::CreatApplication() {
	return new Tree();
}