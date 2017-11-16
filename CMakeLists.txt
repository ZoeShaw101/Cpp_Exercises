cmake_minimum_required(VERSION 3.8)
project(Cpp_Exercises)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES Ch07_Class/emailSearch.cpp Ch07_Class/TrieNode.cpp Ch07_Class/Bloom.cpp Ch07_Class/Hash.cpp Ch07_Class/CompressedTrie.cpp)
set(SOURCE_FILES Ch12_Dynamic_Memory/ex12_14.cpp)
add_executable(Cpp_Exercises ${SOURCE_FILES})