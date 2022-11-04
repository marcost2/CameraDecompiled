
/* android::dumpFile(char const*, char*, int) */

char * android::dumpFile(char *param_1,char *param_2,int param_3)

{
  FILE *__stream;
  char *pcVar1;
  
  __stream = fopen(param_1,(char *)(DAT_00103af4 + 0x103ad0));
  if (__stream != (FILE *)0x0) {
    pcVar1 = fgets(param_2,param_3,__stream);
    fclose(__stream);
    return pcVar1;
  }
  return (char *)0x0;
}

