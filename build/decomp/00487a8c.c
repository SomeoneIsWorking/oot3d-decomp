// OoT3D decomp @ 00487a8c  name=FUN_00487a8c  size=524

undefined4 FUN_00487a8c(float param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;
  uint uVar4;
  float fVar5;
  float fVar6;

  fVar5 = DAT_00487cac;
  if (*(int **)(param_2 + 4) == (int *)0x0) {
    return 0;
  }
  uVar4 = in_fpscr & 0xfffffff | (uint)(param_1 == DAT_00487cac) << 0x1e |
          (uint)(DAT_00487cac <= param_1) << 0x1d;
  bVar1 = (byte)(uVar4 >> 0x18);
  if ((!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) ||
     (iVar2 = (**(code **)(**(int **)(param_2 + 4) + 0xc))(), iVar2 != 0)) {
    if (*(char *)(param_2 + 8) == '\0' || *(char *)(param_2 + 8) == '\x06') {
      return 0;
    }
    return 1;
  }
  switch(*(undefined1 *)(param_2 + 8)) {
  case 1:
    iVar2 = (**(code **)(**(int **)(param_2 + 4) + 0x14))();
    if (iVar2 != 0) {
      *(undefined1 *)(param_2 + 8) = 2;
      return 1;
    }
    break;
  case 2:
    uVar3 = 0;
    if (*(char *)(param_2 + 0x19) == '\0') {
      iVar2 = (**(code **)(**(int **)(param_2 + 4) + 0x30))();
      if (iVar2 == 0) {
        iVar2 = (**(code **)(**(int **)(param_2 + 4) + 0x34))();
        if (iVar2 != 0) {
          uVar3 = 1;
        }
      }
      else {
        param_1 = param_1 * DAT_00487cb0;
      }
    }
    if (*(int *)(param_2 + 0x14) == 0) {
      param_1 = *(float *)(param_2 + 0x10) * param_1;
    }
    else {
      fVar5 = (float)VectorSignedToFloat(*(int *)(param_2 + 0x14) + 1,(byte)(uVar4 >> 0x15) & 3);
      param_1 = param_1 / fVar5;
    }
    param_1 = param_1 * DAT_00487cb4;
    fVar5 = *(float *)(param_2 + 0x28);
    fVar6 = (float)VectorSignedToFloat((int)fVar5,(byte)(uVar4 >> 0x15) & 3);
    *(float *)(param_2 + 0x28) = fVar5 + param_1;
    FUN_0048b5b8(param_2,(int)((fVar5 - fVar6) + param_1),uVar3);
    break;
  case 3:
    iVar2 = (**(code **)(**(int **)(param_2 + 4) + 0x2c))();
    if (iVar2 == 0) break;
    if (*(char *)(param_2 + 0x1b) == '\0') {
      *(float *)(param_2 + 0xc) = fVar5;
      goto LAB_00487c6c;
    }
    goto LAB_00487c40;
  case 4:
    param_1 = *(float *)(param_2 + 0xc) - param_1;
    *(float *)(param_2 + 0xc) = param_1;
    if (fVar5 < param_1) {
      return 1;
    }
    *(float *)(param_2 + 0xc) = fVar5;
    if (*(char *)(param_2 + 0x1b) == '\0') {
LAB_00487c6c:
      *(undefined4 *)(param_2 + 0x14) = 0;
      *(undefined1 *)(param_2 + 0x19) = 0;
      *(undefined1 *)(param_2 + 0x1a) = 0;
      *(undefined4 *)(param_2 + 0x20) = 0;
      *(undefined4 *)(param_2 + 0x24) = 0;
      *(float *)(param_2 + 0x28) = fVar5;
      *(undefined4 *)(param_2 + 0x2c) = 0;
      *(undefined4 *)(param_2 + 0x30) = 0;
      *(undefined4 *)(param_2 + 0x34) = 0;
      *(undefined1 *)(param_2 + 8) = 1;
      return 1;
    }
LAB_00487c40:
    *(undefined1 *)(param_2 + 8) = 6;
    (**(code **)(**(int **)(param_2 + 4) + 4))(*(int **)(param_2 + 4),1);
  }
  if (*(char *)(param_2 + 8) != '\0' && *(char *)(param_2 + 8) != '\x06') {
    return 1;
  }
  return 0;
}
