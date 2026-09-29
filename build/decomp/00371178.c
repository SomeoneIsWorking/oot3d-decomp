// OoT3D decomp @ 00371178  name=FUN_00371178  size=188

char * FUN_00371178(undefined4 *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;

  if (param_2 == 0) {
    pcVar1 = (char *)(param_1 + 0xca9);
    iVar2 = 0x3c;
    do {
      if (*pcVar1 == '\0') {
        FUN_0030f128(pcVar1,param_1[0x21c3],*param_1,param_3,0);
        pcVar1[2] = '\0';
        return pcVar1;
      }
      iVar2 = iVar2 + 1;
      pcVar1 = pcVar1 + 0xd8;
    } while (iVar2 < 0xa0);
    return (char *)0x0;
  }
  pcVar1 = (char *)(param_1 + param_2 * 0x36 + 1);
  if (*(char *)(param_1 + param_2 * 0x36 + 1) != '\x01') {
    FUN_0030f128(pcVar1,param_1[0x21c3],*param_1,param_3,param_2);
    *(undefined1 *)((int)param_1 + param_2 * 0xd8 + 6) = 1;
    return pcVar1;
  }
  return pcVar1;
}
