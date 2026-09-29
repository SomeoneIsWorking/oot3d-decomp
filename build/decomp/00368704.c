// OoT3D decomp @ 00368704  name=FUN_00368704  size=152

void FUN_00368704(int *param_1,int param_2)

{
  if (*param_1 == 0) {
    return;
  }
  if ((char)param_1[0x11] != '\0') {
    if (*(char *)((int)param_1 + 0x45) != '\0') {
      FUN_002d4554(*param_1,param_1 + 1);
      FUN_004c062c(*param_1);
      *(undefined1 *)((int)param_1 + 0x45) = 0;
    }
    *(undefined4 *)(param_2 + 0x7c) = *(undefined4 *)(*param_1 + 0x24);
    *(int *)(param_2 + 0x80) = *param_1 + 0x468;
    FUN_004c05c0(param_2,*param_1 + 4);
    FUN_0036879c(param_2);
    return;
  }
  *(undefined1 *)(param_2 + 10) = 0;
  return;
}
