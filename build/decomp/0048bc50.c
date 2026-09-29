// OoT3D decomp @ 0048bc50  name=FUN_0048bc50  size=40

uint FUN_0048bc50(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int local_8;

  local_8 = param_4;
  iVar1 = FUN_003043c0(param_1 + 4,&local_8,2);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)(local_8 << 0x10) >> 0x18;
  }
  return uVar2;
}
