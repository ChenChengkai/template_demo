
- [template demo](#template-demo)
- [introduction](#introduction)
- [MyArray.hpp](#myarrayhpp)
- [main.cpp](#maincpp)
- [build \&\& run](#build--run)
- [results](#results)

# template demo 

&emsp;&emsp;这是黑马程序员的关于模板的学习笔记，代码比较短，但是比较完整的介绍了类模板的使用。

# introduction

&emsp;&emsp;案例描述：实现一个通用数组类，要求如下：
- 可以对内置数据类型以及自定义数据类型进行存储；
- 将数组中的数据存储到堆区；
- 沟槽函数中可以传输数组的容量；
- 提供对应的拷贝构造函数以及operator=防止浅拷贝问题；
- 提供尾插法和尾删法对数组中的数据进行增加和删除；
- 可以通过下标的方式访问数组中的元素；
- 可以获取数组中当前元素个数的和数组的容量；

# MyArray.hpp

&emsp;&emsp;一般类模板约定成俗用.hpp结尾的文件（头文件和源文件内容不多的情况，也可以用.hpp文件，看个人习惯和团队风格）。创建MyArray类，添加私有成员：数组、容量、大小，添加共有函数：构造函数、拷贝构造、析构函数、operator=（防止浅拷贝）、利用下标访问数组中的元素、尾插法、尾删法、获取数组容量、大小函数。

# main.cpp

&emsp;&emsp;对MyArray类进行测试，分别用内置类型int和自定义类型Person进行验证。

# build && run
```cpp
mkdir build && cd build
cmake ..
make
./main
```

# results
```cpp
testIntArray
arr容量为：5 大小为：5
0 1 2 3 4 
Pop_back之后：
arr容量为：5 大小为：4
0 1 2 3 
Push_back
arr容量为：5 大小为：5
0 1 2 3 6 
testPersonArray
姓名：刘备 年龄：30
姓名：关羽 年龄：28
姓名：张飞 年龄：26
姓名：赵云 年龄：24
姓名：马超 年龄：22
Pop_back之后：
arr容量为：5 大小为：4
姓名：刘备 年龄：30
姓名：关羽 年龄：28
姓名：张飞 年龄：26
姓名：赵云 年龄：24
Push_back
arr容量为：5 大小为：5
姓名：刘备 年龄：30
姓名：关羽 年龄：28
姓名：张飞 年龄：26
姓名：赵云 年龄：24
姓名：黄忠 年龄：20
```