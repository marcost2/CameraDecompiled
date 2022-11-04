
void FUN_000bf8f0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = *(int *)(DAT_000bf914 + 0xbf8fa) + 8;
  android::VectorImpl::finish_vector();
  pvVar1 = (void *)android::SortedVectorImpl::_SortedVectorImpl((SortedVectorImpl *)param_1);
  operator_delete(pvVar1);
  return;
}

