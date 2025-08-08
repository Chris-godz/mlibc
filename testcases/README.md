# mlibc PSE51 测试套件

本目录包含了针对 mlibc 库的 PSE51 (IEEE 1003.13-2003) 标准兼容性测试用例。

## 快速开始

```bash
# 构建所有测试
./build

# 运行所有测试
./test

# 仅构建/测试 PC 版本
./build pc
./test pc

# 仅构建/测试嵌入式版本
./build embedded
./test embedded

# 运行特定测试
./test pc assert      # 仅运行 PC 版 assert 测试
./test embedded string # 仅运行嵌入式版 string 测试
```

## 目录结构

```
testcases/
├── build          # 构建脚本
├── test           # 测试脚本
├── Makefile       # 主 Makefile
├── test_colors.h  # 彩色输出支持
├── PSE51.md       # PSE51 标准支持详情
├── assert/        # assert.h 测试
├── ctype/         # ctype.h 测试
├── fcntl/         # fcntl.h 测试
├── locale/        # locale.h 测试
├── signal/        # signal.h 测试
├── stat/          # sys/stat.h 测试
├── stdio/         # stdio.h 测试
├── stdlib/        # stdlib.h 测试
├── string/        # string.h 测试
├── time/          # time.h 测试
├── unistd/        # unistd.h 测试
└── utsname/       # sys/utsname.h 测试
```

## 测试特性

- **双平台支持**: 每个测试都支持 PC 和嵌入式（QEMU RISC-V 32）环境
- **彩色输出**: 测试结果使用彩色标记，绿色 ✓ 表示通过，红色 ✗ 表示失败
- **完整覆盖**: 覆盖 PSE51 标准要求的所有函数和功能
- **POSIX 兼容**: 测试用例设计遵循 POSIX 规范

## 使用说明

### 基本用法

```bash
./build         # 构建所有测试（PC + 嵌入式）
./test          # 运行所有测试

./build help    # 查看构建帮助
./test help     # 查看测试帮助
```

### 高级用法

#### 仅测试特定平台
```bash
./build pc      # 仅构建 PC 测试
./test pc       # 仅运行 PC 测试

./build embedded # 仅构建嵌入式测试
./test embedded  # 仅运行嵌入式测试
```

#### 测试特定模块
```bash
./test pc stdio    # 仅运行 PC 版 stdio 测试
./test all string  # 运行 string 的所有版本测试
```

### 使用 Makefile

```bash
make pc-build       # 构建 PC 测试
make embedded-build # 构建嵌入式测试
make test-all       # 运行所有测试
```

## 测试输出说明

- 🟦 蓝色: 测试开始
- ✅ 绿色: 测试通过
- ❌ 红色: 测试失败
- ⚠️ 黄色: 警告或跳过

## 环境要求

### PC 测试要求
- 支持 C99 标准的编译器
- POSIX 兼容的操作系统

### 嵌入式测试要求
- RISC-V 32位交叉编译工具链
- QEMU RISC-V 系统模拟器

```bash
# Ubuntu/Debian 安装
sudo apt-get install gcc-riscv64-unknown-elf qemu-system-misc
```

## 测试覆盖率

- ✅ **完全覆盖**: stdio.h, stdlib.h, string.h, ctype.h, assert.h
- ✅ **基本覆盖**: time.h, signal.h, fcntl.h, unistd.h
- ✅ **部分覆盖**: sys/stat.h, locale.h, sys/utsname.h

## 相关文档

- [PSE51.md](PSE51.md) - PSE51 标准接口实现状态
- [mlibc CLAUDE.md](../CLAUDE.md) - mlibc 项目概述