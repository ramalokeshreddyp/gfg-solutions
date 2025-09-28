/*You are required to complete below method */
bool checkString(string str, int k) {
    // Your code here
      int n = str.size();

   
    if (n % k != 0) return false;

   
    string ref = str.substr(0, k);
    int mismatches = 0;

    for (int i = 0; i < n; i += k) {
        string block = str.substr(i, k);
        if (block != ref) {
            mismatches++;
            if (mismatches > 1) return false;
        }
    }
    return true;
}