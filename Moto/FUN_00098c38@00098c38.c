
void FUN_00098c38(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = *(int *)(DAT_00098c5c + 0x98c42) + 8;
  android::VectorImpl::finish_vector();
  pvVar1 = (void *)android::SortedVectorImpl::_SortedVectorImpl((SortedVectorImpl *)param_1);
  operator_delete(pvVar1);
  return;
}

