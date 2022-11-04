
undefined4 FUN_000fa288(char *param_1,void *param_2)

{
  FILE *__stream;
  size_t sVar1;
  undefined4 uVar2;
  bool bVar3;
  
  __stream = fopen(param_1,(char *)(DAT_000fa2fc + 0xfa296));
  if (__stream == (FILE *)0x0) {
    __android_log_print(6,DAT_000fa300 + 0xfa2ca,DAT_000fa304 + 0xfa2cc,DAT_000fa308 + 0xfa2ce,
                        param_1);
    uVar2 = 0xffffffff;
  }
  else {
    sVar1 = fread(param_2,1,0x14,__stream);
    if (sVar1 == 0) {
      __android_log_print(6,DAT_000fa30c + 0xfa2e6,DAT_000fa310 + 0xfa2e8,DAT_000fa314 + 0xfa2ea,0);
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0;
      bVar3 = *(char *)((int)param_2 + (sVar1 - 1)) != '\n';
      if (bVar3) {
        *(undefined *)((int)param_2 + sVar1) = 0;
      }
      if (!bVar3) {
        *(undefined *)((int)param_2 + (sVar1 - 1)) = 0;
      }
    }
    fclose(__stream);
  }
  return uVar2;
}

