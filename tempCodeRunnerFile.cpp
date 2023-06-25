int main() {
    int n;
    char start, cont;
    cout << " Enter a anumber " << endl;
    cin >> n;

    start = 'A';
    for(int i = 1; i<=n; i++) {
        for(char qty = start; qty<start+i; qty++){
            cout << qty;
            cont = qty;
        }
        start = cont;
        start++;
        cout << endl;
    }
    return 0;
}