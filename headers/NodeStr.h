/**
 * @file NodeStr.h
 * @author Maximilian (https://github.com/MaximilianYan)
 * @brief
 * @date 2023-09-11
 *
 * @copyright Copyright (c) 2023
 *
 */

#pragma once

#include "BrowserNode.h"

 /**
  * @brief Node with string value
  *
  */
class NodeStr : public BrowserNode {
public:
    NodeStr(const std::string& name);
    NodeStr(const std::string& name, const std::string& value);
    ~NodeStr();

    void setValue(const std::string& value);
private:
    std::string value;
};
