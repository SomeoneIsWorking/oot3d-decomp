// OoT3D decomp @ 003f529c  name=FUN_003f529c  size=140

void FUN_003f529c(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;

  iVar2 = FUN_00373074(param_2 + 0x3a58,*(undefined1 *)(param_1 + 0x1b8));
  if (iVar2 != 0) {
    bVar1 = *(byte *)(param_1 + 0x1b8);
    *(byte *)(param_1 + 0x1e) = bVar1;
    if ((bVar1 < 0x13) &&
       (param_2 = param_2 + (uint)bVar1 * 0x80, *(int *)(DAT_003f5328 + param_2) != 0)) {
      param_2 = param_2 + 0x3a5c;
    }
    else {
      param_2 = 0;
    }
    if (param_2 != 0) {
      uVar3 = FUN_0031488c(*(undefined4 *)(param_1 + 0x178),param_2 + 0x10,
                           (int)*(short *)(param_1 + 0x1b4),0);
      *(undefined4 *)(param_1 + 0x1b0) = uVar3;
    }
    *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_1 + 0x1a8);
    *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0x1a4);
  }
  return;
}
