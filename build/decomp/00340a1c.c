// OoT3D decomp @ 00340a1c  name=FUN_00340a1c  size=140

void FUN_00340a1c(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;

  piVar1 = DAT_00340aa8;
  *(char *)(param_1 + 0x7f24) = (char)param_2;
  if ((*(short *)(*piVar1 + 0x4b2) != 0x10) && (*(int *)(DAT_00340aac + 8) < DAT_00340ab0)) {
    uVar2 = DAT_00340abc;
    if (param_2 == 1) {
      uVar2 = DAT_00340ac0;
    }
    FUN_0037547c(uVar2,0,4,DAT_00340ab8,DAT_00340ab8,DAT_00340ab4);
  }
  FUN_003387a8(*(undefined4 *)(param_1 + *(short *)(DAT_00340ac4 + param_1) * 4 + 0xa54),
               *(byte *)(param_1 + 0x7f24) - 1);
  return;
}
