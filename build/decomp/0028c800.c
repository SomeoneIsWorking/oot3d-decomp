// OoT3D decomp @ 0028c800  name=FUN_0028c800  size=108

void FUN_0028c800(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;

  FUN_003510b0(param_1,DAT_0028c86c,param_3,param_4,param_4);
  FUN_00372f38(param_1,param_2,param_1 + 0x1b8,0,0);
  iVar2 = DAT_0028c878;
  uVar1 = DAT_0028c870;
  *(undefined4 *)(param_1 + 0x1ac) = DAT_0028c870;
  *(undefined4 *)(param_1 + 0x1b0) = uVar1;
  *(undefined4 *)(param_1 + 0x1b4) = DAT_0028c874;
  if (*(int *)(iVar2 + 0x4e8) < 4) {
    *(ushort *)(DAT_0028c87c + 0xf8) = *(ushort *)(DAT_0028c87c + 0xf8) & 0xffdf;
  }
  *(undefined4 *)(param_1 + 0x1a4) = DAT_0028c880;
  return;
}
