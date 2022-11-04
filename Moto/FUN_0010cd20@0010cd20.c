
void FUN_0010cd20(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = *(int *)(DAT_0010cd44 + 0x10cd2a) + 8;
  android::VectorImpl::finish_vector();
  pvVar1 = (void *)android::SortedVectorImpl::_SortedVectorImpl((SortedVectorImpl *)param_1);
  operator_delete(pvVar1);
  return;
}

