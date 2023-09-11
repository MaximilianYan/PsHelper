/**
 * @file Browser.h
 * @author Maximilian (https://github.com/MaximilianYan)
 * @brief Class for displaying and interaction with commands
 * @date 2023-08-29
 *
 * @copyright Copyright (c) 2023
 *
 */

#pragma once

#include <windows.h>
#include <string>
#include <vector>

#include "BrowserNode.h"
#include "NodeSubtree.h"
#include "NodeInt.h"

 /**
 * @brief Class for displaying and interaction with commands
 *
 */
class Browser {
public:
    Browser();
    ~Browser();

    void draw(); ///< Draw browser into console

    void addField(const std::string& name, const std::string& value); ///< Add new node

    void readInput(); ///< Wait for input line

private:
    HANDLE consoleHandle; ///< Handle of windows console

    NodeSubtree* activeTree;

    enum STATE {
        WAIT_NAME = 0,
        WAIT_VALUE,
    };

    STATE state;
    int activeFieldI;
};
