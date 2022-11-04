
void FUN_000bf8cc(undefined4 *param_1)

{
  *param_1 = *(int *)(DAT_000bf8ec + 0xbf8d6) + 8;
  android::VectorImpl::finish_vector();
  android::SortedVectorImpl::_SortedVectorImpl((SortedVectorImpl *)param_1);
  return;
}

