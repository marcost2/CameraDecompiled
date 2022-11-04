
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* atrace_init() */

void atrace_init(void)

{
  bool bVar1;
  
  bVar1 = std::__1::atomic_load_explicit_bool_(*(atomic **)(DAT_00051664 + 0x51650),2);
  if (bVar1) {
    return;
  }
  __ThumbV7PILongThunk_atrace_setup();
  return;
}

