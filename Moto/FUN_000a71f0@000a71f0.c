
void FUN_000a71f0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = *(int *)(DAT_000a7214 + 0xa71fa) + 8;
  android::VectorImpl::finish_vector();
  pvVar1 = (void *)android::VectorImpl::_VectorImpl((VectorImpl *)param_1);
  operator_delete(pvVar1);
  return;
}

