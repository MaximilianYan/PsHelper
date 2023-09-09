#include "Browser.h"

#include <iostream>
#include <clocale>

#include "symbols.h"

using namespace std;

static COORD coord(const int x, const int y);

Browser::Browser() :
    consoleHandle(GetStdHandle(STD_OUTPUT_HANDLE)),
    fieldNames(),
    fieldValues(),
    state(STATE::WAIT_NAME) {

    // setlocale(LC_ALL, "ru_RU.UTF-8"); // for cyrillic letters

    SetConsoleTextAttribute(consoleHandle, TEXTCOLOR);

    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    SetConsoleTitle("TODO");

    system("cls");
}

Browser::~Browser() {
}

void Browser::draw() {
    system("cls");
    SetConsoleCursorPosition(consoleHandle, coord(0, 0));

    for (int i = 0; i < fieldNames.size(); ++i) {
        SetConsoleCursorPosition(consoleHandle, coord(0, 2 * i));

        if (i == 0) cout
            _26 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _34
            _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30
            _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _12;
        else cout
            _29 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _41
            _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30
            _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _10;

        if (i == 1/*inputTitleNum*/) {
            SetConsoleTextAttribute(consoleHandle, CURSORCOLOR);
        } else {
            SetConsoleTextAttribute(consoleHandle, TEXTCOLOR);
        }
        SetConsoleCursorPosition(consoleHandle, coord(0, (i * 2) + 1));
        cout _11 << fieldNames[i];
        SetConsoleCursorPosition(consoleHandle, coord(31, (i * 2) + 1));
        cout _04 << fieldValues[i];
        SetConsoleCursorPosition(consoleHandle, coord(92, (i * 2) + 1));
        cout _11;
        if (i == 1/*inputTitleNum*/) {
            SetConsoleTextAttribute(consoleHandle, TEXTCOLOR);
        }
    }

    SetConsoleCursorPosition(consoleHandle, coord(0, (fieldNames.size() * 2)));
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
    SetConsoleCursorPosition(consoleHandle, coord(1, (fieldNames.size() * 2) + 2));
    cout.flush();
}

void Browser::addField(const string& name, const string& value) {
    fieldNames.push_back(name);
    fieldValues.push_back(value);
}

void Browser::readInput() {
    string input;
    if (!(cin >> input)) return;

    switch (state) {
    case STATE::WAIT_NAME:

        for (const string& name : fieldNames) {
            if (input == name) {
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

