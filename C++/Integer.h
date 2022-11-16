class Integer {
    private:
        int number;
    public:
        Integer();
        Integer(int temp);
        ~Integer();

        operator int() const;
        //conversion operator or cast operator
};