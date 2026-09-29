// OoT3D decomp @ 0022fd70  name=FUN_0022fd70  size=144

void FUN_0022fd70(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar2 = iRam0022fe00;
  if (*(char *)(param_1 + 0x466) != '\0') {
    sVar1 = *(short *)(param_1 + 0x1c) >> 8;
    if (sVar1 < 3) {
      iVar3 = FUN_0037571c(param_2);
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = *(int *)(&DAT_000022dc + param_2);
      }
      if (iVar3 != 0 && iVar4 != 0) {
LAB_0022fddc:
                    /* WARNING: Could not recover jumptable at 0x0022fdf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar2 + (uint)*(byte *)(param_1 + 0x45d) * 4))(param_1,param_2);
        return;
      }
    }
    else {
      iVar3 = FUN_0037571c(param_2);
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = *(int *)(&DAT_000022e0 + param_2);
      }
      if ((iVar3 != 0 && iVar4 != 0) || (sVar1 == 9)) goto LAB_0022fddc;
    }
  }
  return;
}
