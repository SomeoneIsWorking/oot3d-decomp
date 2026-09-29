// OoT3D decomp @ 00299ef8  name=FUN_00299ef8  size=196

void FUN_00299ef8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined1 auStack_44 [12];
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_18;

  FUN_00372224(auStack_44,param_1 + 0x148);
  uVar1 = *(undefined2 *)(param_1 + 0x36);
  FUN_0033e800(param_1,param_2,param_3,1,0);
  FUN_00372224(param_1 + 0x148,param_1 + 0x117c);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x1188);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x1198);
  iVar2 = DAT_00299fbc;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x11a8);
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(iVar2 + param_1);
  FUN_002894e0(param_1,param_2,param_3,1,0);
  FUN_00372224(param_1 + 0x148,auStack_44);
  *(undefined4 *)(param_1 + 0x28) = local_38;
  *(undefined4 *)(param_1 + 0x2c) = local_28;
  *(undefined4 *)(param_1 + 0x30) = local_18;
  *(undefined2 *)(param_1 + 0xbe) = uVar1;
  return;
}
