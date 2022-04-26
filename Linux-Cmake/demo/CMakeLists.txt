# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)
# 项目信息
project(demo)

execute_process(
    # 创建输出文件的路径
    COMMAND rm -rf ${PROJECT_SOURCE_DIR}/out
    COMMAND mkdir -p ${PROJECT_SOURCE_DIR}/out/include
    # 把头文件与库复制到指定位置
    COMMAND cp ${PROJECT_SOURCE_DIR}/dandelion/dandelion.h  ${PROJECT_SOURCE_DIR}/out/include
)

# 添加头文件路径
INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/out/include)

# 查找当前路径下的所有源文件
aux_source_directory(. DIR_SRCS)

# 添加dandelion路径
add_subdirectory(dandelion)

# 目标文件名输出设置
set(output_file "Main")

# 指定生成目标
add_executable(${output_file} ${DIR_SRCS})
# 链接库
target_link_libraries(${output_file} Dandelion_LIB)
