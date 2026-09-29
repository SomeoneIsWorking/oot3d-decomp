// OoT3D decomp @ 001f3ba4  name=FUN_001f3ba4  size=108

void FUN_001f3ba4(int param_1,int param_2)

{
  int iVar1;

  FUN_00351034(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4));
  FUN_00350f34(param_1,param_1 + 0x1c4,param_1 + 0x1c8,0);
  if (*(char *)(param_2 + 0x3237) == '\0') {
    *(undefined1 *)(param_2 + 0x3237) = 0xff;
  }
  iVar1 = *(int *)(DAT_001f3c10 + param_2);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x1714) = *(uint *)(iVar1 + 0x1714) & 0xfbffffff;
  }
  return;
}
