class Solution {
public:
        unordered_set<string>Eset;
        unordered_map<string,string>Cmap;
        unordered_map<string,string>Vmap;
        
        string toLower(string s) {
        for (char &ch : s) ch = tolower(ch);
        return s;
        }
        

        string replaceVowel(string s){
           
            for(char &ch:s){
                if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                    ch='*';
                }
            }
            return s;
        
        }

        string checkFormatch(string &query){

            if(Eset.count(query)){
                return query;
            }
    // case check
            string lowercase=toLower(query);
            if(Cmap.count(lowercase)){
                return Cmap[lowercase];
            }
    // vowel check 
            string vowelcase=replaceVowel(lowercase);
            if(Vmap.count(vowelcase) ){
                return Vmap[vowelcase];
            }
            return "";
        }
    
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {

        for(string word:wordlist){
            Eset.insert(word);

            string lowercase=toLower(word);
            if(Cmap.find(lowercase)==Cmap.end()){
                Cmap[lowercase]=word;
            }

            string vowelcase=replaceVowel(lowercase);
            if(Vmap.find(vowelcase)==Vmap.end()){
                Vmap[vowelcase]=word;
            }
        }
        vector<string> result;
        for(string &query:queries){
            result.push_back(checkFormatch(query));
        }
        return result;
        
    }
};