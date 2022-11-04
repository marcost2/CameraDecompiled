
/* std::__1::TEMPNAMEPLACEHOLDERVALUE(std::__1::__map_iterator<std::__1::__tree_iterator<std::__1::__value_type<unsigned
   int, unsigned int>, std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>,
   void*>*, int>> const&,
   std::__1::__map_iterator<std::__1::__tree_iterator<std::__1::__value_type<unsigned int, unsigned
   int>, std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*, int>>
   const&) */

uint std::__1::operator__(__map_iterator *param_1,__map_iterator *param_2)

{
  uint uVar1;
  
  uVar1 = count_leading_zeroes(*(int *)param_1 - *(int *)param_2);
  return uVar1 >> 5;
}

