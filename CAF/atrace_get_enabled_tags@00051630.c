
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* atrace_get_enabled_tags() */

undefined8 atrace_get_enabled_tags(void)

{
  atrace_init();
  return **(undefined8 **)(DAT_00051644 + 0x5163c);
}

