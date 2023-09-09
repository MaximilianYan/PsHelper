#include "include.h"

int main() {
    Browser browser;
    browser.addField("mode", "mode value");
    browser.addField("scale", "100");
    browser.addField("name", "~~!&&");
    browser.draw();

    while (1) {
        browser.readInput();
        browser.draw();
    }
}
