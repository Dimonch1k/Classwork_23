#include <iostream>
#include <vector>
using namespace std;





class HashTable {
    class KeyValuePair {
    private:
        int hash;
        string value;
        KeyValuePair* next;

    public:
        KeyValuePair(string value_, int tableSize)
        {
            this->value = hashFunc(value_, tableSize);
            this->value = value;
            next = nullptr;
        }

        int getHash()
        {
            return hash;
        }
        
        string getValue()
        {
            return value;
        }

        KeyValuePair* next()
        {
            return next;
        }
    };
private:

    vector<KeyValuePair*> vec;
    int tableSize;

    HashTable(int tableSize)
    {
        vec.resize(tableSize);
    }


public:

    void add(string value)
    {
        KeyValuePair* myHash = new KeyValuePair(value, tableSize);

        for (KeyValuePair* key : vec)
        {
            if (key != nullptr && myHash->getValue() == key->getValue()) 
            {
                KeyValuePair* temp = key;
                
                while (temp->next() != nullptr)
                {

                }
                
            }
                
            continue;
            
            vec.push_back(myHash);
        }
       


    }


    void find(KeyValuePair* head, string value)
    {

    }






};


int hashFunc(string str, int tableSize) {
    int hash = 0;
    for (char c : str) {
        hash = (hash * 31 + static_cast<int>(c)) % tableSize;
    }
    return abs(hash);
}

int main()
{
    
}
