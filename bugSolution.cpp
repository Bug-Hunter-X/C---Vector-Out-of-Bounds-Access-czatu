std::vector<int> vec; 
for (int i = 0; i < 10; ++i) { 
 vec.push_back(i); 
}
 if (vec.size() > 10) { 
 int* ptr = &vec[0]; 
 int value = ptr[10]; // Accessing memory within the vector bounds
} else { 
 //Handle the case where the vector is smaller than expected
} 