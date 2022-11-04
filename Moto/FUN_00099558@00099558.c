
void FUN_00099558(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = *(int *)(DAT_0009957c + 0x99562) + 8;
  android::VectorImpl::finish_vector();
  pvVar1 = (void *)android::VectorImpl::_VectorImpl((VectorImpl *)param_1);
  operator_delete(pvVar1);
  return;
}

