
void FUN_000d7af4(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = *(int *)(DAT_000d7b18 + 0xd7afe) + 8;
  android::VectorImpl::finish_vector();
  pvVar1 = (void *)android::VectorImpl::_VectorImpl((VectorImpl *)param_1);
  operator_delete(pvVar1);
  return;
}
