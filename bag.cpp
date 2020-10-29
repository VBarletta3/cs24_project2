#include "bag.h"
#include<iostream>

// YOU CAN INCLUDE OTHER HEADER FILES HERE IF NEEDED
// DO NOT ADD THE FOLLOWING HEADERS:
// 1. <vector>, 2. <queue>, 3. <deque>, 4. <stack>,
// 5. <map>, 6. <algorithm>, 7. <set>, 8. <utility>
// In summary do not use any built-in data structures
// other than arrays. Also, do not use any built-in
// algorithms related to sorting and searching

// you are allowed to use the header files: <cstring>, <string>
// you can use the string manipulation functions
// provided by those header files if needed

using namespace std;

// implementation of word constructor; you may modify this if required
Word::Word(std::string name){
  word = name;
  count = 1;
}
int Word::getCount() const{
  return count;
}
void Word::setCount(int counter) {
  count = counter;
}
std::string Word::getWord() const {
  return word;
}


// Implement the print_words function
void Bag::print_words() {
  for(int i = 1; i < used; i++) {
    cout << container[i].getWord() << "::" << container[i].getCount() << endl;
  }
}
void Bag::add(std::string word) {
for(int i = 0; i < used; i++) {
    if(search(word, i) >= 0) {
      break;
    }
    else if(container[i].getWord() != word && i == used-1) {
      Word newWord(word);
      container[used] = newWord;
      used++;
      break;
    } 
  }  
}
int Bag::search(std::string word, int index) {
    if(container[index].getWord() == word) {
      container[index].setCount(container[index].getCount() + 1);
      return index;
    }
    else {
      return -1;
    }
}



// Implement any other memeber functions you may have
// added to the class definitions
