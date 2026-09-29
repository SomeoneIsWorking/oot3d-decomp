// OoT3D decomp @ 0018cf80  name=FUN_0018cf80  size=408

void FUN_0018cf80(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;

  FUN_003510b0(param_1,DAT_0018d118);
  uVar1 = DAT_0018d124;
  FUN_00372d4c(DAT_0018d124,DAT_0018d11c,param_1 + 0xbc,DAT_0018d120);
  FUN_00372f38(param_1,param_2,param_1 + 0x8b8,0,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,1,param_1 + 0x228,param_1 + 0x534,0xf);
  iVar2 = DAT_0018d128;
  uVar3 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(DAT_0018d128 + 0x20));
  uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_0018d12c,uVar1,uVar3,*(undefined4 *)(iVar2 + 0x2c),param_1 + 0x1a4,
               *(undefined4 *)(iVar2 + 0x20),*(undefined1 *)(iVar2 + 0x28));
  *(undefined4 *)(param_1 + 0x8b4) = 2;
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0x844,param_1,DAT_0018d130);
  uVar1 = DAT_0018d134;
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  *(undefined4 *)(param_1 + 0x89c) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 6;
  *(ushort *)(param_1 + 0x8b0) = *(ushort *)(param_1 + 0x8b0) | 1;
  if (*(short *)(param_1 + 0x1c) == 1) {
    *(undefined4 *)(param_1 + 0x840) = DAT_0018d138;
  }
  else {
    FUN_003539d8(param_1,param_2);
    *(undefined4 *)(param_1 + 0x840) = DAT_0018d13c;
  }
  if (*(int *)(DAT_0018d140 + 4) != 0) {
    FUN_00374428(param_1);
  }
  if ((*(short *)(param_1 + 0x1c) == 1) &&
     (((*(ushort *)(DAT_0018d144 + 0x3e) & 0x8000) == 0 ||
      ((*(ushort *)(DAT_0018d148 + 0x8c) & 1) == 0)))) {
    FUN_00374428(param_1);
    return;
  }
  return;
}
