#include <iostream>
#include "integer-list.h"
#include "parse.h"

int main (int argc, char** argv) {  
	using namespace std;
  
	if (argc > 2) {
  		cerr << "Wrong number of arguments." << endl;
  		return 1;
  	}

  	int choice = 0;

  	if (argc == 2) {
  		choice = parse<int>(argv[1]);
  	}
  
  	// create a new list
  	int c = 1;
  	Node start(c);
  	// add 10 nodes to the list
  	while (c < 10) {
  		c++;
      		start.appendNew(c);
  	}

  	switch (choice){
		// original main (run if no argument is put in the command line)
	  	case 0: {
			// print the list
			start.print();
			// find the node with value 5
			Node* t = start.find(5);
			// erase this node
			t -> erase();
			// print the list again
			start.print();
	  	}
  	  	break;
	  	// testing setData
          	case 1: {
			// print the list
			start.print();
			// set the new integer  		
			int newin = 0;
  			// change the value in first position
			start.setData(newin);
  			// print the list again
			start.print();
	  	}
	  	break;
	  	// testing isFirst
          	case 2: {
  	  		// print the list
			start.print();
			// check if start is the first node
			if (start.isFirst()) {
				// print the first value
				cout << "The first value is " << start.getData() << endl;
			}
	  	}				
	  	break;
	  	// testing size
	  	case 3: {
	  		// print the list
			start.print();
			//get the size of the list and print it
			cout << "The size of the list is equal to " << start.size() << endl;
	  	}	
	  	break;
	  	// testing append
	  	case 4: {
	  		// print the list
			start.print();
			// set the last integer to add  		
			int lastin = 0;
			Node *tlast = new Node (lastin);
  			// add the last node
			start.append(tlast);
  			// print the list again
			start.print();
	  	}
	  	break;
	  	// testing replaceWith
	  	case 5: {
	  		// print the list
			start.print();
  			// set the position to replace
  			unsigned posins = 5;
			// set the new integer
			int replin = 0;
  			// replace the node
			Node *repl = new Node (replin);
			Node *point = NULL;
			point = &start;
			unsigned ipos = 1;		
			while (ipos < posins) {
				point = point -> getNext();
				ipos++;
			}
			point -> replaceWith(repl);
  			// print the list again
			start.print();
	  	}
          	break;
	  	// testing find
	  	case 6: {
			// print the list
			start.print();
			// (do not) find the node with value 0
			Node* t = start.find(0);
			if (t == NULL) {
				cout << "The value 0 is not in the list" << endl;		
			}
	  	}
  	  	break;
	  	// testing erase (1)
	  	case 7: {
			// print the list
			start.print();
			// erase the last element
			Node* t1 = start.find(10);
			t1 -> erase();
			// print the list again
			start.print();
	  	}
  	  	break;
		// testing erase (2)
		case 8: {
			// print the list
			start.print();
			// (do not) erase the first element
			Node* t2 = start.find(1);
			t2 -> erase();
			// print the list again
			start.print();
	  	}
  	  	break;
		// testing getPrevious
          	case 9: {
  	  		// print the list
			start.print();
			// find the node with value 5
			Node* t5 = start.find(5);
			// find the previous node
			Node* t4 = t5 -> getPrevious();
			// print the previous value
			cout << "The value which comes before 5 is " << t4 -> getData() << endl;
	  	}				
	  	break;
		// testing default constructor
		case 10: {
  	  		Node zero;
			cout << "A new node has been created with value " << zero.getData() << endl;
	  	}				
	  	break;

  	}

  	return 0;

}
