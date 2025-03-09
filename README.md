# lcc: A Based Of LLVM C Compiler

## Current Status: 

|  Module     | Status     |     
|  ----       |------------|   
| Preprocess  | 1          |   
| Lexer       | 1          |      
| Parser      | 1          |       
| Semantics   | 0          |       
| CodeGen     | 0          |    

## Compile and Run

### Install the latest LLVM library or Build LLVM manually
1, sudo apt-get update
2, sudo apt-get -y install llvm-12

二：Build LLVM manually

```
git clone https://github.com/llvm/llvm-project.git
cd llvm-project/llvm  && mkdir llvm_install_dir && mkdir build
cd build
cmake -GNinja -DCMAKE_BUILD_TYPE=Debug -DCMAKE_INSTALL_PREFIX=../llvm_install_dir ../llvm
```


### How to use lcc

一：Compile

```
1, git clone git@github.com:iiicp/lcc.git
2, cd lcc && mkdir build && cd build 
3, cmake -GNinja -DLLVM_DIR="Path to Your LLVM CMake dir" ..
4, ninja 
```

二：Run

lcc support --dumpTokens and --dumpAst command line options
```  
./lcc --help
./lcc -emit-tokens ../tests/c/stmt.c
./lcc -emit-ast ../tests/c/stmt.c 
```

## lcc unsupported c99 language features

1. unicode char     
2. _Complex      
3. direct-declarator ( identifier-list{opt} )     
eg: int f(a, b) int a,b {return a+b;}


## Reference   

- [cld](https://github.com/zero9178/cld)        
- [chibicc](https://github.com/rui314/chibicc)        
- [ucc](https://github.com/sheisc/ucc162.3)   

[1]: https://space.bilibili.com/181099947