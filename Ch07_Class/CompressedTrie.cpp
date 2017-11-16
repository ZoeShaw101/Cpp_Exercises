//
// Created by Zoe Shaw on 08/11/2017.
//

#include "CompressedTrie.h"

CompressedTrie::CompressedTrie() {
    root = (CompressedTrie *)malloc(sizeof(CompressedTrie));
    root->list = nullptr;
}
void CompressedTrie::trie_insert(const string& str) {
    CompressedTrie* cur = root;
    for (char c : str) {
        NodeList *l = find_node(cur->list, c);
        if (l) {
            cur = l->nextChild; //如果在当前节点的list中找到了字符c，则继续找c的子节点
        } else {
            NodeList* p = cur->list;
            NodeList* q = p;
            while (p != nullptr) {
                q = p;
                p = p->nextChar;
            }
            if (q) {
                q->nextChar = (NodeList*)malloc(sizeof(NodeList));
                q = q->nextChar;
            } else {  //如果p, q本来就是空的
                q = (NodeList*)malloc(sizeof(NodeList));
                cur->list = q;
            }
            q->c = c;
            q->nextChar = nullptr;
            q->nextChild = (CompressedTrie*)malloc(sizeof(CompressedTrie));
            cur = q->nextChild;
            cur->list = nullptr;
        }
    }
}
NodeList* CompressedTrie::find_node(NodeList *list, char c) {
    NodeList* p = list;
    while (p != nullptr) {
        if (p->c == c)
            return p;
        p = p->nextChar;
    }
    return p;
}
string CompressedTrie::trie_search(const string& line) {
    CompressedTrie* cur = root;
    for (auto c : line) {
        NodeList* l = find_node(cur->list, c);
        if (l == nullptr)
            return "no";
        cur = l->nextChild;
    }
    return "yes";
}
