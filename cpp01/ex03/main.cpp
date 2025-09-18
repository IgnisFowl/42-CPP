#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(){
    {
        Weapon sword("katana");
        HumanA kenzo("Kenzo", sword);
        kenzo.attack();
        sword.setType("longsword");
        kenzo.attack();
    }
    {
        Weapon sword("claymore");
        HumanB musashi("Musashi");
        musashi.attack();
        musashi.setWeapon(sword);
        musashi.attack();
        sword.setType("katana");
        musashi.attack();
    }

    return 0;
}