def is_permutation(s1, s2):
    if len(s1) != len(s2):
        return False
    
    char_count = [0] * 128  # Assuming ASCII characters
    print(char_count)
    
    for ch in s1:
        char_count[ord(ch)] += 1
    print(char_count)
    
    for ch in s2:
        char_count[ord(ch)] -= 1
        
        
        if char_count[ord(ch)] < 0:
            return False
    print(char_count)
    
    return True

# Test Cases
#print(is_permutation("god", "dog"))  # True
print(is_permutation("apple", "papel"))  # True
print(is_permutation("car", "rat"))  # False
