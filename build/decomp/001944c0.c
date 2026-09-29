// OoT3D decomp @ 001944c0  name=FUN_001944c0  size=116

void FUN_001944c0(int param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  undefined4 uVar3;

  iVar1 = FUN_0037571c(param_2);
  psVar2 = (short *)0x0;
  if (iVar1 != 0) {
    psVar2 = *(short **)(DAT_00194534 + param_2);
  }
  if (iVar1 != 0 && psVar2 != (short *)0x0) {
    uVar3 = DAT_00194538;
    if (*psVar2 != 2) {
      if (*psVar2 != 3) {
        return;
      }
      FUN_0037547c(DAT_00194544,0,4,DAT_00194540,DAT_00194540,DAT_0019453c);
      uVar3 = DAT_00194548;
    }
    *(undefined4 *)(param_1 + 0x1bc) = uVar3;
  }
  return;
}
