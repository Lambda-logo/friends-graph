#include "Person.h" // �������� �� ������������� ������� ��� �������� �������������� ����
#include <iostream>
#include <queue>
#include <set>
#include <map>

void findPairsThroughHandshakes(Person* start, int level, std::set<std::pair<std::string, std::string>>& pairs);

int main2() {
    std::map<std::string, Person> people;

    // ������� ���� ����� � �� �������
    Person oleg{ "����" };
    Person nikita{ "������" };
    Person nastya{ "�����" };
    Person vanya{ "����" };
    Person zhenya{ "����" };

    // ��������� �� ����� ������
    oleg.friends = { &nikita };
    nikita.friends = { &nastya, &vanya };
    nastya.friends = { &zhenya, &vanya };
    vanya.friends = { &zhenya };

    // ��������� �� � �����
    people["����"] = oleg;
    people["������"] = nikita;
    people["�����"] = nastya;
    people["����"] = vanya;
    people["����"] = zhenya;

    std::set<std::pair<std::string, std::string>> pairs;

    // ��������� �������� ��� ������� ��������
    for (const auto& person : people) {
        findPairsThroughHandshakes(&person.second, 3, pairs);
    }

    // ������� ��� ���� ��������� ����� ��� �����������
    for (const auto& pair : pairs) {
        std::cout << pair.first << " � " << pair.second << " ������� ����� ��� �����������.\n";
    }

    return 0;
}

void findPairsThroughHandshakes(Person* start, int level, std::set<std::pair<std::string, std::string>>& pairs) {
    // ���� ������� findPairsThroughHandshakes
}