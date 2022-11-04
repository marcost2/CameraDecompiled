
/* WARNING: Removing unreachable block (ram,0x0004ad22) */
/* WARNING: Removing unreachable block (ram,0x0004ad8e) */
/* WARNING: Removing unreachable block (ram,0x0004ae34) */
/* WARNING: Removing unreachable block (ram,0x0004ae40) */
/* WARNING: Removing unreachable block (ram,0x0004add4) */
/* WARNING: Removing unreachable block (ram,0x0004ae58) */
/* WARNING: Removing unreachable block (ram,0x0004ae62) */
/* WARNING: Removing unreachable block (ram,0x0004ade6) */
/* WARNING: Removing unreachable block (ram,0x0004ae76) */
/* WARNING: Removing unreachable block (ram,0x0004ae80) */
/* WARNING: Removing unreachable block (ram,0x0004ae92) */
/* WARNING: Removing unreachable block (ram,0x0004ae00) */
/* WARNING: Removing unreachable block (ram,0x0004ae20) */
/* WARNING: Removing unreachable block (ram,0x0004ae32) */
/* WARNING: Removing unreachable block (ram,0x0004ae96) */
/* WARNING: Removing unreachable block (ram,0x0004aea2) */
/* WARNING: Removing unreachable block (ram,0x0004ad3c) */
/* WARNING: Removing unreachable block (ram,0x0004ad4c) */
/* WARNING: Removing unreachable block (ram,0x0004aea8) */
/* qcamera::QCamera3HardwareInterface::initCapabilities(unsigned int) */

int qcamera::QCamera3HardwareInterface::initCapabilities(uint param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(DAT_0004aed4 + 0x4ace2);
  iVar1 = *piVar3;
  iVar2 = camera_open();
  if (iVar2 == 0) {
    iVar2 = 0;
    if (*(int *)(*(int *)(DAT_0004aee4 + 0x4ad6a) + 0x20) != 0) {
      mm_camera_debug_log();
    }
  }
  else if (*(int *)(*(int *)(DAT_0004aed8 + 0x4acfc) + 0x20) != 0) {
    mm_camera_debug_log();
  }
  if (*piVar3 != iVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}

