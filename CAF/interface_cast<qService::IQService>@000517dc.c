
/* android::sp<qService::IQService>
   android::interface_cast<qService::IQService>(android::sp<android::IBinder> const&) */

sp android::interface_cast_qService__IQService_(sp *param_1)

{
  sp sVar1;
  
  sVar1 = (sp)qService::IQService::asInterface(param_1);
  return sVar1;
}

