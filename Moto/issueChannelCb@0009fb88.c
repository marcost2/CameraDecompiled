
/* qcamera::QCamera3ProcessingChannel::issueChannelCb(native_handle const**, unsigned int) */

void __thiscall
qcamera::QCamera3ProcessingChannel::issueChannelCb
          (QCamera3ProcessingChannel *this,native_handle **param_1,uint param_2)

{
  int *piVar1;
  undefined4 local_28;
  native_handle **ppnStack36;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack24;
  int local_14;
  
  piVar1 = *(int **)(DAT_0009fbcc + 0x9fb96);
  local_14 = *piVar1;
  local_28 = *(undefined4 *)(this + 0x14e0);
  local_1c = 0xffffffff;
  uStack24 = 0xffffffff;
  local_20 = 0;
  ppnStack36 = param_1;
  if (*(code **)(this + 0x60) != (code *)0x0) {
    (**(code **)(this + 0x60))(0,&local_28,param_2,0,*(undefined4 *)(this + 4));
  }
  if (*piVar1 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

