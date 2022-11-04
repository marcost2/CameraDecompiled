
/* qcamera::QCameraParameters::getCpuInfo() */

void __thiscall qcamera::QCameraParameters::getCpuInfo(QCameraParameters *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  QCameraParameters *pQVar8;
  QCameraParameters *pQVar9;
  undefined *puVar10;
  int iVar11;
  char cVar12;
  stat sStack464;
  undefined auStack356 [20];
  char acStack336 [100];
  char acStack236 [100];
  undefined8 local_88;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 uStack112;
  undefined8 local_68;
  undefined7 uStack96;
  undefined local_59;
  undefined7 uStack88;
  undefined8 uStack81;
  undefined8 local_48;
  undefined8 uStack64;
  undefined8 local_38;
  undefined8 uStack48;
  int local_28;
  
  piVar1 = *(int **)(DAT_000fa254 + 0xfa072);
  local_28 = *piVar1;
  local_48 = *(undefined8 *)(DAT_000fa258 + 0xfa080);
  uStack64 = *(undefined8 *)(DAT_000fa258 + 0xfa088);
  local_38 = *(undefined8 *)(DAT_000fa258 + 0xfa090);
  uStack48 = *(undefined8 *)(DAT_000fa258 + 0xfa098);
  local_68 = *(undefined8 *)(DAT_000fa25c + 0xfa098);
  uStack81 = *(undefined8 *)(DAT_000fa25c + 0xfa0af);
  uStack96 = (undefined7)*(undefined8 *)(DAT_000fa25c + 0xfa0a0);
  local_59 = (undefined)*(undefined8 *)(DAT_000fa25c + 0xfa0a7);
  uStack88 = (undefined7)((ulonglong)*(undefined8 *)(DAT_000fa25c + 0xfa0a7) >> 8);
  local_88 = *(undefined8 *)(DAT_000fa260 + 0xfa0b2);
  uStack128 = *(undefined8 *)(DAT_000fa260 + 0xfa0ba);
  local_78 = *(undefined8 *)(DAT_000fa260 + 0xfa0c2);
  uStack112 = *(undefined8 *)(DAT_000fa260 + 0xfa0ca);
  __aeabi_memclr8(this,0x1cc);
  iVar2 = FUN_000fa288((char *)&local_48,this);
  if (iVar2 == 0) {
    iVar2 = atoi((char *)(this + 2));
    if (0x20000000 < (uint)(iVar2 * 0x1000000)) {
      __android_log_print(6,DAT_000fa264 + 0xfa0f2,DAT_000fa268 + 0xfa0f4,DAT_000fa26c + 0xfa0f6);
      iVar2 = -1;
    }
  }
  else {
    iVar2 = 0;
  }
  FUN_000fa288((char *)&local_68,this + 0x14);
  FUN_000fa288((char *)&local_88,this + 0x28);
  if (-1 < iVar2 * 0x1000000) {
    pQVar8 = this + 0x104;
    pQVar9 = this + 0x3c;
    iVar11 = 0;
    cVar12 = '\0';
    iVar3 = DAT_000fa270 + 0xfa136;
    iVar4 = DAT_000fa274 + 0xfa13c;
    do {
      puVar10 = auStack356;
      FUN_000be9c0(acStack236,100,iVar3,iVar11);
      FUN_000be9c0(acStack336,100,iVar4,iVar11);
      iVar6 = stat(acStack236,&sStack464);
      if ((iVar6 == 0) && (iVar6 = stat(acStack336,&sStack464), iVar6 == 0)) {
        iVar6 = FUN_000fa288(acStack236,puVar10);
        iVar5 = __strlen_chk(pQVar9,400);
        puVar7 = puVar10;
        if (iVar6 != 0) {
          puVar7 = *(undefined **)(DAT_000fa278 + 0xfa15e);
        }
        __strncat_chk(pQVar9,puVar7,199 - iVar5,200);
        iVar5 = FUN_000fa288(acStack336,puVar10);
        iVar6 = __strlen_chk(pQVar8,200);
        iVar6 = 199 - iVar6;
        if (iVar5 != 0) {
          puVar10 = *(undefined **)(DAT_000fa27c + 0xfa18a);
        }
      }
      else {
        iVar6 = __strlen_chk(pQVar9,400);
        puVar10 = *(undefined **)(DAT_000fa280 + 0xfa1d8);
        __strncat_chk(pQVar9,puVar10,199 - iVar6,200);
        iVar6 = __strlen_chk(pQVar8,200);
        iVar6 = 199 - iVar6;
      }
      __strncat_chk(pQVar8,puVar10,iVar6,200);
      if (iVar11 < (char)iVar2) {
        iVar11 = __strlen_chk(pQVar9,400);
        iVar6 = DAT_000fa284 + 0xfa216;
        __strncat_chk(pQVar9,iVar6,199 - iVar11,200);
        iVar11 = __strlen_chk(pQVar8,200);
        __strncat_chk(pQVar8,iVar6,199 - iVar11,200);
      }
      cVar12 = cVar12 + '\x01';
      iVar11 = (int)cVar12;
    } while (iVar11 <= (char)iVar2);
  }
  if (*piVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

