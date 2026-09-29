// OoT3D decomp @ 0036c520  name=FUN_0036c520  size=156

void FUN_0036c520(int param_1,char *param_2)

{
  int iVar1;

  iVar1 = *(int *)(param_2 + 0x7a8);
  if (iVar1 != 0) {
    FUN_003254f4(iVar1,param_1,iVar1);
    FUN_003254d8(param_1,param_2 + 0x3dc);
    FUN_00325430(param_1,param_2 + 0x3dc);
    param_2[0x3dc] = -1;
    param_2[0x7a8] = '\0';
    param_2[0x7a9] = '\0';
    param_2[0x7aa] = '\0';
    param_2[0x7ab] = '\0';
    FUN_00325354(param_1);
    FUN_0032525c(param_1,param_1 + 0x208c);
    FUN_00325114(param_1,(int)*param_2);
    if (0x12 < (int)*(short *)(param_1 + 0x104) - 0x51U) {
      FUN_003470b8(param_1);
      return;
    }
  }
  return;
}
