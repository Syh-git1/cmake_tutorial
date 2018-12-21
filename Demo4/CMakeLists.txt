cmake_minimum_required(VERSION 3.10)
project(Demo4)

set(CMAKE_CXX_STANDARD 11)
# 加入一个配置头文件，用于处理CMake对源码的设置
configure_file (
        "${PROJECT_SOURCE_DIR}/myconfig.h.in"
        "${PROJECT_BINARY_DIR}/myconfig.h"
)

# 是否使用自己的MathFunctions库
option (USE_MYMATH
        "Use provided math implementation" ON)


# 是否加入MathFunctions 库
if (USE_MYMATH)
    include_directories ("${PROJECT_SOURCE_DIR}/math")
    add_subdirectory (math)
    set (EXTRA_LIBS ${EXTRA_LIBS} MathFunctions)
endif (USE_MYMATH)

# 查找当前目录下的所有源文件
# 并将名称保存到DIR_SRCS变量
aux_source_directory(. DIR_SRCS)

# 指定生成目标
add_executable (Demo4 ${DIR_SRCS})
target_link_libraries (Demo4  ${EXTRA_LIBS})