// OoT3D decomp @ 002d038c  name=FUN_002d038c  size=120

void FUN_002d038c(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = DAT_002d0404;
  if (*(byte *)(DAT_002d0404 + param_1) != param_2) {
    if (param_1 < 8) {
      if (((*DAT_002d0408 & 1) == 0) && (iVar2 = FUN_003679b4(DAT_002d0408), iVar2 != 0)) {
        FUN_0036788c(DAT_002d040c);
      }
      FUN_00494dc0(DAT_002d0418,param_1,param_2);
    }
    *(char *)(iVar1 + param_1) = (char)param_2;
  }
  return;
}
