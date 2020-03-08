template <typename T>
constexpr T &test_add_reference(int) noexcept;
template <typename T>
constexpr T test_add_reference(...) noexcept;

template <typename T>
struct add_lvalue_reference {
    using type = decltype(test_add_reference<T>(0));
};
