
/* BSTBokehParam::getFocusPoint(int, int) */

int __thiscall BSTBokehParam::getFocusPoint(BSTBokehParam *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  
  if (((*(byte *)(DAT_00100b18 + 0x1009b0) & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(DAT_00100b1c + 0x100adc), iVar1 = DAT_00100b20, iVar2 != 0)) {
    *(undefined4 *)(DAT_00100b20 + 0x100aec) = 0;
    *(undefined4 *)(iVar1 + 0x100af0) = 0;
    __cxa_guard_release(DAT_00100b24 + 0x100af4);
  }
  iVar1 = DAT_00100b28;
  dVar9 = DAT_00100b00;
  pfVar3 = (float *)(DAT_00100b28 + 0x1009e6);
  *pfVar3 = SUB84(ROUND(((double)(longlong)param_1 / DAT_00100af8) *
                        (double)(ulonglong)*(uint *)(this + 0x1c)),0);
  *(int *)(iVar1 + 0x1009ea) =
       SUB84(ROUND(((double)(longlong)param_2 / dVar9) * (double)(ulonglong)*(uint *)(this + 0x20)),
             0);
  if (this[0x28] != (BSTBokehParam)0x0) {
    iVar5 = *(int *)(this + 0x34);
    iVar4 = *(int *)(this + 0x38);
    iVar6 = *(int *)(this + 0x3c);
    iVar2 = *(int *)(this + 0x40);
    fVar7 = DAT_00100b10 / (float)(longlong)*(int *)(this + 0x124);
    fVar8 = DAT_00100b14 / (float)(longlong)*(int *)(this + 0x120);
    if (*(int *)(*(int *)(DAT_00100b2c + 0x100a1a) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_00100b30 + 0x100a4e,0x78,DAT_00100b38 + 0x100a52,
                          DAT_00100b34 + 0x100a50,DAT_00100b30 + 0x100a4e,*(int *)(this + 0x120),
                          *(int *)(this + 0x124),iVar5,iVar4,iVar6,iVar2);
    }
    dVar9 = (double)(longlong)iVar4 + (double)(longlong)iVar2 * 0.5 + DAT_00100b08;
    *pfVar3 = ROUND((float)(longlong)
                           SUB84(ROUND((double)(longlong)iVar5 + (double)(longlong)iVar6 * 0.5),0) /
                    fVar8);
    *(float *)(iVar1 + 0x1009ea) = ROUND((float)(longlong)SUB84(ROUND(dVar9),0) / fVar7);
  }
  return DAT_00100b3c + 0x100acc;
}

