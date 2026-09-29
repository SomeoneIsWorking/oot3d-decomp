// OoT3D decomp @ 00300588  name=FUN_00300588  size=148

void FUN_00300588(int param_1,int param_2)

{
  undefined4 uVar1;

  if (*(char *)(param_1 + 4) == '\0') {
    return;
  }
  if (param_2 != 0x400) {
    if (param_2 == 0x401) {
      FUN_00311364(DAT_0030061c,*(undefined4 *)(param_1 + 0x3c));
      FUN_002feabc(0,0,0xf0,0x140);
      goto LAB_00300614;
    }
    if (param_2 != 0x410) goto LAB_00300614;
  }
  if (*(char *)(param_1 + 0x75) == '\0') {
    uVar1 = 0x1e0;
  }
  else {
    uVar1 = 0xf0;
  }
  FUN_00311364(DAT_0030061c,*(undefined4 *)(param_1 + 0x38));
  FUN_002feabc(0,0,uVar1,400);
LAB_00300614:
  *(int *)(param_1 + 0x24) = param_2;
  return;
}
