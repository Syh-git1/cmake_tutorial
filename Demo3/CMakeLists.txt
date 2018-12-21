cmake_minimum_required(VERSION 3.10)
project(Demo3)

set(CMAKE_CXX_STANDARD 11)

# 查找目录下的所有源文件
# 并将名称保存到DIR_SRCS变量
aux_source_directory(. DIR_SRCS)

# 添加math子目录
add_subdirectory(math)

# 指定生成目标
add_executable(Demo3 ${DIR_SRCS})

# 添加链接库
target_link_libraries(Demo3 MathFunctions)