#include "include.h"

int main() {
    Menu menu;
    menu.add("mode", "photo");
    menu.add("basefile", "D:/Users/Maximilian/Downloads/E0C2u6S7YMo.jpg");
    menu.add("extrafile", "D:/Users/Maximilian/Downloads/9v7rAiWU-jg.jpg");
    menu.add("scale", "100");

    menu.add("exit", Menu::Command::exit);
    menu.add("update", Menu::Command::update);
    // menu.add("transform", transformCom);
    // menu.add("brush", brushCom);
    // menu.add("save", saveCom);

    // imshow("preShow", Mat(1, 1, CV_8UC3));
    // setMouseCallback("preShow", Mouse::callBack, (void*)(&callbackBrush));

    // menu.draw();


    Browser browser;
    browser.addField("mode", "mode value");
    browser.addField("scale", "100");
    browser.addField("name", "~~!&&");
    browser.draw();

    while (menu.getState() != Menu::INACTIVE) {
        // menu.checkInput();

        browser.readInput();
        browser.draw();


        // Mouse::waitKey(10);
    }

    // destroyAllWindows();

    // std::cout << "Hello, from PsHelper!\n";
}
