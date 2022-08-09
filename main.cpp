#include <iostream>

#include "consec_type_container.hpp"
#include "list_type_container.hpp"

int main() {
  std::cout << std::endl
            << "========== Consecuence-type container ========== " << std::endl;

  // creating a container object to hold objects of type int
  ConsecTypeContainer<int> ctcontainer;

  // adding ten elements to the container
  std::cout << "add 10 elements (0 - 9):" << std::endl;
  for (int i = 0; i < 10; i++) {
    ctcontainer.push_back(i);
  }

  // displaying the contents of a container
  ctcontainer.print_all();

  // displaying the size of the container
  std::cout << "container size = " << ctcontainer.size() << std::endl;

  // removal of the third (in a row), fifth and seventh elements
  std::cout << "remove 3, 5, 7 elements:" << std::endl;
  ctcontainer.remove(3);
  ctcontainer.remove(4);
  ctcontainer.remove(5);

  // displaying the contents of a container
  ctcontainer.print_all();

  // adding element 10 to the beginning of the container
  std::cout << "add 10 to the beginning:" << std::endl;
  ctcontainer.insert(0, 10);

  // displaying the contents of a container
  ctcontainer.print_all();

  // adding element 20 to the middle of the container
  std::cout << "add 20 in the middle:" << std::endl;
  ctcontainer.insert(4, 20);

  // displaying the contents of a container
  ctcontainer.print_all();

  // adding element 30 to the end of the container
  std::cout << "add 30 to the end:" << std::endl;
  ctcontainer.push_back(30);

  // displaying the contents of a container
  ctcontainer.print_all();

  std::cout << std::endl
            << "============== List-type container ============= " << std::endl;

  // creating a container object to hold objects of type int
  ListTypeContainer<int> ltcontainer;

  // adding ten elements to the container (0, 1 ... 9)
  std::cout << "add 10 elements (0 - 9):" << std::endl;
  for (int i = 0; i < 10; i++) {
    ltcontainer.push_back(i);
  }

  // displaying the contents of a container
  ltcontainer.print_all();

  std::cout << "container size = " << ltcontainer.size() << std::endl;

  // removal of the third (in a row), fifth and seventh elements
  std::cout << "remove 3, 5, 7 elements:" << std::endl;
  ltcontainer.remove(3);
  ltcontainer.remove(4);
  ltcontainer.remove(5);

  // displaying the contents of a container
  ltcontainer.print_all();

  // adding element 10 to the beginning of the container
  std::cout << "add 10 to the beginning:" << std::endl;
  ltcontainer.insert(0, 10);

  // displaying the contents of a container
  ltcontainer.print_all();

  // adding element 20 to the middle of the container
  std::cout << "add 20 in the middle:" << std::endl;
  ltcontainer.insert(4, 20);

  // displaying the contents of a container
  ltcontainer.print_all();

  // adding element 30 to the end of the container
  std::cout << "add 30 to the end:" << std::endl;
  ltcontainer.push_back(30);

  // displaying the contents of a container
  ltcontainer.print_all();

  return (0);
}
