
void FUN_0010cef8(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = *(int *)(DAT_0010cf1c + 0x10cf02) + 8;
  android::VectorImpl::finish_vector();
  pvVar1 = (void *)android::SortedVectorImpl::_SortedVectorImpl((SortedVectorImpl *)param_1);
  operator_delete(pvVar1);
  return;
}

