# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/rubylight/CLionProjects/ScienceWork

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/rubylight/CLionProjects/ScienceWork/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ScienceWork.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ScienceWork.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ScienceWork.dir/flags.make

CMakeFiles/ScienceWork.dir/main.cpp.o: CMakeFiles/ScienceWork.dir/flags.make
CMakeFiles/ScienceWork.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/rubylight/CLionProjects/ScienceWork/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ScienceWork.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ScienceWork.dir/main.cpp.o -c /Users/rubylight/CLionProjects/ScienceWork/main.cpp

CMakeFiles/ScienceWork.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ScienceWork.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/rubylight/CLionProjects/ScienceWork/main.cpp > CMakeFiles/ScienceWork.dir/main.cpp.i

CMakeFiles/ScienceWork.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ScienceWork.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/rubylight/CLionProjects/ScienceWork/main.cpp -o CMakeFiles/ScienceWork.dir/main.cpp.s

CMakeFiles/ScienceWork.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/ScienceWork.dir/main.cpp.o.requires

CMakeFiles/ScienceWork.dir/main.cpp.o.provides: CMakeFiles/ScienceWork.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/ScienceWork.dir/build.make CMakeFiles/ScienceWork.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/ScienceWork.dir/main.cpp.o.provides

CMakeFiles/ScienceWork.dir/main.cpp.o.provides.build: CMakeFiles/ScienceWork.dir/main.cpp.o


CMakeFiles/ScienceWork.dir/Codeword.cpp.o: CMakeFiles/ScienceWork.dir/flags.make
CMakeFiles/ScienceWork.dir/Codeword.cpp.o: ../Codeword.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/rubylight/CLionProjects/ScienceWork/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ScienceWork.dir/Codeword.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ScienceWork.dir/Codeword.cpp.o -c /Users/rubylight/CLionProjects/ScienceWork/Codeword.cpp

CMakeFiles/ScienceWork.dir/Codeword.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ScienceWork.dir/Codeword.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/rubylight/CLionProjects/ScienceWork/Codeword.cpp > CMakeFiles/ScienceWork.dir/Codeword.cpp.i

CMakeFiles/ScienceWork.dir/Codeword.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ScienceWork.dir/Codeword.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/rubylight/CLionProjects/ScienceWork/Codeword.cpp -o CMakeFiles/ScienceWork.dir/Codeword.cpp.s

CMakeFiles/ScienceWork.dir/Codeword.cpp.o.requires:

.PHONY : CMakeFiles/ScienceWork.dir/Codeword.cpp.o.requires

CMakeFiles/ScienceWork.dir/Codeword.cpp.o.provides: CMakeFiles/ScienceWork.dir/Codeword.cpp.o.requires
	$(MAKE) -f CMakeFiles/ScienceWork.dir/build.make CMakeFiles/ScienceWork.dir/Codeword.cpp.o.provides.build
.PHONY : CMakeFiles/ScienceWork.dir/Codeword.cpp.o.provides

CMakeFiles/ScienceWork.dir/Codeword.cpp.o.provides.build: CMakeFiles/ScienceWork.dir/Codeword.cpp.o


CMakeFiles/ScienceWork.dir/MatrixReader.cpp.o: CMakeFiles/ScienceWork.dir/flags.make
CMakeFiles/ScienceWork.dir/MatrixReader.cpp.o: ../MatrixReader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/rubylight/CLionProjects/ScienceWork/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ScienceWork.dir/MatrixReader.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ScienceWork.dir/MatrixReader.cpp.o -c /Users/rubylight/CLionProjects/ScienceWork/MatrixReader.cpp

CMakeFiles/ScienceWork.dir/MatrixReader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ScienceWork.dir/MatrixReader.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/rubylight/CLionProjects/ScienceWork/MatrixReader.cpp > CMakeFiles/ScienceWork.dir/MatrixReader.cpp.i

CMakeFiles/ScienceWork.dir/MatrixReader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ScienceWork.dir/MatrixReader.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/rubylight/CLionProjects/ScienceWork/MatrixReader.cpp -o CMakeFiles/ScienceWork.dir/MatrixReader.cpp.s

