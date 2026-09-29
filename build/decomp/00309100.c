// OoT3D decomp @ 00309100  name=FUN_00309100  size=124

void FUN_00309100(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int unaff_r4;
  bool bVar2;

  bVar2 = *(char *)(param_1 + 5) != '\0';
  if (bVar2) {
    unaff_r4 = *(int *)(param_1 + 0xc4);
  }
  if (bVar2 && unaff_r4 != 0) {
    do {
      iVar1 = *(int *)(unaff_r4 + 0x120);
      if (0 < iVar1) {
        iVar1 = iVar1 + -1;
        *(int *)(unaff_r4 + 0x120) = iVar1;
      }
      if (((iVar1 == 0) && (*(char *)(unaff_r4 + 0x90) != '\x04')) &&
         (*(char *)(param_1 + 0x4c) == '\0')) {
        FUN_00407de4(unaff_r4,param_2);
        param_2 = extraout_r1;
      }
      if (*(char *)(unaff_r4 + 200) == '\0') {
        FUN_00407c1c(unaff_r4);
        param_2 = extraout_r1_00;
      }
      unaff_r4 = *(int *)(unaff_r4 + 0x138);
    } while (unaff_r4 != 0);
  }
  return;
}
