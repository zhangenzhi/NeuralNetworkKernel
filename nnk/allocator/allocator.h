#include <stdlib.h>
#include <string>

namespace nnk{

    struct AllocatorStates
    {
       int64_t num_allocs;
       int64_t bytes_in_use;
       int64_t largest_alloc_size;

       AllocatorStates()
        : num_allocs(0),
          bytes_in_use(0),
          largest_alloc_size(0){}
    };

    class Allocator
    {
    private:
        AllocatorStates state;

    public:
        virtual std::string Name() = 0;
        virtual ~Allocator();
        
        virtual void* Alloc(size_t alignment, size_t num_bytes) = 0;
        virtual void Free(void* ptr) = 0;

        std::string DebugString() const;
    };

}