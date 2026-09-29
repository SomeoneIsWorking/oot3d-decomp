// OoT3D decomp @ 00181878  name=FUN_00181878  size=180

void FUN_00181878(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;

  if (((*(uint *)(DAT_00181b28 + 0x14) & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_00181b2c), puVar3 = DAT_00181b34, uVar2 = DAT_00181b30, iVar4 != 0))
  {
    *DAT_00181b34 = DAT_00181b30;
    puVar3[1] = uVar2;
    puVar3[2] = uVar2;
  }
  if (*(char *)(DAT_00181b38 + param_1) != '\0') {
    cVar1 = *(char *)(DAT_00181b38 + param_1) + -1;
    iVar4 = (int)cVar1;
    *(char *)(param_1 + 0x2c6) = cVar1;
    if (iVar4 != 0) {
      iVar5 = (int)((ulonglong)((longlong)DAT_00181b3c * (longlong)iVar4) >> 0x20);
      if (iVar4 + ((iVar5 >> 1) - (iVar5 >> 0x1f)) * -5 != 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
  }
  FUN_00374428(param_1);
  return;
}
