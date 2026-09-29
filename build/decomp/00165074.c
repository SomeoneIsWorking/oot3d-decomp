// OoT3D decomp @ 00165074  name=FUN_00165074  size=188

void FUN_00165074(int param_1,int param_2)

{
  char cVar1;

  cVar1 = FUN_00363c10(param_2 + 0x3a58,0xc0);
  *(char *)(param_1 + 0x45c) = cVar1;
  if ((cVar1 < '\0') && (0 < *(short *)(param_1 + 0x1c))) {
    *(undefined4 *)(param_1 + 0x3fc) = 0;
    FUN_00374428(param_1);
    return;
  }
  if ((*(int *)(param_2 + 0x7f90) == 0) &&
     ((*DAT_00165130 == DAT_00165134 && (DAT_00165130[2] == -0x3a964000)))) {
    *(undefined2 *)(DAT_00165138 + 0x8a) = 0;
    *(undefined4 *)(param_2 + 0x7f90) = 1;
  }
  *(undefined4 *)(param_1 + 0x3fc) = DAT_0016513c;
  return;
}
