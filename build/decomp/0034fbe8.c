// OoT3D decomp @ 0034fbe8  name=FUN_0034fbe8  size=116

void FUN_0034fbe8(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;

  if (param_3 != (undefined4 *)0x0) {
    if (param_3[1] == 0) {
      *param_2 = param_3[2];
    }
    else {
      *(undefined4 *)(param_3[1] + 8) = param_3[2];
    }
    if (param_3[2] != 0) {
      *(undefined4 *)(param_3[2] + 4) = param_3[1];
    }
    piVar1 = DAT_0034fc5c;
    *DAT_0034fc5c = *DAT_0034fc5c + -1;
    *param_3 = 0;
    iVar2 = (int)((ulonglong)
                  ((longlong)DAT_0034fc60 * (longlong)((int)param_3 + (-8 - (int)piVar1))) >> 0x20);
    piVar1[1] = (uint)((ulonglong)(uint)((iVar2 >> 1) - (iVar2 >> 0x1f)) * (ulonglong)DAT_0034fc64
                      >> 0x23);
  }
  return;
}