CMakeFiles/ScienceWork.dir/MatrixReader.cpp.o.requires:

.PHONY : CMakeFiles/ScienceWork.dir/MatrixReader.cpp.o.requires

CMakeFiles/ScienceWork.dir/MatrixReader.cpp.o.provides: CMakeFiles/ScienceWork.dir/MatrixReader.cpp.o.requires
	$(MAKE) -f CMakeFiles/ScienceWork.dir/build.make CMakeFiles/ScienceWork.dir/MatrixReader.cpp.o.provides.build
.PHONY : CMakeFiles/ScienceWork.dir/MatrixReader.cpp.o.provides

CMakeFiles/ScienceWork.dir/MatrixReader.cpp.o.provides.build: CMakeFiles/ScienceWork.dir/MatrixReader.cpp.o


CMakeFiles/ScienceWork.dir/CodewordsExtractor.cpp.o: CMakeFiles/ScienceWork.dir/flags.make
CMakeFiles/ScienceWork.dir/CodewordsExtractor.cpp.o: ../CodewordsExtractor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/rubylight/CLionProjects/ScienceWork/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ScienceWork.dir/CodewordsExtractor.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ScienceWork.dir/CodewordsExtractor.cpp.o -c /Users/rubylight/CLionProjects/ScienceWork/CodewordsExtractor.cpp

CMakeFiles/ScienceWork.dir/CodewordsExtractor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ScienceWork.dir/CodewordsExtractor.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/rubylight/CLionProjects/ScienceWork/CodewordsExtractor.cpp > CMakeFiles/ScienceWork.dir/CodewordsExtractor.cpp.i

CMakeFiles/ScienceWork.dir/CodewordsExtractor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ScienceWork.dir/CodewordsExtractor.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/rubylight/CLionProjects/ScienceWork/CodewordsExtractor.cpp -o CMakeFiles/ScienceWork.dir/CodewordsExtractor.cpp.s

CMakeFiles/ScienceWork.dir/CodewordsExtractor.cpp.o.requires:

.PHONY : CMakeFiles/ScienceWork.dir/CodewordsExtractor.cpp.o.requires

CMakeFiles/ScienceWork.dir/CodewordsExtractor.cpp.o.provides: CMakeFiles/ScienceWork.dir/CodewordsExtractor.cpp.o.requires
	$(MAKE) -f CMakeFiles/ScienceWork.dir/build.make CMakeFiles/ScienceWork.dir/CodewordsExtractor.cpp.o.provides.build
.PHONY : CMakeFiles/ScienceWork.dir/CodewordsExtractor.cpp.o.provides

CMakeFiles/ScienceWork.dir/CodewordsExtractor.cpp.o.provides.build: CMakeFiles/ScienceWork.dir/CodewordsExtractor.cpp.o


CMakeFiles/ScienceWork.dir/Tests/Readers/MatrixReaderTest.cpp.o: CMakeFiles/ScienceWork.dir/flags.make
CMakeFiles/ScienceWork.dir/Tests/Readers/MatrixReaderTest.cpp.o: ../Tests/Readers/MatrixReaderTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/rubylight/CLionProjects/ScienceWork/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ScienceWork.dir/Tests/Readers/MatrixReaderTest.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ScienceWork.dir/Tests/Readers/MatrixReaderTest.cpp.o -c /Users/rubylight/CLionProjects/ScienceWork/Tests/Readers/MatrixReaderTest.cpp

CMakeFiles/ScienceWork.dir/Tests/Readers/MatrixReaderTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ScienceWork.dir/Tests/Readers/MatrixReaderTest.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/rubylight/CLionProjects/ScienceWork/Tests/Readers/MatrixReaderTest.cpp > CMakeFiles/ScienceWork.dir/Tests/Readers/MatrixReaderTest.cpp.i

CMakeFiles/ScienceWork.dir/Tests/Readers/MatrixReaderTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ScienceWork.dir/Tests/Readers/MatrixReaderTest.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/rubylight/CLionProjects/ScienceWork/Tests/Readers/MatrixReaderTest.cpp -o CMakeFiles/ScienceWork.dir/Tests/Readers/MatrixReaderTest.cpp.s

