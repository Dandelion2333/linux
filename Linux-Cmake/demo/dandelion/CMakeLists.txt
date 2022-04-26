# 查看当前路径下所有的源文件
# 并将文件名保存到DIR_LIB_SRCS变量中
aux_source_directory(. DIR_LIB_SRCS)

# 生成链接库
add_library(Dandelion_LIB ${DIR_LIB_SRCS})