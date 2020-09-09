# Cross-platform
 - C++ can be compiled into binary code for platform using a platform dependent compiler. Ex. Using windows x84 compiler to compile C++ code into machine code for x84 window machine
 - Platform = Combination of the type of hardware and the type of operating system. Ex of a common platform is Microsoft Windows runing on x86 architecture CPU

# Build process
 - C++ Source ---- Reprocessor ----> Reprocessed source code
 - Reprocessed source code ----> Compiler ----> Object files (Each CPP file is compiled into an individually object file)
 - Object files ----> Linker ----> exe, dll, lib, etc (Machine code as an application or lib)

## Peprocessor
 - Process statements start withs"#"
 - "include": copy and paste code into source file
 - "define": replace marco in source code
 - "if, ifdef": Whether use or not use a block of code