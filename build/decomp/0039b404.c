// OoT3D decomp @ 0039b404  name=FUN_0039b404  size=180

void FUN_0039b404(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;

  FUN_0031a3dc();
  uVar3 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = DAT_0039b4b8;
  FUN_00376340(DAT_0039b4c4,DAT_0039b4c0,DAT_0039b4bc,param_2,param_1,7);
  *(undefined4 *)(param_1 + 100) = uVar3;
  FUN_00370734(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0xbbc));
  FUN_003264c8(param_1);
  iVar2 = FUN_0037571c(param_2);
  if (iVar2 == 0) {
    uVar1 = *(undefined1 *)(DAT_0039b4c8 + param_2);
    *(ushort *)(DAT_0039b4cc + 0x38) = *(ushort *)(DAT_0039b4cc + 0x38) | 0x20;
    FUN_00375c10(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x10) >> 0x18);
    if (*(int *)(param_1 + 0xbe4) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xbe4) + 0x21c) = 1;
    }
    *(undefined4 *)(param_1 + 0xbbc) = 0x2a;
    *(undefined1 *)(param_1 + 3) = uVar1;
  }
  return;
}
