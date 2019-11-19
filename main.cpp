// Sample driver
// EE 312 Fall 2018
//
// The BST should work for any data type or object.
// Other user created objects must have the << operator overloaded for 
// output.
//

#include <iostream>
#include <fstream>
#include "BST312.h"

using namespace std;

template <typename T>
void print(vector<T> vec){
    for(int i = 0 ; i < vec.size() ; i++){
        cout << vec[i] << endl;;
    }
}

int main() {

    /*ifstream inFile;
    inFile.open("test.txt");

    BST_312<string> bst;
   
    string s;
    inFile >> s;
    while (inFile) {
        cout << "inserting ... " << s << endl;
        bst.insertItem(s);
        inFile >> s;
    }
    inFile.close();*/
    BST_312<int> bst;
    bst.insertItem(25);
    bst.insertItem(15);
    bst.insertItem(10);
    bst.insertItem(5);
    bst.insertItem(20);
    bst.insertItem(35);
    bst.insertItem(30);
    bst.insertItem(45);
    bst.insertItem(40);
    bst.insertItem(50);

    cout << bst.countNodes() << endl;
    cout << "preorder traversal is " << endl;
    print(bst.preOrderTraversal());
    cout << endl;

    cout << "inorder traversal is " << endl;
    print(bst.inOrderTraversal());
    cout << endl;

    cout << "postorder traversal is " << endl;
    print(bst.postOrderTraversal());
    cout << endl;

    cout << "\n" << bst.isItemInTree(15) << endl;

    print(bst.inOrderTraversal());

    cout << "Remove items " << endl;
    cout << "number of nodes in tree before delete is " << bst.countNodes() << endl;
    //s = "tree";
    //bst.deleteItem(s);

    bst.deleteItem(15);
    print(bst.inOrderTraversal());

    cout << endl;
    cout << "number of nodes in tree after delete is " << bst.countNodes() << endl;
    cout << endl;
}

