// OoT3D decomp @ 00184124  name=FUN_00184124  size=36

uint FUN_00184124(undefined4 param_1,int param_2)

{
  uint uVar1;

  uVar1 = FUN_0036bba8(param_1,*(short *)(param_2 + 0x1c) + 0x3a);
  if (uVar1 == 0) {
    uVar1 = (uint)*(ushort *)(DAT_00184148 + param_2);
  }
  return uVar1;
}
