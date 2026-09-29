// OoT3D decomp @ 00121120  name=FUN_00121120  size=208

void FUN_00121120(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;

  iVar3 = FUN_0036e5e0(DAT_001211f4,DAT_001211f0,param_1 + 0x1c8);
  uVar1 = DAT_001211f8;
  if (iVar3 != 0) {
    FUN_0036f4e4(DAT_001211f8,param_1 + 0x1c8);
  }
  *(undefined2 *)(param_1 + 0x11a) = 0x3c;
  FUN_003731e0(param_1 + 0x1c8);
  FUN_003705a0(uVar1,DAT_001211fc,param_1 + 0x6c);
  if ((*(uint *)(param_1 + 4) & 0x8000) == 0) {
    FUN_00370378(param_1 + 0xbc,0x6800,0x200);
    *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + -0x300;
    if (*(short *)(param_1 + 0x252) != 0) {
      *(short *)(param_1 + 0x252) = *(short *)(param_1 + 0x252) + -1;
    }
    if (((*(ushort *)(param_1 + 0x90) & 1) != 0) || (*(short *)(param_1 + 0x252) == 0)) {
      *(undefined2 *)(param_1 + 0x252) = 0x17;
      uVar2 = DAT_00121200;
      *(undefined4 *)(param_1 + 0x6c) = uVar1;
      *(undefined4 *)(param_1 + 0x24c) = uVar2;
      return;
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x11a) = 0x3c;
  }
  return;
}
