#include "NodeSubtree.h"

using namespace std;

NodeSubtree::NodeSubtree(const std::string& name) :
    BrowserNode(name),
    parent(nullptr),
    children() {

}

NodeSubtree::~NodeSubtree() {
    for (BrowserNode* child : children)
        delete child;
}

int NodeSubtree::size() const {
    return children.size();
}

BrowserNode const* NodeSubtree::operator[](int i) {
    return children[i];
}

void NodeSubtree::addField(const string& name, const string& value) {
    children.push_back(new NodeStr(name, value));
}

