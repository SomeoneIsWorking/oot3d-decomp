// OoT3D decomp @ 0049588c  name=FUN_0049588c  size=52

undefined4 FUN_0049588c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_8;

  local_8 = param_4;
  iVar1 = FUN_003043c0(param_1 + 0xc,&local_8,1);
  if ((iVar1 == 0) || (uVar2 = 0, (uint)(local_8 << 0x10) >> 0x18 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}
