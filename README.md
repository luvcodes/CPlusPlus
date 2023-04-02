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
- 2.4 函数[]()
  - 不要混淆函数原型和函数定义。可以看出，原型只描述函数接口。也就是说，它描述的是发送给函数的信息和返回的信息。而定义中包含了函数的代码，如计算平方根的代码。
      C和C++将库函数的这两项特性（原型和定义）分开了。库文件中包含了函数的编译代码，而头文件中则包含了原型。

#### Chapter 3 - 处理数据

- 3.1 简单变量
  - 3.1.3 整型short、int、long和long long
    - 4种类型都是**符号类型**，意味着每种类型的取值范围中，负值和正值几乎相同。
    - C++工具来检查类型的长度：
      - `sizeof`运算符返回类型或变量的长度，单位为字节。对类型名（如int）使用sizeof运算符时，应将名称放在括号中`sizeof(int)`。对变量名使用sizeof运算符时，括号是可选的`sizeof n_short`
      - 头文件`climits`中包含了关于整型限制的信息
  - 3.1.4 无符号类型 **重点在于不能存储负数值** 要创建无符号版本的基本整形，使用关键字`unsigned`来修改声明即可
    - unsigned本身是unsigned int的缩写
    - C++确保了无符号类型的这种行为；但C++并不保证符号整型超越限制（上溢和下溢）时不出错。**见page 117**
  - 3.1.8 char类型
    - `cout.put()`方法 显示字符
    - signed char和unsigned char。unsigned char类型的表示范围通常为0～255，而signed char的表示范围为−128到127
    - **给char型变量赋值数字时，相当于char型已经变成了Int类型** 并且 **char型变量 只能和int型变量在有限范围内共通**
- 3.3 浮点数
  - C++有两种书写浮点数的方式：
    1. 使用常用的标准小数点表示法
    2. E表示法 **最适合于非常大和非常小的数** 举例：`3.45E6` 这指的是3.45与1000000相乘的结果; `E6`指的是10的6次方，`3.45E6`表示的是3450000，6被称为指数，3.45被称为尾数。
       1. **指数可以是正数也可以是负数** 指数为负数意味着除以10的乘方。例如`8.33E~4`表示`8.33/(10^4)`。`-8.33E4`指的是`-83300`, **前面的负号用于数值，而指数的负号用于缩放**
  - C++有三种浮点类型 **float, double, long double**
  - 有效位的概念 指的是数字中有意义的位。有效位数不依赖于小数点的位置。14.162千英尺，这样仍有5个有效位，因为这个值精确到了第5位。
  - **float保留6位有效位 double保留15位有效位**
- 3.4 C++算术运算符
  - 3.4.4 类型转换

#### Chapter 4 - 复合类型
- 4.1 数组
  - 将sizeof运算符用于数组名，得到的将是整个数组中的字节数。但如果将sizeof用于数组元素，则得到的将是元素的长度（单位为字节）
  - 4.1.2 数组的初始化规则
    - 只有在定义数组时才能使用初始化，此后就不能使用了，也不能将一个数组赋给另一个数组
- 4.2 字符串
  - 存储在连续字节中的一系列字符意味着可以将字符串存储在char数组中，其中每个字符都位于自己的数组元素中。
  - **字符串常量（使用双引号）不能与字符常量（使用单引号）互换** 举例说明，`char shirt_size = 'S'`'S'只是83的另一种写法，这就是将83赋给shirt_size。
  - "S"不是字符常量，它表示的是两个字符(字符S和\0)组成的字符串。"S"实际上表示的是字符串所在的内存地址，因此`char shirt_size = "S"`是不通过的。
  - 4.2.2 在数组中使用字符串
  - 4.2.3 字符串输入
  - 4.2.4 每次读取一行字符串输入 `getline()`和`get()`
    - `getline()`getline( )函数读取整行，它使用通过回车键输入的换行符来确定输入结尾。该函数有两个参数，第一个参数是用来存储输入行的数组的名称，第二个参数是要读取的字符数。如果这个参数为20，则函数最多读取19个字符，余下的空间用于存储自动在结尾处添加的空字符。
    - `get()`与getline( )类似，但get并不再读取并丢弃换行符，而是将其留在输入队列中。使用不带任何参数的cin.get()调用 可读取下一个字符（即使是换行符，因此可以用它来处理换行符，为读取下一行输入做好准备。![img.png](img.png)
    - **getline( )使用起来简单一些，但get( )使得检查错误更简单些**
- 4.3 string类简介
  - 
#### 位运算符
