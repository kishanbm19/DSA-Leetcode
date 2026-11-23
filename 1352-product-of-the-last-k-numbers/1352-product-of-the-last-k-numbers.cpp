class ProductOfNumbers {
public:
vector<int>pro;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
      pro.push_back(num);  
    }
    
    int getProduct(int k) {
        int ans=1;
        int i=pro.size()-1;
        int j=k;
        while(j--){
            ans*=pro[i--];
        }
        return ans;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */