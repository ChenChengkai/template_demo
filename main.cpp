#include "MyArray.hpp"

void printIntArray(const MyArray<int> &arr)
{
    for (int i = 0; i < arr.getSize(); i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void testIntArray()
{
    MyArray<int> arr(5);
    for (int i = 0; i < 5; i++)
    {
        arr.Push_back(i);
    }
    std::cout << "arr容量为：" << arr.getCapacity() << " 大小为：" << arr.getSize() << std::endl;
    printIntArray(arr);
    arr.Pop_back();
    std::cout << "Pop_back之后：" << std::endl;
    std::cout << "arr容量为：" << arr.getCapacity() << " 大小为：" << arr.getSize() << std::endl;
    printIntArray(arr);
    arr.Push_back(6);
    std::cout << "Push_back" << std::endl;
    std::cout << "arr容量为：" << arr.getCapacity() << " 大小为：" << arr.getSize() << std::endl;
    printIntArray(arr);
}
class Person
{
public:
    Person(){};
    Person(std::string name, int age)
    {
        this->m_Name = name;
        this->m_Age = age;
    };
    std::string m_Name;
    int m_Age;
};
void printPersonArray(const MyArray<Person> &arr)
{
    for (int i = 0; i < arr.getSize(); i++)
    {
        std::cout << "姓名：" << arr[i].m_Name << " 年龄：" << arr[i].m_Age << std::endl;
    }
}
void testPersonArray()
{
    MyArray<Person> arr(5);
    Person p1("刘备", 30);
    Person p2("关羽", 28);
    Person p3("张飞", 26);
    Person p4("赵云", 24);
    Person p5("马超", 22);

    arr.Push_back(p1);
    arr.Push_back(p2);
    arr.Push_back(p3);
    arr.Push_back(p4);
    arr.Push_back(p5);
    printPersonArray(arr);
    arr.Pop_back();
    std::cout << "Pop_back之后：" << std::endl;
    std::cout << "arr容量为：" << arr.getCapacity() << " 大小为：" << arr.getSize() << std::endl;
    printPersonArray(arr);
    Person p6("黄忠", 20);
    arr.Push_back(p6);
    std::cout << "Push_back" << std::endl;
    std::cout << "arr容量为：" << arr.getCapacity() << " 大小为：" << arr.getSize() << std::endl;
    printPersonArray(arr);
}

int main(int argc, char const *argv[])
{
    std::cout << "testIntArray" << std::endl;
    testIntArray();
    std::cout << "testPersonArray" << std::endl;
    testPersonArray();
    return 0;
}
