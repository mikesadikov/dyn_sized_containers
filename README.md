
## Dynamically sized containers

Two implementations of a dynamically sized container - serial and list type (with demo).

1. Sequential container - a distinctive feature of such a container is the arrangement of elements one after another in a row (as in a regular C-style array).
2. List type container - does not provide guarantees for the arrangement of elements one after another in memory. Communication between elements is carried out through pointers (a pointer to the previous element and/or a pointer to the next element). 

## Build instructions:

To build the project, run the following commands:
```
mkdir build && cd build
cmake ..
cmake --build .
```
