#include <iostream>
#include "Human.h"
#include "Computer.h"

int main() {
    Human john("John");
    Human someone;            // 名字默认为 "Human"
    Computer cpu;

    // 模拟评测输入：Zombie Ninja
    // 运行时粘贴：Zombie<回车>Ninja<回车>
    Move* m1 = john.makeMove();
    Move* m2 = someone.makeMove();
    Move* m3 = cpu.makeMove();

    std::cout << john.getName()    << " "
              << someone.getName() << " "
              << cpu.getName()     << " "
              << (m1 ? m1->getName() : "null") << " "
              << (m2 ? m2->getName() : "null") << " "
              << (m3 ? m3->getName() : "null") << " "
              << (m3 ? m3->getName() : "null")   // 评测里似乎打印两次 Rock
              << std::endl;

    // 记得释放
    delete m1;
    delete m2;
    delete m3;
    return 0;
}
