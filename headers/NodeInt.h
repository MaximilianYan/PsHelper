/**
 * @file NodeInt.h
 * @author Maximilian (https://github.com/MaximilianYan)
 * @brief
 * @date 2023-09-09
 *
 * @copyright Copyright (c) 2023
 *
 */

#pragma once

#include "BrowserNode.h"

 /**
  * @brief Node with integer value
  *
  */
class NodeInt : public BrowserNode {
public:
    NodeInt(const std::string& name);
    ~NodeInt();
private:
};