CMakeFiles/ScienceWork.dir/Tests/Readers/MatrixReaderTest.cpp.o.requires:

.PHONY : CMakeFiles/ScienceWork.dir/Tests/Readers/MatrixReaderTest.cpp.o.requires

CMakeFiles/ScienceWork.dir/Tests/Readers/MatrixReaderTest.cpp.o.provides: CMakeFiles/ScienceWork.dir/Tests/Readers/MatrixReaderTest.cpp.o.requires
	$(MAKE) -f CMakeFiles/ScienceWork.dir/build.make CMakeFiles/ScienceWork.dir/Tests/Readers/MatrixReaderTest.cpp.o.provides.build
.PHONY : CMakeFiles/ScienceWork.dir/Tests/Readers/MatrixReaderTest.cpp.o.provides

CMakeFiles/ScienceWork.dir/Tests/Readers/MatrixReaderTest.cpp.o.provides.build: CMakeFiles/ScienceWork.dir/Tests/Readers/MatrixReaderTest.cpp.o


CMakeFiles/ScienceWork.dir/Tests/Assert.cpp.o: CMakeFiles/ScienceWork.dir/flags.make
CMakeFiles/ScienceWork.dir/Tests/Assert.cpp.o: ../Tests/Assert.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/rubylight/CLionProjects/ScienceWork/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/ScienceWork.dir/Tests/Assert.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ScienceWork.dir/Tests/Assert.cpp.o -c /Users/rubylight/CLionProjects/ScienceWork/Tests/Assert.cpp

CMakeFiles/ScienceWork.dir/Tests/Assert.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ScienceWork.dir/Tests/Assert.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/rubylight/CLionProjects/ScienceWork/Tests/Assert.cpp > CMakeFiles/ScienceWork.dir/Tests/Assert.cpp.i

CMakeFiles/ScienceWork.dir/Tests/Assert.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ScienceWork.dir/Tests/Assert.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/rubylight/CLionProjects/ScienceWork/Tests/Assert.cpp -o CMakeFiles/ScienceWork.dir/Tests/Assert.cpp.s

CMakeFiles/ScienceWork.dir/Tests/Assert.cpp.o.requires:

.PHONY : CMakeFiles/ScienceWork.dir/Tests/Assert.cpp.o.requires

CMakeFiles/ScienceWork.dir/Tests/Assert.cpp.o.provides: CMakeFiles/ScienceWork.dir/Tests/Assert.cpp.o.requires
	$(MAKE) -f CMakeFiles/ScienceWork.dir/build.make CMakeFiles/ScienceWork.dir/Tests/Assert.cpp.o.provides.build
.PHONY : CMakeFiles/ScienceWork.dir/Tests/Assert.cpp.o.provides

CMakeFiles/ScienceWork.dir/Tests/Assert.cpp.o.provides.build: CMakeFiles/ScienceWork.dir/Tests/Assert.cpp.o


CMakeFiles/ScienceWork.dir/BinaryWords.cpp.o: CMakeFiles/ScienceWork.dir/flags.make
CMakeFiles/ScienceWork.dir/BinaryWords.cpp.o: ../BinaryWords.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/rubylight/CLionProjects/ScienceWork/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/ScienceWork.dir/BinaryWords.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ScienceWork.dir/BinaryWords.cpp.o -c /Users/rubylight/CLionProjects/ScienceWork/BinaryWords.cpp

CMakeFiles/ScienceWork.dir/BinaryWords.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ScienceWork.dir/BinaryWords.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/rubylight/CLionProjects/ScienceWork/BinaryWords.cpp > CMakeFiles/ScienceWork.dir/BinaryWords.cpp.i

CMakeFiles/ScienceWork.dir/BinaryWords.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ScienceWork.dir/BinaryWords.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/rubylight/CLionProjects/ScienceWork/BinaryWords.cpp -o CMakeFiles/ScienceWork.dir/BinaryWords.cpp.s

CMakeFiles/ScienceWork.dir/BinaryWords.cpp.o.requires:

.PHONY : CMakeFiles/ScienceWork.dir/BinaryWords.cpp.o.requires

