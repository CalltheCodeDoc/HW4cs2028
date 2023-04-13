#include "Hash.h"
#include <typeinfo>
#include <sstream>
#include <type_traits>




//1. Create a hash table that uses a 1D array and linear probing to handle collisions.This
	//    table should have 500 available slots to hold items.The hashing function can be as
	//    simple as taking the modulus of the input value for the number of available slots.The
	//    hash table class should have the following members :
	//a.Constructor
	//    b.Destructor
	//    c.Insert – accepts a value(integer), runs a hash function on the integer, and places it
	//    in the hash table.This function should return the number of spots it checks before
	//    inserting the item in the hash table so if it has no collisions, it should return 1 and
	//    if it has 3 collisions and then finds a spot on the 4th try, it return 4.
	//        d.Find – accepts a value(integer), locates the value in the hash tableand returns the
	//        number of spots it checked to find the item or determine it is not in the hash table.
	//        This uses the same procedure as Insert to determine number of spots checked.
	//        e.Remove – accepts a value(integer), locates the value in the hash tableand
	//        removes it from the hash table.It returns the number of spots it checked to find
	//        the item or determine it is not in the hash table.This uses the same procedure as
	//        Insert to determine number of spots checked.
	//        f.Print – prints all items in the hash table including an indication of which spots are
	//        not occupied.











//1. Create a hash table that uses a 1D array and linear probing to handle collisions.This
	//    table should have 500 available slots to hold items.The hashing function can be as
	//    simple as taking the modulus of the input value for the number of available slots.The
	//    hash table class should have the following members :
	//a.Constructor
	//    b.Destructor
Hash::Hash() {
	//Remember this derives from the base class so some of this is unecessary
	this->SIZE = 100;
	this->table = new int* [SIZE];
	for (int i = 0; i < SIZE; i++) {
		table[i] = new int[SIZE];
		for (int j = 0; j < SIZE; j++) {
			table[i][j] = -1;
		}
	}
	this->items = 0;
}

Hash::Hash(int size) {
	//Remember this derives from the base class so some of this is unecessary
	this->SIZE = size;
	this->table = new int* [SIZE];
	for (int i = 0; i < size; i++) {
		table[i] = new int[SIZE];
		for (int j = 0; j < SIZE; j++) {
			table[i][j] = -1;
		}
	}
	this->items = 0;
}

