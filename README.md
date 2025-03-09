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
