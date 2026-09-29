// OoT3D decomp @ 00287100  name=FUN_00287100  size=272

void FUN_00287100(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;

  *(undefined2 *)(param_1 + 0xc0) = 0;
  uVar3 = DAT_00287210;
  *(undefined2 *)(param_1 + 0x38) = 0;
  FUN_003510b0(param_1,uVar3);
  iVar2 = DAT_00287214;
  FUN_0037572c(*(undefined4 *)
                (DAT_00287214 + ((int)((uint)*(ushort *)(param_1 + 0x1c) << 0x17) >> 0x1f) * -0xc),
               param_1);
  *(undefined4 *)(param_1 + 0x1c0) = DAT_00287218;
  FUN_0037322c(*(undefined4 *)
                (iVar2 + ((int)((uint)*(ushort *)(param_1 + 0x1c) << 0x17) >> 0x1f) * -0xc + 4),
               param_1);
  uVar1 = FUN_00372f38(param_1,param_2,param_1 + 0x1d0,0,0);
  uVar3 = DAT_0028721c;
  if ((int)((uint)*(ushort *)(param_1 + 0x1c) << 0x10) < 0) {
    *(undefined4 *)(param_1 + 0x1bc) = DAT_00287220;
    iVar2 = FUN_0036e864(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x140) = 0;
    }
    FUN_003532e8(param_1,0);
    uVar3 = FUN_003532c0(uVar1,0);
    uVar3 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar3);
    *(undefined4 *)(param_1 + 0x1a4) = uVar3;
  }
  else {
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x1bc) = uVar3;
  }
  return;
}
