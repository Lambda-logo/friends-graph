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

    // �������� ������ ��� ����� ��� �����������

    return 0;
}