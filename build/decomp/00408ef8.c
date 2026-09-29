// OoT3D decomp @ 00408ef8  name=FUN_00408ef8  size=76

void FUN_00408ef8(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;

  piVar1 = *(int **)(*param_1 + 8);
  *piVar1 = param_2 << 8;
  piVar1[1] = DAT_00408f44;
  FUN_00371738(piVar1 + 2,param_3,0x410);
  *(int **)(*param_1 + 8) = piVar1 + 0x106;
  return;
}
