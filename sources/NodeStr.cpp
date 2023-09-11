#include "NodeStr.h"

NodeStr::NodeStr(const std::string& name) :
    BrowserNode(name),
    value() {
}

NodeStr::NodeStr(const std::string& name, const std::string& value) : NodeStr(name) {
    setValue(value);
}

NodeStr::~NodeStr() {

}

void NodeStr::setValue(const std::string& value) {
    this->value = value;
    setValueView(this->value);
}
