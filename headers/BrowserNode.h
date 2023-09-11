/**
 * @file BrowserNode.h
 * @author Maximilian (https://github.com/MaximilianYan)
 * @brief Parent class for browser nodes
 * @date 2023-09-09
 *
 * @copyright Copyright (c) 2023
 *
 */

#pragma once

#include <string>

 /**
  * @brief Parent class for one node in browser tree. Can contain string, number, command, subtree, etc.
  *
  */
class BrowserNode {
public:
    BrowserNode(const std::string& name);

    ~BrowserNode();

    std::string getName() const;
    std::string getValueView() const;

protected:
    void setValueView(const std::string& valueView);

private:
    std::string name;
    std::string valueView;
};
