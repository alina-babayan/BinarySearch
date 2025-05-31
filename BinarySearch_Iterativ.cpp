#include <iostream>
#include <vector>

template <typename C, typename T>
auto MyBinarySearch(const C& container, const T& target)
{
    auto l = container.begin();
    auto r = container.end();
    while(l <= r)
    {
        auto mid = l + (r - l)/2;
        if(*mid== target)
        {
            return mid;
        }
        else if(*mid < target)
        {
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    return container.end();

}

int main()
{
    std::vector<int> nums = {2, 4, 6, 8, 10};

auto it = MyBinarySearch(nums, 8);
if (it != nums.end()) {
    std::cout << "Found: " << *it << std::endl;
} else {
    std::cout << "Not found\n";
}

    return 0;
}