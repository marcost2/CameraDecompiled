
/* android::sp<qService::IQService>::TEMPNAMEPLACEHOLDERVALUE(qService::IQService const*) const */

uint __thiscall
android::sp<qService::IQService>::operator__(sp_qService__IQService_ *this,IQService *param_1)

{
  uint uVar1;
  
  uVar1 = count_leading_zeroes(*(int *)this - (int)param_1);
  return uVar1 >> 5;
}

