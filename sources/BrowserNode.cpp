#include "BrowserNode.h"

using namespace std;

BrowserNode::BrowserNode(const std::string& name) :
    name(name),
    valueView() {

}

BrowserNode::~BrowserNode() {
}

string BrowserNode::getName() const {
    return name;
}

string BrowserNode::getValueView() const {
    return valueView;
}

void BrowserNode::setValueView(const string& valueView) {
    this->valueView = valueView;
}
