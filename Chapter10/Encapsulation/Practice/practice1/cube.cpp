#include <iostream>
using namespace std;

class Cube
{
public:
    void setL(int l) { m_L = l; }
    int getL() { return m_L; }
    void setW(int w) { m_W = w; }
    int getW() { return m_W; }
    void setH(int h) { m_H = h; }
    int getH() { return m_H; }

    // 获取立方体面积
    int calculateS()
    {
        return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_W + 2 * m_H;
    }

    // 获取立方体体积
    int calculateV()
    {
        return m_H * m_L * m_W;
    }

    // 利用成员函数判断两个立方体是否相等
    bool isSameByClass(Cube &c)
    {
        if (m_L == c.getL() && m_H == c.getH() && m_W == c.getW())
        {
            return true;
        }
        return false;
    }

private:
    int m_L;
    int m_W;
    int m_H;
};

// 利用全局函数判断 两个立方体是否相等
bool isSame(Cube &c1, Cube &c2)
{
    if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    Cube c1;
    c1.setL(10);
    c1.setW(10);
    c1.setH(10);

    cout << "C1 square = " << c1.calculateS() << endl;
    cout << "C1 volume = " << c1.calculateV() << endl;

    Cube c2;
    c2.setL(10);
    c2.setW(10);
    c2.setH(10);

    // 利用全局函数判断
    bool ret = isSame(c1, c2);
    if (ret == true)
    {
        cout << "Global function testing c1 and c2 are equal" << endl;
    }
    else
    {
        cout << "Global function testing c1 and c2 are not equal" << endl;
    }

    // 利用成员函数判断
    ret = c1.isSameByClass(c2);
    if (ret)
    {
        cout << "Member function testing for equal" << endl;
    }
    else
    {
        cout << "Member function testing for not equal" << endl;
    }

    return 0;
}