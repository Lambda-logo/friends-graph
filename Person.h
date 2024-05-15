#pragma once
#include <iostream>
#include <vector>
#include <map>

struct Person {
    std::string name;
    std::vector<Person*> friends;
};

int main() {
    std::map<std::string, Person> people;

    // Создаем всех людей с их именами
    Person oleg{ "Олег" };
    Person nikita{ "Никита" };
    Person nastya{ "Настя" };
    Person vanya{ "Ваня" };
    Person zhenya{ "Женя" };

    // Соединяем их через дружбу
    oleg.friends = { &nikita };
    nikita.friends = { &nastya, &vanya };
    nastya.friends = { &zhenya, &vanya };
    vanya.friends = { &zhenya };

    // Добавляем их в карту
    people["Олег"] = oleg;
    people["Никита"] = nikita;
    people["Настя"] = nastya;
    people["Ваня"] = vanya;
    people["Женя"] = zhenya;

    // Алгоритм поиска пар через три рукопожатия

    return 0;
}