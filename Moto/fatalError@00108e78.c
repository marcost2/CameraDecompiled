
/* qcamera::MotParamStateMachine::fatalError(char const*, char const*, int) */

void __thiscall
qcamera::MotParamStateMachine::fatalError
          (MotParamStateMachine *this,char *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 8);
  uVar2 = *(undefined4 *)(this + 0x10);
  uVar1 = gettid();
  __android_log_print(6,DAT_00108ec0 + 0x108eac,DAT_00108ec4 + 0x108eae,param_2,param_3,param_1,
                      *(undefined4 *)(*(int *)(DAT_00108ebc + 0x108e9c) + iVar3 * 4),uVar2,uVar1);
  usleep(1000);
                    /* WARNING: Subroutine does not return */
  abort();
}

