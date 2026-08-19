void leftRotate(vector<int>& a) {
    int temp = a[0];

    for(int i = 1; i < a.size(); i++)
        a[i-1] = a[i];

    a[a.size()-1] = temp;
}
