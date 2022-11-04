
/* std::__1::__atomic_base<bool, false>::load(std::__1::memory_order) const */

byte __thiscall
std::__1::__atomic_base<bool,false>::load(__atomic_base_bool_false_ *this,memory_order param_1)

{
  if ((1 < param_1 - 1) && (param_1 != 5)) {
    return (byte)*this & 1;
  }
  return (byte)*this & 1;
}

