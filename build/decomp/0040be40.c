// OoT3D decomp @ 0040be40  name=FUN_0040be40  size=180

void FUN_0040be40(int param_1)

{
  int iVar1;

  if (*(char *)(param_1 + 0xeb4) != '\x05') {
    if (*(char *)(param_1 + 0xeb4) != '\x04') {
      if (*(int *)(param_1 + 0xfb0) != 0) {
        *(undefined4 *)(param_1 + 0xfa4) = 3;
        *(undefined1 *)(param_1 + 0xf38) = 7;
        *(undefined4 *)(param_1 + 0xfc4) = 0;
        FUN_00305790(param_1 + 0x44);
        FUN_0040bc68(param_1 + 0x44);
        FUN_003053fc(DAT_0040bef4,param_1);
        return;
      }
      *(undefined4 *)(param_1 + 0xfa4) = 2;
      *(undefined1 *)(param_1 + 0xf38) = 6;
      iVar1 = FUN_003056a8(*(undefined4 *)(param_1 + 8));
      if (iVar1 == 0) {
        FUN_003057a0(param_1 + 0x44,*(int *)(param_1 + 0xfac) == -1);
        return;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x570) + 0x6c) = 0;
      return;
    }
    *(undefined1 *)(param_1 + 0xf38) = 9;
  }
  return;
}
