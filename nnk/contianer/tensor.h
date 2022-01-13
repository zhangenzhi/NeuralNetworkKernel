#ifndef __TENSOR_H__
#define __TENSOR_H__

#include <stdlib.h>
#include <Eigen/Dense>

namespace nnk{

template<typename T> class Tensor{
public:
    typedef T dtype;
    Tensor(int col, int row);
    virtual ~Tensor();
};

}

#endif