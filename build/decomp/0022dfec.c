// OoT3D decomp @ 0022dfec  name=FUN_0022dfec  size=480

void FUN_0022dfec(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;

  uVar1 = FUN_00372f38(param_1,param_2,param_1 + 0x8a8,1,param_1 + 0x8ac,3,0);
  *(undefined4 *)(param_1 + 0x8f0) = uVar1;
  TorchAnimationModel_00350508(param_1 + 0x8e4,param_2,0,0xb);
  iVar2 = DAT_0022e1cc;
  if (*(int *)(param_2 + 0x7f8c) != 10) {
    *(short *)(DAT_0022e1cc + *(int *)(param_2 + 0x7f8c) * 6) =
         (short)(int)*(float *)(param_1 + 0x28);
    *(short *)(iVar2 + *(int *)(param_2 + 0x7f8c) * 6 + 2) = (short)(int)*(float *)(param_1 + 0x2c);
    *(short *)(iVar2 + *(int *)(param_2 + 0x7f8c) * 6 + 4) = (short)(int)*(float *)(param_1 + 0x30);
    *(char *)(iVar2 + 0x3c + *(int *)(param_2 + 0x7f8c)) = (char)*(undefined2 *)(param_1 + 0x1c);
    iVar2 = *(int *)(param_2 + 0x7f8c) + 1;
    *(int *)(param_2 + 0x7f8c) = iVar2;
    if (iVar2 < 2) {
      FUN_003510b0(param_1,DAT_0022e1d0);
      FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,2,param_1 + 0x228,param_1 + 0x568,0x10);
      FUN_00353dd0(param_2);
      FUN_00353d24(param_2,param_1 + 0x938,param_1,DAT_0022e1d4);
      FUN_00353dd0(param_2,param_1 + 0x990);
      FUN_00353d24(param_2,param_1 + 0x990,param_1,DAT_0022e1d8);
      FUN_00350d20(param_1 + 0xa0,DAT_0022e1dc + 0x78);
      uVar1 = FUN_0034faa8(param_2,param_2 + 0xa70,param_1 + 0x920);
      *(undefined4 *)(param_1 + 0x91c) = uVar1;
      FUN_0036f410(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                   *(undefined4 *)(param_1 + 0x10),param_1 + 0x920,0xff,0xff,0xff,0,0);
      *(undefined4 *)(param_1 + 200) = DAT_0022e1e0;
      FUN_0034c2e8(param_1,param_2);
      return;
    }
  }
  *(undefined2 *)(param_1 + 0x1c) = 0xff;
  FUN_00374428(param_1);
  return;
}
