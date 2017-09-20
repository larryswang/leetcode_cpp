class MagicDictionary{
public:
    MagicDictionary(){
    
    }

    void buildDict(vector<string> dict){
        for(string &s:dict) words.insert(s);
    }
    
    bool search(string word){
        for(int i=0; i<word.size();i++){
            char c=word[i];
            for(int j=0; j<26; j++){
                if(c==j+'a') continue;
                word[i] = j+'a';
                if(words.count(word)) return true;
            }
            word[i]=c;
        }
        return false; 
    }
    
    private:
        unordered_set<string> words;
}
