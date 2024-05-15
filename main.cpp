#include "Person.h" // Изменили на использование кавычек для указания относительного пути
#include <iostream>
#include <queue>
#include <set>
#include <map>

void findPairsThroughHandshakes(Person* start, int level, std::set<std::pair<std::string, std::string>>& pairs);

int main2() {
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

    std::set<std::pair<std::string, std::string>> pairs;

    // Запускаем алгоритм для каждого человека
    for (const auto& person : people) {
        findPairsThroughHandshakes(&person.second, 3, pairs);
    }

    // Выводим все пары знакомств через три рукопожатия
    for (const auto& pair : pairs) {
        std::cout << pair.first << " и " << pair.second << " знакомы через три рукопожатия.\n";
    }

    return 0;
}

void findPairsThroughHandshakes(Person* start, int level, std::set<std::pair<std::string, std::string>>& pairs) {
    // Тело функции findPairsThroughHandshakes
}