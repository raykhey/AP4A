# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/choulot/Bureau/Projet_AP4A

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/choulot/Bureau/Projet_AP4A/build

# Include any dependencies generated for this target.
include CMakeFiles/Main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Main.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Main.dir/flags.make

CMakeFiles/Main.dir/Main.cpp.o: CMakeFiles/Main.dir/flags.make
CMakeFiles/Main.dir/Main.cpp.o: ../Main.cpp
CMakeFiles/Main.dir/Main.cpp.o: CMakeFiles/Main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/choulot/Bureau/Projet_AP4A/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Main.dir/Main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Main.dir/Main.cpp.o -MF CMakeFiles/Main.dir/Main.cpp.o.d -o CMakeFiles/Main.dir/Main.cpp.o -c /home/choulot/Bureau/Projet_AP4A/Main.cpp

CMakeFiles/Main.dir/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Main.dir/Main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/choulot/Bureau/Projet_AP4A/Main.cpp > CMakeFiles/Main.dir/Main.cpp.i

CMakeFiles/Main.dir/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Main.dir/Main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/choulot/Bureau/Projet_AP4A/Main.cpp -o CMakeFiles/Main.dir/Main.cpp.s

CMakeFiles/Main.dir/Server.cpp.o: CMakeFiles/Main.dir/flags.make
CMakeFiles/Main.dir/Server.cpp.o: ../Server.cpp
CMakeFiles/Main.dir/Server.cpp.o: CMakeFiles/Main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/choulot/Bureau/Projet_AP4A/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Main.dir/Server.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Main.dir/Server.cpp.o -MF CMakeFiles/Main.dir/Server.cpp.o.d -o CMakeFiles/Main.dir/Server.cpp.o -c /home/choulot/Bureau/Projet_AP4A/Server.cpp

CMakeFiles/Main.dir/Server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Main.dir/Server.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/choulot/Bureau/Projet_AP4A/Server.cpp > CMakeFiles/Main.dir/Server.cpp.i

CMakeFiles/Main.dir/Server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Main.dir/Server.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/choulot/Bureau/Projet_AP4A/Server.cpp -o CMakeFiles/Main.dir/Server.cpp.s

CMakeFiles/Main.dir/Sensor.cpp.o: CMakeFiles/Main.dir/flags.make
CMakeFiles/Main.dir/Sensor.cpp.o: ../Sensor.cpp
CMakeFiles/Main.dir/Sensor.cpp.o: CMakeFiles/Main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/choulot/Bureau/Projet_AP4A/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Main.dir/Sensor.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Main.dir/Sensor.cpp.o -MF CMakeFiles/Main.dir/Sensor.cpp.o.d -o CMakeFiles/Main.dir/Sensor.cpp.o -c /home/choulot/Bureau/Projet_AP4A/Sensor.cpp

CMakeFiles/Main.dir/Sensor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Main.dir/Sensor.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/choulot/Bureau/Projet_AP4A/Sensor.cpp > CMakeFiles/Main.dir/Sensor.cpp.i

CMakeFiles/Main.dir/Sensor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Main.dir/Sensor.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/choulot/Bureau/Projet_AP4A/Sensor.cpp -o CMakeFiles/Main.dir/Sensor.cpp.s

CMakeFiles/Main.dir/Scheduler.cpp.o: CMakeFiles/Main.dir/flags.make
CMakeFiles/Main.dir/Scheduler.cpp.o: ../Scheduler.cpp
CMakeFiles/Main.dir/Scheduler.cpp.o: CMakeFiles/Main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/choulot/Bureau/Projet_AP4A/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Main.dir/Scheduler.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Main.dir/Scheduler.cpp.o -MF CMakeFiles/Main.dir/Scheduler.cpp.o.d -o CMakeFiles/Main.dir/Scheduler.cpp.o -c /home/choulot/Bureau/Projet_AP4A/Scheduler.cpp

CMakeFiles/Main.dir/Scheduler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Main.dir/Scheduler.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/choulot/Bureau/Projet_AP4A/Scheduler.cpp > CMakeFiles/Main.dir/Scheduler.cpp.i

CMakeFiles/Main.dir/Scheduler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Main.dir/Scheduler.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/choulot/Bureau/Projet_AP4A/Scheduler.cpp -o CMakeFiles/Main.dir/Scheduler.cpp.s

# Object files for target Main
Main_OBJECTS = \
"CMakeFiles/Main.dir/Main.cpp.o" \
"CMakeFiles/Main.dir/Server.cpp.o" \
"CMakeFiles/Main.dir/Sensor.cpp.o" \
"CMakeFiles/Main.dir/Scheduler.cpp.o"

# External object files for target Main
Main_EXTERNAL_OBJECTS =

Main: CMakeFiles/Main.dir/Main.cpp.o
Main: CMakeFiles/Main.dir/Server.cpp.o
Main: CMakeFiles/Main.dir/Sensor.cpp.o
Main: CMakeFiles/Main.dir/Scheduler.cpp.o
Main: CMakeFiles/Main.dir/build.make
Main: CMakeFiles/Main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/choulot/Bureau/Projet_AP4A/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable Main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Main.dir/build: Main
.PHONY : CMakeFiles/Main.dir/build

CMakeFiles/Main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Main.dir/clean

CMakeFiles/Main.dir/depend:
	cd /home/choulot/Bureau/Projet_AP4A/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/choulot/Bureau/Projet_AP4A /home/choulot/Bureau/Projet_AP4A /home/choulot/Bureau/Projet_AP4A/build /home/choulot/Bureau/Projet_AP4A/build /home/choulot/Bureau/Projet_AP4A/build/CMakeFiles/Main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Main.dir/depend

