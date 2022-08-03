
//************************************TRIE IMPLEMENTATION***************************************//

// struct Node{
//     Node* links[26];
//     bool flag = false;
    
//     bool contains(char ch)                                            // returns TRUE if reference TRIE of the character is present else FALSE
//     {
//         return links[ch-'a'] != NULL;
//     }
//     void put(char ch,Node* node)
//     {
//         links[ch-'a'] = node;                                         // makes the reference TRIE of that character
//     }
//     Node* get(char ch)
//     {
//         return links[ch-'a'];                                         // gets address of the reference TRIE of that character
//     }
//     void setEnd()
//     {
//         flag= true;                                                   // sets the value of flag of the current TRIE to true
//     }
//     bool isEnd()
//     {
//         return flag;                                                  // returns the value flag of the current TRIE
//     }
// };

// class Trie {
//     Node *root ;                                                        // The root TRIE 
// public:
//     Trie() {
//         root = new Node();
//     }
    
//     void insert(string word) {                                             // inserts the word into the TRIE
//         Node* node = root;
//         for(int i=0;i<word.size();i++)
//         {
//             if(!node->contains(word[i]))                                 // if the word[i] is not present into the current TRIE , insert it 
//             {                                                           // and make its reference TRIE        
//                 node->put(word[i],new Node());
//             }
//             node = node->get(word[i]);                                    // move to the current charcter's reference TRIE
//         }
//         node->setEnd();                                                  // sets the last TRIE's flag value to TRUE ,which denotes the end of the 
//     }                                                                   // string word
    
//     bool search(string word) {
//         Node* node = root;                                               //staring with the root TRIE
//         for(int i=0;i<word.size();i++)
//         {
//             if(!node->contains(word[i])) return false;                    // if the current TRIE doesn't contains the word (which baically doesn't have the refernce TRIE) , return FALSE
//             node = node->get(word[i]);                                   // move to the reference TRIE
//         }
//         return node->isEnd();                                            // get's the last TRIE's flag value
//     }
    
//     bool startsWith(string prefix) {
//         Node *node = root;                                                //staring with the root TRIE
//         for(int i=0;i<prefix.size();i++)
//         {
//             if(!node->contains(prefix[i])) return false;                  // if the current TRIE doesn't contains the word (which baically doesn't have the refernce TRIE) , return FALSE
//             node = node->get(prefix[i]);                                 // move to the reference TRIE
//         }
//         return true;                                                     // if all the charcters are found then that means we found words with that prefix
//     }
// };