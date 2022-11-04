
/* WARNING: Removing unreachable block (ram,0x00107f66) */
/* qcamera::QCamera2HardwareInterface::doFactoryCmd(char const*, char const*) */

int __thiscall
qcamera::QCamera2HardwareInterface::doFactoryCmd
          (QCamera2HardwareInterface *this,char *param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  MotCtrl *this_00;
  uint uVar4;
  int iVar5;
  int *piVar6;
  QCameraParametersIntf *this_01;
  undefined auStack52 [4];
  undefined auStack48 [4];
  undefined auStack44 [4];
  undefined auStack40 [4];
  undefined auStack36 [4];
  undefined auStack32 [4];
  int local_1c;
  
  piVar6 = *(int **)(DAT_00107e98 + 0x107b10);
  local_1c = *piVar6;
  if (param_1 == (char *)0x0) {
    __android_log_print(6,DAT_00107f88 + 0x107cc2,DAT_00107f8c + 0x107cc4);
    iVar2 = -0x16;
LAB_00107d00:
    __android_log_print(6,DAT_0010800c + 0x107d0c,DAT_00108010 + 0x107d0e,iVar2);
    goto LAB_00107d86;
  }
  pcVar1 = (char *)(DAT_00107e9c + 0x107b26);
  if (param_2 != (char *)0x0) {
    pcVar1 = param_2;
  }
  __android_log_print(4,DAT_00107ea0 + 0x107b34,DAT_00107ea4 + 0x107b36,param_1,pcVar1);
  this_01 = (QCameraParametersIntf *)(this + 0x4ac);
  QCameraParametersIntf::removeFactoryRet(this_01);
  iVar2 = strcmp((char *)(DAT_00107ea8 + 0x107b4a),param_1);
  if (iVar2 == 0) {
    if (param_2 == (char *)0x0) {
      iVar2 = getModuleString(this);
      goto LAB_00107cfe;
    }
LAB_00107d2c:
    iVar2 = DAT_00107f90 + 0x107d34;
    iVar5 = DAT_00107f94 + 0x107d36;
  }
  else {
    iVar2 = strcmp((char *)(DAT_00107eac + 0x107b5a),param_1);
    if (iVar2 == 0) {
      if (param_2 == (char *)0x0) {
        iVar2 = getAfScore(this);
        goto LAB_00107cfe;
      }
      goto LAB_00107d2c;
    }
    iVar2 = strcmp((char *)(DAT_00107eb0 + 0x107b6a),param_1);
    if (iVar2 == 0) {
      if (param_2 == (char *)0x0) {
        iVar2 = getCalibrationStatus(this);
        goto LAB_00107cfe;
      }
      goto LAB_00107d2c;
    }
    iVar2 = strcmp((char *)(DAT_00107eb4 + 0x107b7a),param_1);
    if (iVar2 == 0) {
      if (param_2 == (char *)0x0) {
        iVar2 = 0;
LAB_00107cf8:
        iVar2 = getLedCal(this,iVar2);
        goto LAB_00107cfe;
      }
      goto LAB_00107d2c;
    }
    iVar2 = strcmp((char *)(DAT_00107eb8 + 0x107b8a),param_1);
    if (iVar2 == 0) {
      if (param_2 == (char *)0x0) {
        iVar2 = 1;
        goto LAB_00107cf8;
      }
      goto LAB_00107d2c;
    }
    iVar2 = strcmp((char *)(DAT_00107ebc + 0x107b9a),param_1);
    if (iVar2 == 0) {
      if (param_2 == (char *)0x0) {
        iVar2 = DAT_00107f98 + 0x107d1c;
        iVar5 = DAT_00107f9c + 0x107d1e;
LAB_00107d48:
        __android_log_print(6,iVar2,iVar5,DAT_00107fa0 + 0x107d50);
        goto LAB_00107d52;
      }
      goto LAB_00107d2c;
    }
    iVar2 = strcmp((char *)(DAT_00107ec0 + 0x107baa),param_1);
    if (iVar2 == 0) {
      if (param_2 == (char *)0x0) {
        iVar2 = DAT_00107fa4 + 0x107d48;
        iVar5 = DAT_00107fa8 + 0x107d4a;
        goto LAB_00107d48;
      }
      goto LAB_00107d2c;
    }
    iVar2 = strcmp((char *)(DAT_00107ec4 + 0x107bba),param_1);
    if ((iVar2 == 0) || (iVar2 = strcmp((char *)(DAT_00107ec8 + 0x107bca),param_1), iVar2 == 0)) {
      if (param_2 == (char *)0x0) goto LAB_00107d20;
LAB_00107d52:
      QCameraParametersIntf::setFactoryRet(this_01,(char *)(DAT_00107fb4 + 0x107d5a));
LAB_00107d5c:
      iVar2 = QCameraParametersIntf::getFactoryRet(this_01);
      if (iVar2 == 0) {
        __android_log_print(4,DAT_00108014 + 0x107d80,DAT_00108018 + 0x107d82);
      }
      else {
        __android_log_print(4,DAT_00107fd8 + 0x107d70,DAT_00107fdc + 0x107d72,iVar2);
      }
      iVar2 = 0;
      goto LAB_00107d86;
    }
    iVar2 = strcmp((char *)(DAT_00107ecc + 0x107bda),param_1);
    if (iVar2 == 0) {
      if (param_2 != (char *)0x0) goto LAB_00107d2c;
      goto LAB_00107d52;
    }
    iVar2 = strcmp((char *)(DAT_00107ed0 + 0x107bea),param_1);
    if (iVar2 != 0) {
      iVar2 = strcmp((char *)(DAT_00107ed4 + 0x107bfa),param_1);
      if (iVar2 == 0) {
        if (param_2 != (char *)0x0) {
          iVar2 = setDisableSharpening(this,param_2);
          goto LAB_00107cfe;
        }
        goto LAB_00107d20;
      }
      iVar2 = strcmp((char *)(DAT_00107ed8 + 0x107c0a),param_1);
      if (iVar2 == 0) {
        if (param_2 != (char *)0x0) {
          uVar4 = atoi(param_2);
          if (1 < uVar4) {
LAB_00107e46:
            __android_log_print(6,DAT_00107fb8 + 0x107e50,DAT_00107fbc + 0x107e52);
            iVar2 = -0x80000000;
            goto LAB_00107d00;
          }
          uVar3 = uVar4;
          if (uVar4 != 0) {
            uVar3 = 1;
          }
          this[0x1f7a] = SUB41(uVar3,0);
          __android_log_print(4,DAT_00107fc0 + 0x107de4,DAT_00107fc4 + 0x107de6,
                              DAT_00107fc8 + 0x107de8,uVar4);
          uVar4 = count_leading_zeroes(uVar4);
          iVar2 = QCameraParametersIntf::setGamma(this_01,uVar4 >> 5);
          goto LAB_00107cfe;
        }
        goto LAB_00107d20;
      }
      iVar2 = strcmp((char *)(DAT_00107edc + 0x107c1a),param_1);
      if (iVar2 == 0) {
        if (param_2 != (char *)0x0) {
          uVar4 = atoi(param_2);
          if (1 < uVar4) goto LAB_00107e46;
          uVar3 = uVar4;
          if (uVar4 != 0) {
            uVar3 = 1;
          }
          this[0x1f7b] = SUB41(uVar3,0);
          __android_log_print(4,DAT_00107fcc + 0x107e22,DAT_00107fd0 + 0x107e24,
                              DAT_00107fd4 + 0x107e26,uVar4);
          uVar4 = count_leading_zeroes(uVar4);
          iVar2 = QCameraParametersIntf::setLensCorrection(this_01,uVar4 >> 5);
          goto LAB_00107cfe;
        }
        goto LAB_00107d20;
      }
      iVar2 = strcmp((char *)(DAT_00107ee0 + 0x107c2a),param_1);
      if (iVar2 != 0) {
        iVar2 = strcmp((char *)(DAT_00107ee4 + 0x107c3a),param_1);
        if (iVar2 == 0) {
          if (param_2 != (char *)0x0) {
            iVar2 = setLedCurrents(this,param_2,0x15);
            goto LAB_00107cfe;
          }
        }
        else {
          iVar2 = strcmp((char *)(DAT_00107ee8 + 0x107c4a),param_1);
          if (iVar2 == 0) {
            if (param_2 != (char *)0x0) {
              iVar2 = setLedCurrents(this,param_2,0x16);
              goto LAB_00107cfe;
            }
          }
          else {
            iVar2 = strcmp((char *)(DAT_00107fe0 + 0x107c5a),param_1);
            if (iVar2 == 0) {
              if (param_2 != (char *)0x0) {
                iVar2 = setEnableLedCal(this,param_2);
                goto LAB_00107cfe;
              }
            }
            else {
              iVar2 = strcmp((char *)(DAT_00107fe4 + 0x107c6a),param_1);
              if (iVar2 == 0) {
                if (param_2 != (char *)0x0) {
                  iVar2 = setFlashLedWrite(this,param_2);
                  goto LAB_00107cfe;
                }
              }
              else {
                iVar2 = strcmp((char *)(DAT_00107fe8 + 0x107c7a),param_1);
                if (iVar2 != 0) {
                  iVar2 = strcmp((char *)(DAT_00107ffc + 0x107c8a),param_1);
                  if (iVar2 == 0) {
                    if (param_2 != (char *)0x0) goto LAB_00107d2c;
                    iVar2 = getLedCalEeprom(this);
                  }
                  else {
                    iVar2 = strcmp((char *)(DAT_00108000 + 0x107c9a),param_1);
                    if (iVar2 != 0) {
                      __android_log_print(6,DAT_00108004 + 0x107cae,DAT_00108008 + 0x107cb0,param_1)
                      ;
                      iVar2 = -0x16;
                      goto LAB_00107d00;
                    }
                    if (param_2 != (char *)0x0) goto LAB_00107d2c;
                    iVar2 = getEepromOtpData(this);
                  }
LAB_00107cfe:
                  if (iVar2 != 0) goto LAB_00107d00;
                  goto LAB_00107d5c;
                }
                if (param_2 != (char *)0x0) {
                  iVar2 = sscanf(param_2,(char *)(DAT_00107fec + 0x107f26),auStack44,auStack40,
                                 auStack52,auStack48,auStack36,auStack32);
                  if (iVar2 == 6) {
                    this_00 = (MotCtrl *)QCameraParametersIntf::getMotCtrl(this_01);
                    iVar2 = 0;
                    uVar4 = MotCtrl::motCtrl(this_00,0x17,auStack52,0x18,(void *)0x0,(uint *)0x0);
                    if (uVar4 < 0x80000000) goto LAB_00107cfe;
                  }
                  __android_log_print(6,DAT_00107ff0 + 0x107f56,DAT_00107ff4 + 0x107f58,
                                      DAT_00107ff8 + 0x107f5a);
                  iVar2 = -0x80000000;
                  goto LAB_00107d00;
                }
              }
            }
          }
        }
        goto LAB_00107d20;
      }
      if (param_2 == (char *)0x0) goto LAB_00107d20;
      uVar4 = atoi(param_2);
      if (1 < uVar4) goto LAB_00107e46;
      *(uint *)(this + 0x1f7c) = uVar4;
      goto LAB_00107d5c;
    }
    if (param_2 != (char *)0x0) {
      iVar2 = setManualLensPos(this,param_2);
      goto LAB_00107cfe;
    }
LAB_00107d20:
    iVar2 = DAT_00107fac + 0x107d28;
    iVar5 = DAT_00107fb0 + 0x107d2a;
  }
  __android_log_print(6,iVar2,iVar5);
  iVar2 = -0x16;
LAB_00107d86:
  if (*piVar6 == local_1c) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

