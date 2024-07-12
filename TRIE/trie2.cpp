#include <bits/stdc++.h> 

/// every trie has 3 part:
/// 1. links[] : The 26 size array of Trie reference.
/// 2. cntEndsWith : var contain counts of words ending at same Trie reference 
/// i.e, works similar to flag, here interger is used to store the count

/// 3. cntPrefix : var contain counts of prefix till the current reference trie 
/// i.e, no. of time current node (reference trie) is visited or filled


struct Node{
    Node* links[26] = {NULL};
    int cntEndsWith;
    int cntPrefix;

    Node(){
        cntEndsWith = 0;
        cntPrefix = 0;
    }

    bool isContainKey(char ch){
        return (links[ch-'a'] != NULL);
    }

    void put(char ch,Node* node){
        links[ch-'a'] = node;
    }

    Node* get(char ch){
        return links[ch-'a'];
    }

    void reducePrefix(){
        cntPrefix--;
    }

    void deleteEnd(){
        cntEndsWith--;
    }

    void increasePrefix(){
        cntPrefix++;
    }
    void increaseEndsWith(){
        cntEndsWith++;
    }
    int getEnd(){
        return cntEndsWith;
    }
    int getPrefix(){
        return cntPrefix;
    }
};
class Trie{
    private:
    Node* root;
    public:

    Trie(){
        root = new Node();
    }

    void insert(string &word){
        
        Node* temp = root;
        for(int i=0;i<word.size();i++){
            char ch = word[i];
            if(!temp->isContainKey(ch)){
                temp->put(ch,new Node());
            }
            temp=temp->get(ch);
            temp->increasePrefix();
        }
        temp->increaseEndsWith();
    }

    int countWordsEqualTo(string &word){
        
        Node* temp = root;
        int count = 0;
        for(int i=0;i<word.size();i++){
            char ch = word[i];
            if(temp->isContainKey(ch)){
                temp = temp->get(ch);
            }else return 0;
        }
        return temp->getEnd();
    }

    int countWordsStartingWith(string &word){
        
        Node* temp = root;
        for(int i=0;i<word.size();i++){
            char ch = word[i];
            if(temp->isContainKey(ch)){
                temp = temp->get(ch);
            }else return 0;
        }
        return temp->getPrefix();
    }

    void erase(string &word){
        Node* temp = root;
        for(int i=0;i<word.size();i++){
            char ch = word[i];
            if(temp->isContainKey(ch)){
                temp = temp->get(ch);
                temp->reducePrefix();
            }else break;
        }
        temp->deleteEnd();
    }
};
