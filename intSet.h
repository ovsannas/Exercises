class IntegerSet{
    public:
        IntegerSet();
        IntegerSet(int,int,int,int,int);
        void insertElement(int);
        void deleteElement(int);
        bool containElement(int);
        void Union(IntegerSet &, IntegerSet &);
        void Intersection(IntegerSet &, IntegerSet &);
        bool IsEqualTo(IntegerSet &);
        void Print();
    private:
        bool intSet[100];
};

