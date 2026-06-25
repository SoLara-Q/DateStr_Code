# DateStr_Code

![Language](https://img.shields.io/badge/language-C%2B%2B-blue)
![Status](https://img.shields.io/badge/status-learning%20notes-brightgreen)

## 项目简介

`DateStr_Code` 是一个用于记录数据结构手写实现的 C++ 学习仓库。项目以“先理解原理，再手写代码，再用样例验证”为主线，适合用于数据结构课程复习、机试前模板整理，以及后续算法竞赛基础能力沉淀。

目前仓库主要覆盖线性表与图相关内容，后续可以继续补充栈、队列、串、树、查找和排序等模块。

## 项目特点

- 使用 **C++** 手写常见数据结构，便于理解底层实现。
- 按数据结构章节拆分目录，方便复习和查找。
- 部分代码配有 `.in` 输入样例，可用于快速测试。
- 同时保留图相关 Markdown 知识点总结，适合和代码实现配合学习。
- 适合作为个人数据结构学习记录仓库，也可以逐步扩展成完整的 C++ 数据结构模板库。

## 目录结构

```text
DateStr_Code
├── LinearList
│   ├── SqList
│   │   ├── dynamic.cpp        # 动态顺序表
│   │   ├── dynamic.in         # 动态顺序表测试输入
│   │   ├── static.cpp         # 静态顺序表
│   │   └── static.in          # 静态顺序表测试输入
│   └── LinkedList
│       ├── headLinkedList.cpp # 带头结点单链表
│       ├── headLinkedList.in  # 单链表测试输入
│       ├── dbLinkedList.cpp   # 双链表
│       ├── dbLinkedList.in    # 双链表测试输入
│       └── CLinkList.cpp      # 循环链表
├── Graph
│   └── 图知识点总结.md
└── cpp
    └── test.cpp
```

## 已完成内容

| 模块 | 内容 | 状态 | 对应文件 |
|---|---|---|---|
| 顺序表 | 动态顺序表 | 已完成 | `LinearList/SqList/dynamic.cpp` |
| 顺序表 | 静态顺序表 | 已完成 | `LinearList/SqList/static.cpp` |
| 链表 | 带头结点单链表 | 已完成 | `LinearList/LinkedList/headLinkedList.cpp` |
| 链表 | 双链表 | 已完成 | `LinearList/LinkedList/dbLinkedList.cpp` |
| 链表 | 循环链表 | 已完成 | `LinearList/LinkedList/CLinkList.cpp` |
| 图 | 图论知识点总结 | 已整理 | `Graph/图知识点总结.md` |

## 后续计划

| 分类 | 待补充内容 |
|---|---|
| 线性表 | 静态链表 |
| 栈 | 顺序栈、链栈、括号匹配、表达式求值 |
| 队列 | 顺序队列、链队列、双端队列、队列应用 |
| 串 | 串的基本操作、朴素模式匹配、KMP 算法 |
| 树 | 二叉树存储、遍历、线索二叉树、哈夫曼树、并查集 |
| 图 | 邻接矩阵、邻接表、十字链表、BFS、DFS、Prim、Kruskal、Dijkstra、Floyd、拓扑排序 |
| 查找 | 折半查找、分块查找、二叉排序树、AVL、红黑树、B 树 |
| 排序 | 插入排序、希尔排序、冒泡排序、快速排序、选择排序、堆排序、归并排序、基数排序、计数排序、外部排序 |

## 快速运行

### Windows / PowerShell

以动态顺序表为例：

```powershell
g++ .\LinearList\SqList\dynamic.cpp -std=c++17 -O2 -o dynamic.exe
.\dynamic.exe
```

如果要使用输入文件测试：

```powershell
.\dynamic.exe < .\LinearList\SqList\dynamic.in
```

### Linux / macOS

```bash
g++ ./LinearList/SqList/dynamic.cpp -std=c++17 -O2 -o dynamic
./dynamic < ./LinearList/SqList/dynamic.in
```

## 推荐学习顺序

1. 先看顺序表：理解数组存储、下标访问、插入删除时元素移动。
2. 再看链表：理解指针、结点、头结点、前驱后继关系。
3. 然后补充栈和队列：掌握受限线性表的典型应用。
4. 接着学习串、树、图：重点理解结构关系和遍历思想。
5. 最后整理查找和排序：形成完整的数据结构基础模板。

## 代码提交建议

为了让仓库更清晰，建议后续提交时遵循下面的格式：

```text
模块名/
├── xxx.cpp   # 源代码
├── xxx.in    # 测试输入
└── README.md # 当前模块说明，可选
```

同时建议在仓库根目录添加 `.gitignore`，避免提交编译生成文件：

```gitignore
*.exe
*.out
*.o
*.obj
.vscode/
```

## 适用场景

- 数据结构课程复习
- C++ 手写数据结构练习
- 期末考试和机试准备
- 算法竞赛基础模板整理
- GitHub 个人学习仓库展示

## 项目地址

```text
https://github.com/SoLara-Q/DateStr_Code
```