Hash::~Hash() {
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
void Hash::Insert(int inval) {


}

//        d.Find – accepts a value(integer), locates the value in the hash tableand returns the
//        number of spots it checked to find the item or determine it is not in the hash table.
//        This uses the same procedure as Insert to determine number of spots checked.
int Hash::Find(int inval) {

}


//        e.Remove – accepts a value(integer), locates the value in the hash tableand
	//        removes it from the hash table.It returns the number of spots it checked to find
	//        the item or determine it is not in the hash table.This uses the same procedure as
	//        Insert to determine number of spots checked.
int Hash::Remove(int inval) {

}


//        f.Print – prints all items in the hash table including an indication of which spots are
//        not occupied.
void Hash::Print() const {

}











//
//template <typename T>
//Hash<T>::Hash(){
//	int const MAX_SIZE = 100;
//	table = new T*[MAX_SIZE];
//	for (int i = 0; i < MAX_SIZE; i++)
//		table[i] = nullptr;
//	SIZE = MAX_SIZE;
//	length = 0;
//	numComparisons = 0;
//}
//
//template <typename T>
//Hash<T>::Hash(int const size) {
//	SIZE = size;
//	table = new T*[SIZE];
//	for (int i = 0; i <size; i++)
//		table[i] = nullptr;
//}
//
//template <typename T>
//Hash<T>::~Hash(){
//	for (int i = 0; i < SIZE; ++i) {
//		table[i]=nullptr;
//	}
//	delete[] table;
//	table = nullptr;
//	//design decision to not delete contents of items in table, as class did not create those items
//}
//
//
////AddItem – adds an item from the list.
//template <typename T>
//void Hash<T>::AddItem(T* inval) {
//	
//
//	unsigned int base_index = hash(*inval)%SIZE;
//	try {
//		for (int i = 0; i < SIZE; i++) {//linear probing
//			if (table[(base_index + i) % SIZE] == nullptr) {
//				base_index = (base_index + i) % SIZE;
//				break;
//			}
//			if (i == SIZE - 1) {
//				throw HashNotFlow("Hash table is full");
//				//can not add items
//			}
//		}
//	}
//	catch (const Hash<T>::HashNotFlow& e) {
//		std::cerr << "Caught MyClass::MyException: " << e.what() << std::endl;
//		return;
//	}
//
//	
//	table[base_index] = inval;
//	//cout << *table[base_index] << endl;
//	length++;
//
//}
//
//
////RemoveItem – searches the list for the given item.If found, it removes it
////from the listand returns it.If not found, it returns a null pointer.
//template <typename T>
//T* Hash<T>::RemoveItem(T* inval) {
//
//	unsigned int base_index = hash(*inval) % SIZE;
//	//cout << base_index << endl;
//	//cout << table[base_index] << endl;
//
//	//linear probing
//	for (int i = 0; i < SIZE; i++) {
//
//		if ((table[(base_index + i) % SIZE] != nullptr)&&( *table[(base_index + i) % SIZE] == *inval)) {
//			base_index = (base_index + i) % SIZE;
//			break;
//		}
//		if (i == SIZE - 1) {
//			return nullptr;
//			//can not add items
//		}
//	}
//	T* temp = table[base_index];
//	table[base_index] = nullptr;
//	//cout << *table[base_index] << endl;
//	length--;
//	return temp;
//}
//
//
//template <typename T>
//T** Hash<T>::GetTable() const {
//	return table;
//}
//
//
//template <typename T>
//void Hash<T>::Display() const {
//	//Displays all table slots
//	for (int k = 0; k < SIZE; k++) {
//
//		if (table[k] == nullptr) {
//			cout << "Slot " << k << " is Empty" << endl;
//		}  
//		else {
//			cout << *table[k] << endl;
//		}
//	}
//	cout << endl;
//}
//
////GetItem – searches the list for a given item. If found, it returns a pointer
////to the item but doesn’t remove it from the list.
//template <typename T>
//T* Hash<T>::GetItem(T* inval) {
//	unsigned int base_index = hash(*inval) % SIZE;
//	//cout << table[base_index] << endl;
//	//for loop to handle linear probing
//	for (int i = 0; i < SIZE; i++) {
//		numComparisons++;
//		if ((table[(base_index + i) % SIZE] != nullptr) && (*table[(base_index + i) % SIZE] == *inval)) {
//			base_index = (base_index + i) % SIZE;
//			break;
//		}
//		if (i == SIZE - 1) {
//			return nullptr;
//			//can not add items
//		}
//	}
//	return table[base_index];
//}
//
//
////GetLength – returns an int indicating the number of items in the table.
//template <typename T>
//int Hash<T>::GetLength() {
//	//returns number of items stored in table
//	return length;
//}
//
//
//
////Hash – This should be a private function that accepts a string and returns
////an int.For this, we are going to add the sum of all the ASCII values for
////the passed in stringand modulus by the maximum size of the table.
//template <typename T>
//int Hash<T>::hash(T inval) {
//
//	//hash takes each digit, and sums its ascii numeric value returning that value as an index
//
//
//	int computation;
//	//string stringify = to_string(inval);
//	
//	//sends values to stream and also tests to see if inval is pointer or not
//	//a way of forcing even difficult to convert items into string form
//	//stringify doesn't work with all overloaded options
//	std::ostringstream oss;
//	if constexpr (std::is_pointer<T>::value) {
//		oss << *inval;
//	}
//	else {
//		oss << inval;
//	}
//	std::string stringify = oss.str();
//	
//	long value=0;
//	//if (typeid(stringify) == typeid("Hello"))
//	//{
//		for (auto x : stringify) {
//			value += static_cast<int>(x);
//		}
//	//}
//	computation = value % SIZE;  //need to make sure it handles strings which it doesnt at the moment
//	return computation;
//}
//
//
//
