// OoT3D decomp @ 00382ff0  name=FUN_00382ff0  size=72

void FUN_00382ff0(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_0036e864(param_2,(int)*(short *)(param_1 + 0x1c));
  if ((iVar1 == 0) && (iVar1 = FUN_0032d8d8(param_1), iVar1 != 0)) {
    FUN_00373264(param_1,DAT_00383038);
    *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 0x55;
  }
  return;
}
