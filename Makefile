# Compiler & Flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11
SRC = $(shell find . -name "*.cpp")

.PHONY: all check clean help

all: check

# Perform syntax check on all C++ source files
check:
	@echo "Checking syntax of all C++ source files..."
	@for file in $(SRC); do \
		$(CXX) $(CXXFLAGS) -fsyntax-only $$file || exit 1; \
	done
	@echo "All C++ files compiled cleanly without errors!"

# Clean up potential build artifacts
clean:
	@echo "Cleaning up build artifacts..."
	rm -rf *.o *.out bin/
	find . -name "*.out" -type f -delete
	find . -name "*.o" -type f -delete

help:
	@echo "Cpp_Basics Repository Makefile"
	@echo "  make check  - Verify compilation of all .cpp files"
	@echo "  make clean  - Remove compiled binaries and object files"
