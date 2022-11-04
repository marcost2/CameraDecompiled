
/* BokehOneData::setWatermarkDate(char const*) */

void __thiscall BokehOneData::setWatermarkDate(BokehOneData *this,char *param_1)

{
  size_t sVar1;
  void *pvVar2;
  uint uVar3;
  
  sVar1 = strlen(param_1);
  if ((param_1 != (char *)0x0) && (0 < (int)sVar1)) {
    uVar3 = sVar1 + 1;
    pvVar2 = operator_new__(uVar3 | (int)uVar3 >> 0x1f);
    *(void **)(this + 0x58) = pvVar2;
    __aeabi_memclr8(pvVar2,uVar3);
    strcpy(*(char **)(this + 0x58),param_1);
    return;
  }
  *(undefined4 *)(this + 0x58) = 0;
  return;
}

