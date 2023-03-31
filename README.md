# CPlusPlus

Learning records and created based on the shifting stage of persona tech stack - from front-end to back-end.
This is more like a learning purpose repository usage, while noticed that the importance of computer operating logics, selected C++ as the language to get involved with this community. Personal Statement: Front-end based tech stack, while experienced a couple of failed interviews for the internship positions, made up my mind to learn back-end again. Re-pickup the back-end programming that lost in undergraduate period.

**I will divide the content into a menu form, based on the 'C++ Primier Plus 6th Edition' as the guidelines**

#### Chapter 2 - Start to learn C++
- 2.1 进入C++
    1. 2.1.1节 main()函数; `int main() {statements; return 0;}` 这几行代码构成了**函数定义**，第一行`int main()`叫做函数头，花括号中包括的部分叫函数体。
        1. C++函数可被其他函数激活或调用，**函数头**描述了函数与调用它的函数之间的接口。
        2. main()被启动代码调用，`int main()`函数头描述的是main()和操作系统之间的接口。
        3. 为什么main()不能使用其他名称？如果没有main(), 程序将不完整，编译器将支出未定义main()函数。
    3. 2.1.3节 C++预处理器和iostream文件
        1. C++和C一样，也使用一个预处理器，该程序在进行主编译之前对源文件进行处理。它处理名称以`#`开头的编译指令。`#include <iostream> // a preprocessor directive`
    4. 2.1.4节 头文件名
    5. 2.1.5节 名称空间
        1. 按照这种方式，类、函数和变量便是C++编译器的标准组件，它们 现在都被放置在名称空间std中。意味着在`iostream`中定义的用于输出的cout变量实际上是`std::cout`，而endl实际上是`std::endl`。因此，可以省略**编译指令using**，![img.png](img.png)
    6. 2.1.6节 使用`cout`进行C++输出
        1. `<<` **插入运算符** 表示该语句将把这个字符串发送给cout；该符号指出了信息流动的路径。
        2. `cout`是一个预定义的对象，知道如何显示字符串、数字和单个字符等0
        3. 输出是一个流，即从程序流出的一系列字符。`cout`对象表示这种流，其属性是在`iostream`文件中定义的。`cout`的对象属性包括一个插入运算符（<<），它可以将其右侧的信息插入到流中
           总结：`cout`是`cout`对象，`<<`是插入运算符，`""`是字符串
        4. `endl` 诸如`endl`等对于`cout`来说有特殊含义的特殊符号被称为**控制符(manipulator)**
- 2.2 C++语句
    1. 声明语句 - 创建变量; 赋值语句 - 给该变量提供一个值，赋值语句将值赋给存储单元。下面的语句将整数25赋给变量 carrots表示的内存单元：`carrots = 25;`
- 2.3 其他C++语句
    1. 2.3.1 使用cin: 将输 入看作是流入程序的字符流。iostream文件将cin定义为一个表示这种流的对象
- 2.4 函数
    - C++中的函数分类两种：
        - 有返回值的
        - 没有返回值的
    - **参数是发送给函数的信息，返回值是从函数中发 送回去的值**
    - 不要混淆函数原型和函数定义。可以看出，原型只描述函数接口。
      也就是说，它描述的是发送给函数的信息和返回的信息。
      而定义中包含了函数的代码，如计算平方根的代码。
      C和C++将库函数的这两项特性（原型和定义）分开了。
      库文件中包含了函数的编译代码，而头文件中则包含了原型。
    - 