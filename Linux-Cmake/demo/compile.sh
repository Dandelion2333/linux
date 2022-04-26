# 创建build目录，用来管理编译相关输出
rm -rf build
cmake -S . -B build

# 编译
cd build
make

# 复制可执行文件到主目录
cp Main ../

