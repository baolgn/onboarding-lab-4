# Week 4 Lab: Verification Toolchain

## Review
1. What is a registry?
   A registry is a collection of information about packages that tells a package manager like vcpkg where to find and retrieve source code files. It acts as a directory that maps package names to their locations, typically pointing to a git repository with a specific baseline commit hash so that the package manager knows exactly which version of the available packages to pull.
   
2. What is a package?
   A package is a bundle of source code files; whether SystemVerilog, C++, CMake, or other types; that can be fetched and integrated into a project through a package manager. Packages allow developers to reuse code written by others without having to manually copy and manage those files, and they are listed as dependencies in a project's configuration so the package manager can automatically retrieve them.

3. What’s the difference between an interface library and a “normal” library or executable? Can you think of any uses for this besides SystemVerilog files? (Think about source code used for generic programming)
   An interface library differs from a normal library or executable in that it consists of code and files that are not compiled immediately. A normal library or executable has its source code compiled directly into object files or binaries during the build process, whereas an interface library simply holds references to files that will be used later by other targets. This makes interface libraries well-suited for SystemVerilog files, which cannot be compiled by a C++ compiler directly and instead need to be processed by a tool like Verilator before they become usable simulation models. Beyond SystemVerilog, interface libraries are useful for any source code that isn't compiled in the traditional sense, such as header-only C++ libraries used in generic or template programming. Since template code is instantiated at the point of use rather than compiled ahead of time, packaging it as an interface library allows it to be distributed and linked without requiring immediate compilation.

4.What is a top module?
    A top module is a SystemVerilog module that is explicitly exposed for simulation by Verilator, meaning it becomes directly accessible for testing in the generated C++ model. Internal or helper modules that are only used by other modules do not need to be designated as top modules, since they are pulled in automatically through the hierarchy — only the modules you want to instantiate and interact with directly in your testbench need to be listed as top modules.
