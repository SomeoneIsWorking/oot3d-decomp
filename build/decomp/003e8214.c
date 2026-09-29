// OoT3D decomp @ 003e8214  name=FUN_003e8214  size=104

void FUN_003e8214(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;

  iVar2 = FUN_0036e864(param_2,*(undefined4 *)(param_1 + 0x1c0));
  if (iVar2 != 0) {
    FUN_00375c44(param_2,param_1 + 0x28,0x1e,DAT_003e827c);
    FUN_0037322c(DAT_003e8280,param_1);
    FUN_0036cf80(param_2,param_1,0);
    uVar1 = DAT_003e8288;
    *(undefined4 *)(param_1 + 0x6c) = DAT_003e8284;
    *(undefined4 *)(param_1 + 0x1bc) = uVar1;
  }
  return;
}
