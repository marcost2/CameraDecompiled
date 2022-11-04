
void FUN_00099600(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = *(int *)(DAT_00099624 + 0x9960a) + 8;
  android::VectorImpl::finish_vector();
  pvVar1 = (void *)android::VectorImpl::_VectorImpl((VectorImpl *)param_1);
  operator_delete(pvVar1);
  return;
}

