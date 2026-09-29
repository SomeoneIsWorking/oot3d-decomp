// OoT3D decomp @ 00409054  name=FUN_00409054  size=120

void FUN_00409054(undefined4 param_1,uint param_2,undefined4 *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint local_14;

  local_14 = param_4 ^ 1;
  uVar1 = FUN_004095e4();
  if ((param_2 & 0x7fffffff) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (param_2 >> 0x17) - 0x7f;
  }
  local_14 = local_14 | uVar1 & 0xffffffe | iVar2 << 0x18;
  FUN_00307bd8(*param_3,0x8b,1,0,0xf,&local_14);
  return;
}
