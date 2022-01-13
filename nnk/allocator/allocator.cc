#include "allocator.h"

namespace nnk{
    std::string Allocator::DebugString() const{
        std::string result = "num_allocs:    " + std::to_string(this->state.num_allocs) + "\n";
        result += "bytes_in_use:    " + std::to_string(this->state.bytes_in_use) + "\n";
        result += "largest_alloc_size:   " + std::to_string(this->state.largest_alloc_size) + "\n";
        return result;
    }
}