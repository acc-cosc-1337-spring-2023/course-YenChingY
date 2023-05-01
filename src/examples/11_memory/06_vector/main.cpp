//
#include "my_vector.h"

using std::cout;

int main()
{
    Vector<int> nums;
    nums.PushBack(5);
    cout<<nums[0]<<"\n\n";
    
    Vector<double> doubles;
    doubles.PushBack(10.5);
    cout<<doubles[0]<<"\n\n";

    Vector<char> chars;
    chars.PushBack('a');
    cout<<chars[0]<<"\n\n";

    return 0;
}

