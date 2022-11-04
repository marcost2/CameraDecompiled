
void FUN_0010ce0c(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = *(int *)(DAT_0010ce30 + 0x10ce16) + 8;
  android::VectorImpl::finish_vector();
  pvVar1 = (void *)android::SortedVectorImpl::_SortedVectorImpl((SortedVectorImpl *)param_1);
  operator_delete(pvVar1);
  return;
}