CMakeFiles/ScienceWork.dir/BinaryWords.cpp.o.provides: CMakeFiles/ScienceWork.dir/BinaryWords.cpp.o.requires
	$(MAKE) -f CMakeFiles/ScienceWork.dir/build.make CMakeFiles/ScienceWork.dir/BinaryWords.cpp.o.provides.build
.PHONY : CMakeFiles/ScienceWork.dir/BinaryWords.cpp.o.provides

CMakeFiles/ScienceWork.dir/BinaryWords.cpp.o.provides.build: CMakeFiles/ScienceWork.dir/BinaryWords.cpp.o


# Object files for target ScienceWork
ScienceWork_OBJECTS = \
"CMakeFiles/ScienceWork.dir/main.cpp.o" \
"CMakeFiles/ScienceWork.dir/Codeword.cpp.o" \
"CMakeFiles/ScienceWork.dir/MatrixReader.cpp.o" \
"CMakeFiles/ScienceWork.dir/CodewordsExtractor.cpp.o" \
"CMakeFiles/ScienceWork.dir/Tests/Readers/MatrixReaderTest.cpp.o" \
"CMakeFiles/ScienceWork.dir/Tests/Assert.cpp.o" \
"CMakeFiles/ScienceWork.dir/BinaryWords.cpp.o"

# External object files for target ScienceWork
ScienceWork_EXTERNAL_OBJECTS =

ScienceWork: CMakeFiles/ScienceWork.dir/main.cpp.o
ScienceWork: CMakeFiles/ScienceWork.dir/Codeword.cpp.o
ScienceWork: CMakeFiles/ScienceWork.dir/MatrixReader.cpp.o
ScienceWork: CMakeFiles/ScienceWork.dir/CodewordsExtractor.cpp.o
ScienceWork: CMakeFiles/ScienceWork.dir/Tests/Readers/MatrixReaderTest.cpp.o
ScienceWork: CMakeFiles/ScienceWork.dir/Tests/Assert.cpp.o
ScienceWork: CMakeFiles/ScienceWork.dir/BinaryWords.cpp.o
ScienceWork: CMakeFiles/ScienceWork.dir/build.make
ScienceWork: CMakeFiles/ScienceWork.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/rubylight/CLionProjects/ScienceWork/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable ScienceWork"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ScienceWork.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ScienceWork.dir/build: ScienceWork

.PHONY : CMakeFiles/ScienceWork.dir/build

CMakeFiles/ScienceWork.dir/requires: CMakeFiles/ScienceWork.dir/main.cpp.o.requires
CMakeFiles/ScienceWork.dir/requires: CMakeFiles/ScienceWork.dir/Codeword.cpp.o.requires
CMakeFiles/ScienceWork.dir/requires: CMakeFiles/ScienceWork.dir/MatrixReader.cpp.o.requires
CMakeFiles/ScienceWork.dir/requires: CMakeFiles/ScienceWork.dir/CodewordsExtractor.cpp.o.requires
CMakeFiles/ScienceWork.dir/requires: CMakeFiles/ScienceWork.dir/Tests/Readers/MatrixReaderTest.cpp.o.requires
CMakeFiles/ScienceWork.dir/requires: CMakeFiles/ScienceWork.dir/Tests/Assert.cpp.o.requires
CMakeFiles/ScienceWork.dir/requires: CMakeFiles/ScienceWork.dir/BinaryWords.cpp.o.requires

.PHONY : CMakeFiles/ScienceWork.dir/requires

CMakeFiles/ScienceWork.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ScienceWork.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ScienceWork.dir/clean

CMakeFiles/ScienceWork.dir/depend:
	cd /Users/rubylight/CLionProjects/ScienceWork/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/rubylight/CLionProjects/ScienceWork /Users/rubylight/CLionProjects/ScienceWork /Users/rubylight/CLionProjects/ScienceWork/cmake-build-debug /Users/rubylight/CLionProjects/ScienceWork/cmake-build-debug /Users/rubylight/CLionProjects/ScienceWork/cmake-build-debug/CMakeFiles/ScienceWork.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ScienceWork.dir/depend
