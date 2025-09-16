#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main() {
    Zombie* heapZombie = newZombie("Heapy"); //creates a Zombie object on the heap and returns its pointer.
    heapZombie->announce(); //-> access function of an object through a pointer

    randomChump("Stacky"); //calls function that creates a Zombie on the stack (automatic storage), makes it announce itself and then is destroyed automatically
    delete heapZombie;

    return (0);
}