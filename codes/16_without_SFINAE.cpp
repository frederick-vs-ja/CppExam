template <typename T>
struct add_lvalue_reference {
    using type = T &;
};
template <>
struct add_lvalue_reference<void> {
    using type = void;
};
template <typename T, typename ...Args>
struct add_lvalue_reference<T (Args...)> {
    using type = T (Args...);
};
template <typename T, typename ...Args>
struct add_lvalue_reference<T (Args..., ...)> {
    using type = T (Args..., ...);
};
