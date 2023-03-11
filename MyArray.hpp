#pragma once
#include <iostream>
#include <string>

template <class T>
class MyArray
{
private:
    T *pAddress;   // 数组地址
    int m_Capcity; // 容量
    int m_Size;    // 大小
public:
    // 默认构造函数
    MyArray()
    {
        this->pAddress = NULL;
        this->m_Capcity = 0;
        this->m_Size = 0;
    };
    // 有参构造
    MyArray(int capacity)
    {
        this->pAddress = new T[capacity];
        this->m_Capcity = capacity;
        this->m_Size = 0;
    };
    // 拷贝构造
    MyArray(const MyArray &arr)
    {
        this->m_Capcity = arr.m_Capcity;
        this->m_Size = arr.m_Size;
        this->pAddress = new T[arr.m_Capcity];
        for (int i = 0; i < arr.m_Size; i++)
        {
            this->pAddress[i] = arr.pAddress[i];
        }
    };
    // 重载=运算符
    MyArray &operator=(const MyArray &arr)
    {
        // 先判断原来堆区是否有数据，如果有，就释放
        if (this->pAddress != NULL)
        {
            this->m_Capcity = 0;
            this->m_Size = 0;
            delete[] this->pAddress;
            this->pAddress = NULL;
        }
        // 深拷贝
        this->m_Capcity = arr.m_Capcity;
        this->m_Size = arr.m_Size;
        this->pAddress = new T[arr.m_Capcity];
        for (int i = 0; i < arr.m_Size; i++)
        {
            this->pAddress[i] = arr.pAddress[i];
        }
        return *this;
    }
    void Push_back(const T &val)
    {
        if (this->m_Size >= this->m_Capcity)
        {
            return;
        }
        this->pAddress[this->m_Size] = val;
        this->m_Size++;
    }
    void Pop_back()
    {
        if (this->m_Size == 0)
        {
            return;
        }
        this->m_Size--; // 是逻辑上的删除，让用户访问不到即可
    }
    T &operator[](int index) const
    {
        if (index >= 0 && index < this->m_Size)
        {
            return this->pAddress[index];
        }
    }
    // 返回数组容量
    int getCapacity() const
    {
        return this->m_Capcity;
    }
    // 返回数组大小
    int getSize() const
    {
        return this->m_Size;
    }
    ~MyArray()
    {
        // 先判断原来堆区是否有数据，如果有，就释放
        if (this->pAddress != NULL)
        {
            this->m_Capcity = 0;
            this->m_Size = 0;
            delete[] this->pAddress;
            this->pAddress = NULL;
        }
    };
};
