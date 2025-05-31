// #include <iostream>
// #include <vector>

// template <typename C, typename T>
// auto MyBinarySearch(const C& cont, const T& target, int l, int r)
// {
//     if(l > r) return -1;
//     int mid = l + (r-1)/2;
//     if(*mid == target)
//     {
//         return mid;
//     }
//     else if(*mid < target)
//     {
//         return MyBinarySearch(cont,target,mid + 1,r);
//     }
//     else
//     {
//         return MyBinarySearch(cont,target,l,mid - 1);

//     }
// }

// int main()
// {
//     std::vector<int> vec = {1,5,8,9,15};
//     auto l = vec.begin();
//     auto r = vec.end();

//     auto it = MyBinarySearch(vec,4,l,r);
//     if(it != vec.end())
//     {
//         std::cout<<*it<<std::endl;
//     }
//     else{
//         std::cout<<"not found\n";
//     }
//     return 0;

// }