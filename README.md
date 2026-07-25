# Cpp_Basics: Comprehensive C++ Programming & STL Repository

Welcome to the **Cpp_Basics** repository! This collection contains structured C++ source code examples and practice problems focusing on core language fundamentals, data structures, algorithm design, and the **C++ Standard Template Library (STL)** including vectors, stacks, queues, maps, and unordered maps.

---

## 📁 Repository Organization

The codebase is organized into domain-specific subdirectories:

```
Cpp_Basics/
├── Makefile                        # Root Makefile for syntax verification & cleanup
├── README.md                       # Repository documentation & directory guide
├── .gitignore                      # Git ignore rules for binaries and build artifacts
│
├── algorithms/                     # General algorithmic problems
│   └── max_guests_on_cruise.cpp
│
├── basics/                         # Basic C++ I/O & language fundamentals
│   └── input_output.cpp
│
├── maps/                           # std::map & std::unordered_map STL usages
│   ├── distinct_permutations_count.cpp
│   ├── element_frequency_map.cpp
│   ├── longest_palindrome_length.cpp
│   ├── map_basics.cpp
│   ├── map_iteration.cpp
│   ├── pangram_check.cpp
│   ├── reconstruct_shuffled_sentence.cpp
│   ├── unique_characters_order.cpp
│   ├── unordered_map_basics.cpp
│   └── valid_anagram.cpp
│
├── math/                           # Mathematical & number theory algorithms
│   ├── lcm_n_numbers.cpp
│   ├── lcm_two_numbers.cpp
│   └── reverse_add_palindrome.cpp
│
├── queue/                          # std::queue STL operations & applications
│   ├── queue_basics.cpp
│   └── ticket_queue_simulation.cpp
│
├── stack/                          # std::stack STL operations & applications
│   ├── cancel_opposite_signs.cpp
│   ├── insert_at_bottom.cpp
│   ├── remove_adjacent_duplicates.cpp
│   ├── reverse_string_stack.cpp
│   └── stack_basics.cpp
│
├── strings/                        # C++ std::string operations
│   └── string_basics.cpp
│
└── vectors/                        # std::vector STL operations & algorithms
    ├── vector_reverse.cpp
    └── vector_sort.cpp
```

---

## 📚 Module Overview

| Category | Description | Key Topics Covered |
| :--- | :--- | :--- |
| **`algorithms/`** | Algorithmic problem solving | Time window simulation, running totals, array metrics |
| **`basics/`** | Basic C++ syntax & I/O | Standard input (`cin`), output (`cout`), basic variables |
| **`maps/`** | Key-value associative containers | `std::map`, `std::unordered_map`, Frequency counting, Anagrams, Pangrams, Permutations |
| **`math/`** | Mathematical & number theory algorithms | LCM calculation (2 numbers & N numbers), Mirror journey palindromes |
| **`queue/`** | First-In-First-Out (FIFO) queue STL | `std::queue`, `push()`, `pop()`, `front()`, Ticket queue simulation |
| **`stack/`** | Last-In-First-Out (LIFO) stack STL | `std::stack`, Bottom insertion, String reversing, Adjacent duplicate removal |
| **`strings/`** | C++ Standard String library | `std::string`, Concatenation, Append operations |
| **`vectors/`** | Dynamic array container STL | `std::vector`, `std::sort`, `std::reverse`, Iterator manipulation |

---

## 🛠️ How to Build and Run

### Prerequisites
Ensure you have `g++` (supporting C++11 or higher) and `make` installed on your system.

```bash
g++ --version
make --version
```

### 1. Verify Syntax of All Files
Run the Makefile target to perform a syntax check pass on all `.cpp` files in the repository:

```bash
make check
```

### 2. Compile and Run an Individual Program
You can compile any individual C++ program using `g++`:

```bash
# Example: Compiling and running Valid Anagram
g++ -std=c++11 maps/valid_anagram.cpp -o valid_anagram
./valid_anagram

# Example: Compiling and running Ticket Queue Simulation
g++ -std=c++11 queue/ticket_queue_simulation.cpp -o ticket_queue
./ticket_queue
```

### 3. Clean Build Artifacts
To remove compiled object files or output binaries:

```bash
make clean
```
