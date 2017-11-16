//
// Created by Zoe Shaw on 08/11/2017.
//
#include "CompressedTrie.h"
#include "Bloom.h"
#include "Hash.h"
#include <iostream>
#include <fstream>
using namespace std;

int trie_check(istream &strpool, istream &checklist, ostream &result) {
    auto *trie = new CompressedTrie();
    string line;
    while (strpool >> line) {
        trie->trie_insert(line);
    }
    while (checklist >> line) {
        string res = trie->trie_search(line);
        result << res << endl;
    }
}
//int bf_check(istream &strpool, istream &checklist, ostream &result) {
//    Hash hashes;
//
//    void (*hashfamily[17])(const char*) = {hash1, hash2, hash3};
//    auto* bf = new Bloom(239620000, hashfamily);
//    string line;
//    while (strpool >> line) {
//        bf->bf_add(line);
//    }
//    while(checklist >> line) {
//        string res = bf->bf_search(line);
//        result << res << endl;
//    }
//}

int main(int argc, char* argv[]) {
    ifstream strpool(argv[1]);
    ifstream checklist(argv[2]);
    ofstream result(argv[3]);
    trie_check(strpool, checklist, result);
    cout<< "--------Trie end-------"<<endl;
//    bf_check(strpool, checklist, result);
//    cout<<"-------Bloom end-------"<<endl;
    strpool.close();
    checklist.close();
    result.close();
    return 0;
}

