
/* bool std::__1::atomic_load_explicit<bool>(std::__1::atomic<bool> const*, std::__1::memory_order)
    */

bool std::__1::atomic_load_explicit_bool_(atomic *param_1,memory_order param_2)

{
  if ((1 < param_2 - 1) && (param_2 != 5)) {
    return (bool)((byte)*param_1 & 1);
  }
  return (bool)((byte)*param_1 & 1);
}

