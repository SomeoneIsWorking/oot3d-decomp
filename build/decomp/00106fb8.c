// OoT3D decomp @ 00106fb8  name=FUN_00106fb8  size=132

void FUN_00106fb8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;

  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    iVar3 = FUN_003731e0(param_1 + 0x1a4);
    uVar2 = DAT_00107040;
    iVar1 = DAT_0010703c;
    if (iVar3 != 0) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
      *(undefined2 *)(iVar1 + param_1) = 0x4b;
      FUN_00374a58(uVar2,param_1 + 0x1a4,0xb);
      *(undefined4 *)(param_1 + 0x7d8) = DAT_00107044;
    }
    FUN_003705a0(DAT_0010704c,DAT_00107048,param_1 + 0x6c);
  }
  if ((*(ushort *)(param_1 + 0x90) & 2) != 0) {
    FUN_00375bcc(param_1,DAT_00107050);
    return;
  }
  return;
}
