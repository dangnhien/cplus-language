class NumberArray
{
    public:
        int size_array;
        float *array; 
    private:
    NumberArray(int);

};

NumberArray::NumberArray(int size){
    this->size_array = size;
    
}