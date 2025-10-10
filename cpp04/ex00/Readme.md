#The main goal of exercise ex00 is to practice and demonstrate basic C++ subtype polymorphism using inheritance and virtual functions.

Specifically, it requires you to:

Implement a simple base class Animal with a virtual function makeSound() and a type attribute.

Derive classes Dog and Cat that override makeSound() to produce their own distinct sounds.

Use polymorphism so that calling makeSound() on a base class pointer calls the derived class’s version.

Implement constructors and destructors that print unique messages, showing object lifecycle and proper virtual destructor behavior.

Lastly, understand and verify how dynamic dispatch works with base pointers referring to derived objects.

This exercise builds foundational understanding of virtual functions, inheritance, and correct class design with virtual destructors in C++ polymorphism and prepares for more advanced exercises involving deep copying and abstract classes.

#Why Must We Call the Base-Class Implementation?

In C++ inheritance, your derived class contains ("is") a subobject that is the base class.

When copying, you want both the base part and derived part to be copied. The default compiler-generated version would call the base class's default copy behavior, but if you've written your own logic, you need to call it yourself, or else you might skip important work (for example, base class members or resource handling).

If you skip this step, only the derived part is copied, and the base part is constructed with the default constructor (which is often wrong for copying).

This pattern applies both to copy constructors and copy assignment: always call the base copy functionality explicitly.