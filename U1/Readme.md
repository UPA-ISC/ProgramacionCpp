# Program structure in C++
![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)
Main program structure in c++


<div align ="center">
<img alt="c++" height="250" src="../imagenes/programParts.png"/>
</div>

## Preprocessor directives
Preprocessing directives are always processed before the program is compiled. They start with "#" symbol.

```c++
#include <iostream>
```
In this case, the preprocessing directive include the iostream library wich is used to control the input/output stream header.

## Main Function

C++ programs consist in one or more functions that are executed when they are called. When the program is executed the main function is the first function called.

```c++
int main(){
    std::cout << "Hello World";
    return 0;
}
```
## Functions
The parenthesis after "funcion" indicate that funcion is a program buildin block called a function. The body of a function is set between braces {}.
```c++
    void funcion(){
        std::cout << "This is a function";
    }
```
To execute a function it must be called by other function.


![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)
