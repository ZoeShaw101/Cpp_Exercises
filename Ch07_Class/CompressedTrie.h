//
// Created by Zoe Shaw on 08/11/2017.
//

#ifndef CPP_EXERCISES_COMPRESSEDTRIE_H
#define CPP_EXERCISES_COMPRESSEDTRIE_H

#include <string>
using namespace std;

struct NodeList {
    char c; //本节点存储的字符
    CompressedTrie *nextChild; //指向的子节点
    struct NodeList *nextChar; //本节点下一个字符的位置
};

class CompressedTrie {
private:
    CompressedTrie *root;
    struct NodeList *list;
    NodeList* find_node(NodeList* list, char c);
public:
    CompressedTrie();
    ~CompressedTrie() = default;
    void trie_insert(const string& line);
    string trie_search(const string& line);
};


#endif //CPP_EXERCISES_COMPRESSEDTRIE_H
