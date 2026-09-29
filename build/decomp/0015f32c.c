// OoT3D decomp @ 0015f32c  name=FUN_0015f32c  size=68

void FUN_0015f32c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;

  iVar2 = FUN_0036bc98();
  uVar1 = DAT_0015f374;
  if (iVar2 == 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10000;
    FUN_0036bb28(uVar1,param_1,param_2);
    return;
  }
  *(undefined4 *)(param_1 + 0x444) = DAT_0015f370;
  return;
}
