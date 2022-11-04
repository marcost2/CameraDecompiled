
/* qcamera::QCamera2HardwareInterface::getLedCal(int) */

void __thiscall
qcamera::QCamera2HardwareInterface::getLedCal(QCamera2HardwareInterface *this,int param_1)

{
  MotCtrl *this_00;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  uint local_ac0;
  int local_abc;
  char acStack2744 [1088];
  char acStack1656 [1024];
  undefined8 local_278;
  undefined8 uStack624;
  undefined8 local_268;
  undefined8 uStack608;
  undefined8 local_258;
  undefined8 uStack592;
  undefined8 local_248;
  undefined8 uStack576;
  undefined4 local_238 [10];
  byte local_210;
  byte local_20f;
  undefined4 local_200 [118];
  int local_28;
  
  piVar7 = *(int **)(DAT_001075a4 + 0x107426);
  local_28 = *piVar7;
  local_ac0 = 0x20c;
  local_258 = 0;
  uStack592 = 0;
  local_268 = 0;
  uStack608 = 0;
  local_278 = 0;
  uStack624 = 0;
  local_248 = 0;
  uStack576 = 0;
  local_abc = param_1;
  __aeabi_memclr8(acStack1656,0x400);
  __aeabi_memclr8(acStack2744,0x440);
  if ((uint)param_1 < 2) {
    __aeabi_memclr8(local_238,0x20c);
    if ((param_1 == 1) || ((param_1 == 0 && (this[0x1f80] != (QCamera2HardwareInterface)0x0)))) {
      this_00 = (MotCtrl *)
                QCameraParametersIntf::getMotCtrl((QCameraParametersIntf *)(this + 0x4ac));
      iVar3 = MotCtrl::motCtrl(this_00,0x19,&local_abc,4,local_238,&local_ac0);
      if (-1 < iVar3) {
        snprintf((char *)&local_278,0x40,(char *)0x40,DAT_001075b0 + 0x1074d4,(uint)local_210,
                 local_238[0]);
        if (local_20f != 0) {
          puVar5 = local_200;
          uVar6 = 0;
          iVar4 = 0;
          iVar3 = DAT_001075b4 + 0x1074ee;
          do {
            iVar1 = snprintf(acStack1656 + iVar4,0xffffffff,(char *)(0x3ff - iVar4),iVar3,*puVar5,
                             puVar5[1],(double)(float)puVar5[8],(double)(float)puVar5[7]);
            iVar4 = iVar4 + iVar1;
            puVar5 = puVar5 + 0xc;
            uVar6 = uVar6 + 1;
          } while (uVar6 < local_20f);
        }
        snprintf(acStack2744,0x440,(char *)0x440,DAT_001075b8 + 0x107544,&local_278,acStack1656);
        __android_log_print(4,DAT_001075bc + 0x107556,DAT_001075c0 + 0x107558,
                            DAT_001075c4 + 0x10755a,acStack2744);
        QCameraParametersIntf::setFactoryRet((QCameraParametersIntf *)(this + 0x4ac),acStack2744);
        uVar2 = 0;
        goto LAB_00107588;
      }
      iVar3 = DAT_001075d4 + 0x10757a;
      iVar4 = DAT_001075d8 + 0x10757c;
    }
    else {
      iVar3 = DAT_001075c8 + 0x107570;
      iVar4 = DAT_001075cc + 0x107572;
    }
  }
  else {
    iVar3 = DAT_001075a8 + 0x107478;
    iVar4 = DAT_001075ac + 0x10747a;
  }
  __android_log_print(6,iVar3,iVar4,DAT_001075d0 + 0x107582);
  uVar2 = 0x80000000;
LAB_00107588:
  if (*piVar7 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

