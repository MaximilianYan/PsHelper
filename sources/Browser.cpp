#include "Browser.h"

#include <iostream>
#include <clocale>

#include "symbols.h"

using namespace std;

static COORD coord(const int x, const int y);

Browser::Browser() :
    consoleHandle(GetStdHandle(STD_OUTPUT_HANDLE)),
    activeTree(new NodeSubtree("ERROR!!! IT IS INTERNAL INFORMATION")),
    state(STATE::WAIT_NAME),
    activeFieldI(-1) {

    // setlocale(LC_ALL, "ru_RU.UTF-8"); // for cyrillic letters

    SetConsoleTextAttribute(consoleHandle, TEXTCOLOR);

    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    SetConsoleTitle("TODO");

    system("cls");
}

Browser::~Browser() {
    //TODO: run up
    delete activeTree;
}

void Browser::draw() {
    system("cls");
    SetConsoleCursorPosition(consoleHandle, coord(0, 0));

    for (int i = 0; i < activeTree->size(); ++i) {
        SetConsoleCursorPosition(consoleHandle, coord(0, 2 * i));

        if (i == 0) cout
            _26 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _34
            _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30
            _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _12;
        else cout
            _29 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _41
            _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30
            _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _10;

        if (i == activeFieldI) {
            SetConsoleTextAttribute(consoleHandle, CURSORCOLOR);
        } else {
            SetConsoleTextAttribute(consoleHandle, TEXTCOLOR);
        }
        SetConsoleCursorPosition(consoleHandle, coord(0, (i * 2) + 1));
        cout _11 << (*activeTree)[i]->getName();
        SetConsoleCursorPosition(consoleHandle, coord(31, (i * 2) + 1));
        cout _04 << (*activeTree)[i]->getValueView();
        SetConsoleCursorPosition(consoleHandle, coord(92, (i * 2) + 1));
        cout _11;
        if (i == activeFieldI) {
            SetConsoleTextAttribute(consoleHandle, TEXTCOLOR);
        }
    }

    SetConsoleCursorPosition(consoleHandle, coord(0, (activeTree->size() * 2)));
    cout
        _25 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _32
        _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30
        _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _13
        << endl
        _26 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30
        _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30
        _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _12
        << endl
        _11 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00
        _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00
        _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _11
        << endl
        _25 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30
        _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30
        _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _13;
    SetConsoleCursorPosition(consoleHandle, coord(1, (activeTree->size() * 2) + 2));
    cout.flush();
}

void Browser::addField(const string& name, const string& value) {
    activeTree->addField(name, value);
}

void Browser::readInput() {
    string input;
    if (!(cin >> input)) return;

    switch (state) {
    case STATE::WAIT_NAME:

        for (int i = 0; i < activeTree->size(); ++i) {
            if (input == (*activeTree)[i]->getName()) {
                activeFieldI = i;
                break;
            }
        }

        break;
    case STATE::WAIT_VALUE:
        break;
    }
}

static COORD coord(const int x, const int y) {
    COORD res = { 0 };
    res.X = x;
    res.Y = y;
    return res;
}

