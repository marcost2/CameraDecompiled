
/* qcamera::MotParamStateMachine::beginCommitBatch() */

undefined4 __thiscall qcamera::MotParamStateMachine::beginCommitBatch(MotParamStateMachine *this)

{
  pthread_t pVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)this != 0) {
    iVar3 = *(int *)(this + 8);
    if (iVar3 == 1) {
      pVar1 = pthread_self();
      if (*(pthread_t *)(this + 0xc) != pVar1) {
                    /* WARNING: Subroutine does not return */
        fatalError(this,(char *)(DAT_00108fbc + 0x108fa0),(char *)(DAT_00108fc0 + 0x108fa2),0xcd);
      }
    }
    else if (iVar3 == 0 || iVar3 == 2) {
                    /* WARNING: Subroutine does not return */
      fatalError(this,(char *)(DAT_00108fa4 + 0x108f48),(char *)(DAT_00108fa8 + 0x108f4a),0xd4);
    }
    if (0 < *(int *)(this + 0x14)) {
      iVar2 = *(int *)(this + 0x14) + -1;
      *(int *)(this + 0x14) = iVar2;
      __android_log_print(3,DAT_00108fb0 + 0x108f7e,DAT_00108fb4 + 0x108f80,DAT_00108fb8 + 0x108f82,
                          iVar2,*(undefined4 *)(this + 0x10),
                          *(undefined4 *)(*(int *)(DAT_00108fac + 0x108f6c) + iVar3 * 4));
      return 1;
    }
    *(undefined4 *)(this + 8) = 2;
  }
  return 0;
}

