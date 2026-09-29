// OoT3D decomp @ 0032b6a8  name=FUN_0032b6a8  size=176

void FUN_0032b6a8(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;

  iVar2 = DAT_0032b758;
  *(undefined4 *)(DAT_0032b758 + *(short *)(param_1 + 0x1c) * 4) = 6;
  if (*(int *)(iVar2 + *(short *)(*(int *)(param_1 + 0x128) + 0x1c) * 4) != 6) {
    FUN_0032b6a8();
  }
  FUN_00374a58(DAT_0032b760,param_1 + 0x1a4,
               *(undefined4 *)(DAT_0032b75c + *(short *)(param_1 + 0x1c) * 4));
  iVar2 = DAT_0032b764;
  uVar4 = FUN_00363e64(param_1,*(int *)(DAT_0032b764 + 0x30) + 0x28);
  *(undefined4 *)(param_1 + 0xedc) = uVar4;
  uVar3 = FUN_00367358(*(undefined4 *)(iVar2 + 0x30),param_1 + 0x28);
  *(undefined2 *)(param_1 + 0x36) = uVar3;
  bVar1 = *(byte *)(param_1 + 0x230);
  *(ushort *)(param_1 + 0x240) =
       *(short *)(param_1 + 0x16) + (ushort)bVar1 * 0x800 + (ushort)bVar1 * -0x2000;
  *(ushort *)(param_1 + 0x242) = (ushort)bVar1 << 0xe;
  *(undefined2 *)(param_1 + 0x234) = 0;
  *(undefined1 *)(param_1 + 0x231) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x128) + 0x231) = 0;
  *(undefined4 *)(param_1 + 0x22c) = DAT_0032b768;
  return;
}
