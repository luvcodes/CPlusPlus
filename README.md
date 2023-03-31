# CPlusPlus

Learning records and created based on the shifting stage of persona tech stack - from front-end to back-end.
This is more like a learning purpose repository usage, while noticed that the importance of computer operating logics, selected C++ as the language to get involved with this community. Personal Statement: Front-end based tech stack, while experienced a couple of failed interviews for the internship positions, made up my mind to learn back-end again. Re-pickup the back-end programming that lost in undergraduate period.

**I will divide the content into a menu form, based on the 'C++ Primier Plus 6th Edition' as the guidelines**

#### Chapter 2 - Start to learn C++
- 2.1 进入C++
  - 2.1.1节 main()函数; `int main() {statements; return 0;}` 这几行代码构成了**函数定义**，第一行`int main()`叫做函数头，花括号中包括的部分叫函数体。
  - 2.1.3节 C++预处理器和iostream文件
  - 2.1.6节 使用`cout`进行C++输出
    - `<<` **插入运算符** 表示该语句将把这个字符串发送给cout；该符号指出了信息流动的路径。
    - `cout`是一个预定义的对象，知道如何显示字符串、数字和单个字符等
- 2.2 C++语句
    1. 声明语句 - 创建变量; 赋值语句 - 给该变量提供一个值，赋值语句将值赋给存储单元。下面的语句将整数25赋给变量 carrots表示的内存单元：`carrots = 25;`
- 2.3 其他C++语句
- 2.4 函数
    - C++中的函数分类两种：
        - 有返回值的
        - 没有返回值的
    - 不要混淆函数原型和函数定义。可以看出，原型只描述函数接口。也就是说，它描述的是发送给函数的信息和返回的信息。而定义中包含了函数的代码，如计算平方根的代码。
      C和C++将库函数的这两项特性（原型和定义）分开了。库文件中包含了函数的编译代码，而头文件中则包含了原型。