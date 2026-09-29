// OoT3D decomp @ 0025ed64  name=FUN_0025ed64  size=436

void FUN_0025ed64(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;

  FUN_00372f38(param_1,param_2,param_1 + 0x3a4,0x11,param_1 + 0x3a8,0x12,param_1 + 0x3ac,0x13,
               param_1 + 0x3b0,0x14,param_1 + 0x3b4,0x15,param_1 + 0x3b8,0x16,param_1 + 0x3bc,0x17,
               param_1 + 0x3c0,0x18,param_1 + 0x3c4,0x19,param_1 + 0x3c8,0x1a,param_1 + 0x3cc,0x1b,
               param_1 + 0x3d0,0x1c,param_1 + 0x3d4,0x1d,param_1 + 0x3d8,0x1e,0);
  uVar1 = FUN_00353fd4(param_1,param_2,4);
  FUN_003532e8(param_1,0);
  uVar1 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar1);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  FUN_00350eb8(param_2,param_1 + 0x1c0);
  FUN_00350d48(param_2,param_1 + 0x1c0,param_1,DAT_0025ef18,param_1 + 0x1e0);
  iVar2 = FUN_0036e864(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
  if (iVar2 == 0) {
    FUN_003510b0(param_1,DAT_0025ef1c);
    FUN_0037322c(DAT_0025ef20,param_1);
    uVar1 = DAT_0025ef28;
    *(undefined4 *)(param_1 + 0x1bc) = DAT_0025ef24;
    *(undefined2 *)(param_1 + 0x230) = 0;
    *(undefined2 *)(param_1 + 0x234) = 0;
    *(undefined4 *)(param_1 + 0x28) = uVar1;
    *(undefined4 *)(param_1 + 0x2c) = DAT_0025ef2c;
    *(undefined4 *)(param_1 + 0x30) = DAT_0025ef30;
    *(undefined1 *)(param_1 + 0x19b) = 2;
    return;
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}
