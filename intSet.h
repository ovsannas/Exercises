class IntegerSet {
    public:
        IntegerSet();
        IntegerSet(int, int, int, int, int);
        void insertElement(int);
        void deleteElement(int);
        bool containElement(int);
        void Union(IntegerSet &, IntegerSet &);
        void Intersection(IntegerSet &, IntegerSet &);
        bool isEqualTo(IntegerSet &);
        void Print();
    private:
        bool arraySet[101];
};
