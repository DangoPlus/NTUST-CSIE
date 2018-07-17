# Projects-Of-Compiler-Course
> Author : 大祥  
> StartTime: 2017-06-23 ，ModifyTime：2017-06-23

This is three small projects to implement a simple compiler for some grammar of Go programming language using Lex , Yacc and javaa programs.

project1 主要是在练习 Lex 的写法，用正则表达式 regular-expression 辨识 token。

project2 主要是在project2 的基础上练习 Yacc，把 token 传给 Yacc。

project3 在 project2 的基础上新增了辨识 expression 以及转换成 [Java bytecode instruction](https://en.wikipedia.org/wiki/Java_bytecode_instruction_listings) 代码的功能,然后用一个[Java(tm) Bytecode Assembler](http://tinf2.vub.ac.be/~dvermeir/courses/compilers/javaa/) 程序可以转换成 Java 的 class file。这样就可以用 java 命令执行了。至此就走完了一个 compiler 的基本流程。project3 在辨识 expression 过程中可能还会用到 Yacc 里面优先级、结合性的写法，但这里我还没写。

.go 结尾的都是测试文 files，project3 略微改动了(HelloWorld.go,fib.go)，虽然文法不一定完全符合 Go 语言的文法，但只是用来测试和体验 compiler 而已。使用其他 Go 语言文档基本不可能会正确 compile，因为这里只是挑选了部分文法在写，只能通过这四个测试 files。

javaa programs 是来自于老师提供的，这是 Washington University 的一位学生开发的，可以转换 Java bytecode instruction 到一个 .class file 也就是转换成。
