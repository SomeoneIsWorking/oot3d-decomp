// OoT3D decomp @ 004bafa8  name=FUN_004bafa8  size=300

void FUN_004bafa8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined *)(param_1 + 0xd) = 2;
  *(undefined *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined *)(param_1 + 0x7e) = 0;
  uVar2 = DAT_004bb0d8;
  uVar1 = DAT_004bb0d4;
  *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) & 0xffc0 | 5;
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  *(ushort *)(param_1 + 0x7c) = *(ushort *)(param_1 + 0x7c) | 1;
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  *(undefined4 *)(param_1 + 100) = uVar2;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  *(ushort *)(param_1 + 0x7c) = *(ushort *)(param_1 + 0x7c) | 1;
  *(undefined4 *)(param_1 + 0x20) = DAT_004bb0dc;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  *(ushort *)(param_1 + 0x7c) = *(ushort *)(param_1 + 0x7c) | 0x26;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_0034325c(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  return;
}

