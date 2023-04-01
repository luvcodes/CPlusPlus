cmake_minimum_required(VERSION 3.25)
project(Chapter2)

set(CMAKE_CXX_STANDARD 17)

add_executable(Chapter2 main.cpp Function/ourfunc.cpp Function/convert.cpp ../Chapter3/main.cpp ../Chapter3/变量长度/limits.cpp ../Chapter3/变量长度/limits.cpp ../Chapter3/变量长度/limits.cpp ../Chapter3/变量长度/limits.cpp ../Chapter3/main.cpp ../Chapter3/超越整型限制/exceed.cpp "../Chapter3/ 整型字面值/hexoct.cpp" "../Chapter3/ 整型字面值/hexoct2.cpp" ../Chapter3/CharType/chartype.cpp ../Chapter3/CharType/morechar.cpp ../Chapter3/类型转换/assign.cpp)
