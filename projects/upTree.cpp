//Helper class just for this fucking method 
class upTree{ 
    private: 
        //Key  = string = node / element = string = parent
        unordered_map<string, string> upArr;

        //Key = string = sentinel node / unsigned int = 0 if string is not sentinel sizeofSet otherwise 
        unordered_map<string, unsigned int> sizeArr; 

    public:  
        //constructor of up tree
        upTree(vector<string> labels){ 
            //All nodes have parent pointer to nothing (They're all sentinels)
            for (unsigned int i = 0; i < labels.size(); i++){ 
                //Sentinel is parent of itself 
                upArr.emplace(labels[i], labels[i]); 
                sizeArr.emplace(labels[i], 1); 
            }
        }

        //Find with path compression recursively 
        string find(string node){ 
            if(upArr[node] == node){ 
                return node; 
            }
            //Recursion 
            string sentinel = find(upArr[node]); 

            //Recursively path compress 
            upArr[node] = sentinel; 

            return sentinel; 
        }

        //Union by size 
        void u_bySize(string node1, string node2){ 
            string parent1 = this->find(node1); 
            string parent2 = this->find(node2); 
            //No need to union cause they're already in same set 
            if (parent1 == parent2){ 
                return; 
            }
            unsigned int size1 = this->sizeArr[parent1]; 
            unsigned int size2 = this->sizeArr[parent2]; 
            if (size1 > size2){ 
                this->upArr[parent2] = parent1; 
                this->sizeArr[parent1] = size1 + size2; 
                this->sizeArr[parent2] = 0; 
            }
            //So if sizes are equal, node1's sentinel becomes descendant of node2's sentinel 
            else{ 
                this->upArr[parent1] = parent2; 
                this->sizeArr[parent2] = size1+ size2; 
                this->sizeArr[parent1] = 0; 
            }
        }
}; 
