// OoT3D decomp @ 002ea854  name=FUN_002ea854  size=40

undefined4 FUN_002ea854(int param_1)

{
  undefined4 uVar1;

  if ((*(short *)(**(int **)(param_1 + 4) + 0x20) == 0) ||
     (uVar1 = 0, (*(uint *)(param_1 + 0x178) & 0x80) != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}
