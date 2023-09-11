/**
 * @file NodeSubtree.h
 * @author Maximilian (https://github.com/MaximilianYan)
 * @brief
 * @date 2023-09-09
 *
 * @copyright Copyright (c) 2023
 *
 */

#pragma once

#include <vector>
#include <string>

#include "BrowserNode.h"
#include "NodeInt.h"
#include "NodeStr.h"

 /**
  * @brief Node with subtree of nodes
  *
  */
class NodeSubtree : public BrowserNode {
public:
    NodeSubtree(const std::string& name);
    ~NodeSubtree();

    int size() const;
    BrowserNode const* operator[](int i);

    void addField(const std::string& name, const std::string& value);

private:
    NodeSubtree* parent;

    std::vector<BrowserNode*> children;
};
