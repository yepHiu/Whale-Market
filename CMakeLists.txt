cmake_minimum_required(VERSION 3.10)
project(Whale-Market)

set(CXX_STANDARD 11)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

#自动查找添加.c和.cpp文件
aux_source_directory(./src SRC)
aux_source_directory(./src/tools SRC)
# 也可以使用file命令进行查找，file命令不单止可以查找.c和.cpp，也可以查找其他符合条件的文件
# file(GLOB MAIN_SRC ${PROJECT_SOURCE_DIR}/*.cpp)
# 添加.h文件
include_directories(${PROJECT_SOURCE_DIR}/
                    ${PROJECT_SOURCE_DIR}/include/)
# 添加可执行文件
add_executable(${PROJECT_NAME} ${SRC})