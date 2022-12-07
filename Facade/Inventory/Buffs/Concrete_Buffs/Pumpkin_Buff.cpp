//
// Created by Даниил Павлов on 26.11.2022.
//

#include "Pumpkin_Buff.h"

void Pumpkin_Buff::execute() {
    Singleton_Hero* hero = Singleton_Hero::getInstance();
    hero->set_hero_attribute(Singleton_Hero::experience,
                             hero->get_hero_attribute(Singleton_Hero::experience) + 1);
}

IBuff::type Pumpkin_Buff::get_type() {
    return IBuff::XP_BUFF;
}

IBuff::part Pumpkin_Buff::get_part() {
    return IBuff::MASK;
}
