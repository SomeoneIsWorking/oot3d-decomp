// OoT3D decomp @ 0041a4bc  name=FUN_0041a4bc  size=112

void FUN_0041a4bc(int param_1)

{
  undefined4 uVar1;
  int iVar2;

  FUN_003016e0(1);
  iVar2 = DAT_0041a530;
  uVar1 = DAT_0041a52c;
  if (*(char *)(param_1 + 0x2f4) != '\0') {
    *(undefined1 *)(param_1 + 0x2f4) = 0;
    *(undefined4 *)(param_1 + 0x2f0) = 0;
    *(undefined4 *)(param_1 + 0x2ec) = uVar1;
    *(undefined4 *)(param_1 + 0x2e8) = uVar1;
    *(undefined4 *)(iVar2 + 0x558) = 0xff;
    *(undefined1 *)(iVar2 + 0x56e) = 0xff;
    *(undefined4 *)(iVar2 + 0x4e4) = 1;
    uVar1 = DAT_0041a534;
    *(undefined1 *)(param_1 + 0x101) = 0;
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    *(undefined4 *)(param_1 + 0x10) = 0x2e8;
    FUN_00331754(0);
    return;
  }
  return;
}
