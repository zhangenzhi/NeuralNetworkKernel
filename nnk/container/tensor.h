#ifndef _TENSOR_H_
#define _TENSOR_H_

#include "stdlib.h"
#include <iostream>
#include <vector>
#include <string>
#include <Eigen/Dense> 

using namespace std;
using namespace Eigen;

namespace nnk{
template <typename T, int R, int C> class Tensor{

public:
    // typedef typename Matrix<T, R, C> T_Matrix
    // constructor
    Tensor();
    Tensor(const Matrix<T, R, C> &m);
    Tensor(const int id);

    // destructor
    ~Tensor();

    // operators
    // Tensor<dtype>& operator= (const Tensor<dtype> t);    
    // Tensor<dtype>& operator+ (const Tensor<dtype> t);
    // Tensor<dtype>& operator* (const Tensor<dtype> t);
    // Tensor<dtype>& operator/ (const Tensor<dtype> t);

    //functions
    vector<int> get_shape() const {return shape;}
    string get_dtype() const {return dtype;}
    string get_name() const {return name;}

    // read members
    void print_info() const {cout<< "data =" << endl << data << endl;}

private:
    Matrix<T, R, C> data;
    vector<int> shape;
    string dtype;
    string name;
    int id;
};

template <typename T, int R, int C>
Tensor<T,R,C>::Tensor(){}


template <typename T, int R, int C>
Tensor<T,R,C>::Tensor(const Matrix<T, R, C> &m) : data(m){
    this->name = "None";
    this->shape = {R,C};
}

template <typename T, int R, int C>
Tensor<T,R,C>::Tensor(int id){
    this->name = "None";
    this->id = id;      
}

template <typename T, int R, int C>
Tensor<T,R,C>::~Tensor(){}

} // nnk
#endif