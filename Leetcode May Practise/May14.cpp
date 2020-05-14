class Trie {
public:
    bool val = false;
    unordered_map<char, Trie*> map;
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        Trie *temp = this;
        for(char c : word){
            if(!temp->map[c])
                temp->map[c] = new Trie();
            temp = temp->map[c];
        }
        temp-> val= true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        Trie* temp = this;
        for(char c : word){
            if(!temp->map[c])
                return false;
            temp = temp->map[c];
        }
        return temp-> val;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Trie* temp = this;
        for(char c : prefix){
            if(!temp->map[c])
                return false;
            temp = temp->map[c];
        }
        return true;
    }
};
