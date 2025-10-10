c++ -Wall -Wextra -Werror -std=c++98   -c -o main.o main.cpp
main.cpp: In function ‘int main()’:
main.cpp:18:12: error: cannot declare variable ‘a’ to be of abstract type ‘Animal’
   18 |     Animal a;
      |            ^
In file included from main.cpp:13:
Animal.hpp:19:7: note:   because the following virtual functions are pure within ‘Animal’:
   19 | class Animal {
      |       ^~~~~~
Animal.hpp:29:22: note:     ‘virtual void Animal::makeSound() const’
   29 |         virtual void makeSound() const = 0;
      |                      ^~~~~~~~~
make: *** [<builtin>: main.o] Error 1

#This is the compiling error we get when trying to create a new object Animal.