#include "twodhash.h"





using namespace std;





	



//        2. Create a hash table that uses 2D arrays with 100 slots each 5 deep.Once the 5 are full,
	//        the items can’t be stored in that slot should throw an error on insert.This should have the
	//        same functions at requirement 1.

//1. Create a hash table that uses a 1D array and linear probing to handle collisions.This
	//    table should have 500 available slots to hold items.The hashing function can be as
	//    simple as taking the modulus of the input value for the number of available slots.The
	//    hash table class should have the following members :
	//a.Constructor
	//    b.Destructor
TwoDHash::TwoDHash() {
	//Remember this derives from the base class so some of this is unecessary
	this->SIZE = 100;
	this->table = new int*[SIZE];
	for (int i = 0; i < SIZE; i++) {
		table[i] = new int[SIZE];
		for (int j = 0; j < SIZE; j++) {
			table[i][j] = -1;
		}
	}
	this->items = 0;
}

TwoDHash::TwoDHash(int size) {
	//Remember this derives from the base class so some of this is unecessary
	this->SIZE = size;
	this->table = new int*[SIZE];
	for (int i = 0; i < size; i++) {
		table[i] = new int[SIZE];
		for (int j = 0; j < SIZE; j++) {
			table[i][j] = -1;
		}
	}
	this->items = 0;
}

TwoDHash::~TwoDHash() {
	for (int i = 0; i < SIZE; ++i) {
		table[i] = nullptr;
	}
	delete[] table;
	table = nullptr;
	//design decision to not delete contents of items in table, as class did not create those items
}


//    c.Insert – accepts a value(integer), runs a hash function on the integer, and places it
//    in the hash table.This function should return the number of spots it checks before
//    inserting the item in the hash table so if it has no collisions, it should return 1 and
//    if it has 3 collisions and then finds a spot on the 4th try, it return 4.
void TwoDHash::Insert(int inval) {


}

//        d.Find – accepts a value(integer), locates the value in the hash tableand returns the
//        number of spots it checked to find the item or determine it is not in the hash table.
//        This uses the same procedure as Insert to determine number of spots checked.
int TwoDHash::Find(int inval) {

}


//        e.Remove – accepts a value(integer), locates the value in the hash tableand
	//        removes it from the hash table.It returns the number of spots it checked to find
	//        the item or determine it is not in the hash table.This uses the same procedure as
	//        Insert to determine number of spots checked.
int TwoDHash::Remove(int inval) {

}


//        f.Print – prints all items in the hash table including an indication of which spots are
//        not occupied.
void TwoDHash::Print() const {

}