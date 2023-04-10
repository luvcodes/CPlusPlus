# CPlusPlus

Learning records and created based on the shifting stage of persona tech stack - from front-end to back-end.
This is more like a learning purpose repository usage, while noticed that the importance of computer operating logics, selected C++ as the language to get involved with this community. Personal Statement: Front-end based tech stack, while experienced a couple of failed interviews for the internship positions, made up my mind to learn back-end again. Re-pickup the back-end programming that lost in undergraduate period.

**I will divide the content into a menu form, based on the 'C++ Primier Plus 6th Edition' as the guidelines**

#### Chapter 2 - Start to learn C++

- 2.1 进入C++
  - C++预处理器和iostream文件
  - 使用`cout`进行C++输出
    - `<<` **插入运算符** 表示该语句将把这个字符串发送给cout；该符号指出了信息流动的路径。
    - `cout`是一个预定义的**对象**，知道如何显示字符串、数字和单个字符等

#### Chapter 3 - 处理数据

- 3.1 简单变量
  - 3.1.3 整型short、int、long和long long
    - 4种类型都是**符号类型**，意味着每种类型的取值范围中，负值和正值几乎相同。
  - 3.1.4 无符号类型 **重点在于不能存储负数值**
    - C++确保了无符号类型的这种行为；但C++并不保证符号整型超越限制（上溢和下溢）时不出错。**见page 117**
  - 3.1.8 char类型
    - signed char和unsigned char。unsigned char类型的表示范围通常为0～255，而signed char的表示范围为−128到127
    - **给char型变量赋值数字时，相当于char型已经变成了Int类型** 并且 **char型变量 只能和int型变量在有限范围内共通**
- 3.3 浮点数
  - C++有两种书写浮点数的方式：
    1. 使用常用的标准小数点表示法
    2. E表示法 **最适合于非常大和非常小的数** 举例：`3.45E6` 这指的是3.45与1000000相乘的结果; `E6`指的是10的6次方，`3.45E6`表示的是3450000，6被称为指数，3.45被称为尾数。
       1. **指数可以是正数也可以是负数** 指数为负数意味着除以10的乘方。例如`8.33E~4`表示`8.33/(10^4)`。`-8.33E4`指的是`-83300`
  - C++有三种浮点类型 **float, double, long double**

#### Chapter 4 - 复合类型

##### 数组、结构和指针是C++的3种复合类型

- 4.1 数组
  - 将sizeof运算符用于数组名，得到的将是整个数组中的字节数。但如果将sizeof用于数组元素，则得到的将是元素的长度（单位为字节）
- 4.6 枚举
  - 设置枚举量的值
    - 可以只显式地定义其中一些枚举量的值。`enum bigstep{first, second = 100, third}` first默认值是0，**后面没有被初始化的枚举量的值将比其前面的枚举量大1** third = 101
- 4.7 指针
  - 4.7.4 使用new来分配内存 **为一个数据对象获得并指定分配内存的通用格式**
  - 4.7.5 使用delete释放内存 **一定要配对地使用new和delete；否则将发生内存泄漏（memory leak）**
  - 4.7.6 使用new来创建**动态数组**
    - **静态联编**: 通过声明来创建数组，实际就是**在程序被编译时将为它分配内存空间**，用或不用它都占用内存。
    - **动态联编**: 在**运行阶段需要数组就创建**它，不需要就不创建，可以在程序运行时选择数组的长度。
    - **动态数组**: 数组是在程序运行时创建的。使用静态联编时，必须在编写程序时指定数组的长度; 使用动态联编时，程序将在运行时确定数组的长度
      - 使用new来创建动态数组
      - 使用动态数组 访问元素
  - 4.10.3 比较数组、vector对象和array对象

#### Chapter 5  - 循环和关系表达式

##### 在设计循环时，请记住下面几条指导原则

1. 指定循环终止的条件。
2. 在首次测试之前初始化条件。
3. 在条件被再次测试之前更新条件

- 5.1 For循环
  - 5.1.3 修改步长: 设置变量放到for循环里面的步长部分
  - 5.1.5 `++`和`--`的前缀和后缀
- 5.2 while循环

#### 位运算符
