#include "GenericPlayer.h"

bool GenericPlayer::isBoosted() const {
    return Hand::GetTotal() > 21;
}

void GenericPlayer::Bust() const {
    std::cout << "The player " << _name << " has too many points!" << std::endl;
}
