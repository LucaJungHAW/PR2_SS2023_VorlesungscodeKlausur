# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.25

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CLion 2023.1.1\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CLion 2023.1.1\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\lumis\CLionProjects\PR2_SS2023_Vorlesungscode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\lumis\CLionProjects\PR2_SS2023_Vorlesungscode\cmake-build-debug

# Include any dependencies generated for this target.
include test/lib/googlemock/CMakeFiles/gmock.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include test/lib/googlemock/CMakeFiles/gmock.dir/compiler_depend.make

# Include the progress variables for this target.
include test/lib/googlemock/CMakeFiles/gmock.dir/progress.make

# Include the compile flags for this target's objects.
include test/lib/googlemock/CMakeFiles/gmock.dir/flags.make

test/lib/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.obj: test/lib/googlemock/CMakeFiles/gmock.dir/flags.make
test/lib/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.obj: test/lib/googlemock/CMakeFiles/gmock.dir/includes_CXX.rsp
test/lib/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.obj: C:/Users/lumis/CLionProjects/PR2_SS2023_Vorlesungscode/test/lib/googlemock/src/gmock-all.cc
test/lib/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.obj: test/lib/googlemock/CMakeFiles/gmock.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lumis\CLionProjects\PR2_SS2023_Vorlesungscode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/lib/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.obj"
	cd /d C:\Users\lumis\CLionProjects\PR2_SS2023_Vorlesungscode\cmake-build-debug\test\lib\googlemock && C:\PROGRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/lib/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.obj -MF CMakeFiles\gmock.dir\src\gmock-all.cc.obj.d -o CMakeFiles\gmock.dir\src\gmock-all.cc.obj -c C:\Users\lumis\CLionProjects\PR2_SS2023_Vorlesungscode\test\lib\googlemock\src\gmock-all.cc

test/lib/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gmock.dir/src/gmock-all.cc.i"
	cd /d C:\Users\lumis\CLionProjects\PR2_SS2023_Vorlesungscode\cmake-build-debug\test\lib\googlemock && C:\PROGRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\lumis\CLionProjects\PR2_SS2023_Vorlesungscode\test\lib\googlemock\src\gmock-all.cc > CMakeFiles\gmock.dir\src\gmock-all.cc.i

test/lib/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gmock.dir/src/gmock-all.cc.s"
	cd /d C:\Users\lumis\CLionProjects\PR2_SS2023_Vorlesungscode\cmake-build-debug\test\lib\googlemock && C:\PROGRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\lumis\CLionProjects\PR2_SS2023_Vorlesungscode\test\lib\googlemock\src\gmock-all.cc -o CMakeFiles\gmock.dir\src\gmock-all.cc.s

# Object files for target gmock
gmock_OBJECTS = \
"CMakeFiles/gmock.dir/src/gmock-all.cc.obj"

# External object files for target gmock
gmock_EXTERNAL_OBJECTS =

lib/libgmock.a: test/lib/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.obj
lib/libgmock.a: test/lib/googlemock/CMakeFiles/gmock.dir/build.make
lib/libgmock.a: test/lib/googlemock/CMakeFiles/gmock.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\lumis\CLionProjects\PR2_SS2023_Vorlesungscode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ..\..\..\lib\libgmock.a"
	cd /d C:\Users\lumis\CLionProjects\PR2_SS2023_Vorlesungscode\cmake-build-debug\test\lib\googlemock && $(CMAKE_COMMAND) -P CMakeFiles\gmock.dir\cmake_clean_target.cmake
	cd /d C:\Users\lumis\CLionProjects\PR2_SS2023_Vorlesungscode\cmake-build-debug\test\lib\googlemock && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\gmock.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/lib/googlemock/CMakeFiles/gmock.dir/build: lib/libgmock.a
.PHONY : test/lib/googlemock/CMakeFiles/gmock.dir/build

test/lib/googlemock/CMakeFiles/gmock.dir/clean:
	cd /d C:\Users\lumis\CLionProjects\PR2_SS2023_Vorlesungscode\cmake-build-debug\test\lib\googlemock && $(CMAKE_COMMAND) -P CMakeFiles\gmock.dir\cmake_clean.cmake
.PHONY : test/lib/googlemock/CMakeFiles/gmock.dir/clean

test/lib/googlemock/CMakeFiles/gmock.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\lumis\CLionProjects\PR2_SS2023_Vorlesungscode C:\Users\lumis\CLionProjects\PR2_SS2023_Vorlesungscode\test\lib\googlemock C:\Users\lumis\CLionProjects\PR2_SS2023_Vorlesungscode\cmake-build-debug C:\Users\lumis\CLionProjects\PR2_SS2023_Vorlesungscode\cmake-build-debug\test\lib\googlemock C:\Users\lumis\CLionProjects\PR2_SS2023_Vorlesungscode\cmake-build-debug\test\lib\googlemock\CMakeFiles\gmock.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : test/lib/googlemock/CMakeFiles/gmock.dir/depend

