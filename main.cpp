// Hello world!

#include <iostream>
#include <fstream>
#include <list>
#include <cassert>
#include <cstdlib>

int main(int argc, char* argv[]) {

  // process command line arguments
  /*if (argc != 3) {
    std::cerr << "ERROR: incorrect number of command line arguments" << std::endl;
    std::cerr << "USAGE:   " << argv[0] << " <input_file> <output_file>" << std::endl;
    exit(1);
  }
  // open the input file for parsing
  std::ifstream istr(argv[1]);
  if (!istr) {
    std::cerr << "ERROR: could not open input file " << argv[1] << std::endl;
    exit(1);
  }*/

 std::list<int> intList;

    for(int i=0; i<argc; i++){
        int temp = std::atoi(argv[i]);
        intList.push_back(temp);
    }

    //std::list<int>::iterator it = intList.begin();
    //std::list<int>::reverse_iterator rit = intList.rbegin();

    std::list<int>::reverse_iterator it = intList.rbegin();
    while (it != intList.rend()) {
        std::cout << (3)*(*it) << std::endl;
        it++;
    }

    return 0;
  
  //std::cout << "Gluten Tag!" << std::endl;
  
}