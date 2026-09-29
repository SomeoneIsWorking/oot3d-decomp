// OoT3D decomp @ 002fa45c  name=FUN_002fa45c  size=400

void FUN_002fa45c(uint *param_1,int param_2,uint param_3,uint *param_4,uint *param_5,uint *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;

  if (7 < (int)*param_6) {
    *param_6 = (int)*param_6 % 8;
  }
  uVar1 = param_1[4];
  uVar3 = uVar1;
  if (-1 < (int)uVar1) {
    uVar3 = param_3;
  }
  if (uVar3 == 0 || (-1 >= (int)uVar1 || (int)param_3 < 0)) {
    *param_4 = 0;
    return;
  }
  uVar3 = param_1[3];
  if ((int)param_5[1] < 0) {
    if ((int)uVar3 < 0) {
      uVar3 = param_1[4] + 1;
      goto LAB_002fa558;
    }
  }
  else {
    uVar1 = param_5[1];
    if ((int)(uVar1 - (uVar3 + (*param_5 < param_1[2]))) < 0 ==
        (SBORROW4(uVar1,uVar3) != SBORROW4(uVar1 - uVar3,(uint)(*param_5 < param_1[2])))) {
      uVar3 = param_1[1];
      uVar1 = param_5[1];
      if ((int)(uVar1 - (uVar3 + (*param_5 < *param_1))) < 0 ==
          (SBORROW4(uVar1,uVar3) != SBORROW4(uVar1 - uVar3,(uint)(*param_5 < *param_1)))) {
        uVar3 = param_1[4] - *param_6;
        goto LAB_002fa558;
      }
      if ((int)param_1[3] < 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = 7 - *param_6;
      }
      uVar3 = iVar2 + param_1[4] + 1;
      *param_4 = uVar3;
      if ((int)uVar3 < 9) goto LAB_002fa558;
    }
  }
  uVar3 = 8;
LAB_002fa558:
  if ((int)uVar3 < (int)param_3) {
    param_3 = uVar3;
  }
  *param_4 = uVar3;
  if (7 < (int)param_3) {
    uVar3 = 7;
  }
  *param_4 = param_3;
  if (7 < (int)param_3) {
    *param_4 = uVar3;
  }
  uVar3 = param_1[4];
  iVar2 = 0;
  if (0 < (int)*param_4) {
    do {
      iVar4 = (int)((uVar3 - iVar2) + 8) % 8;
      puVar5 = (undefined2 *)(param_2 + iVar2 * 6);
      *puVar5 = *(undefined2 *)((int)param_1 + iVar4 * 6 + 0x20);
      puVar5[1] = *(undefined2 *)((int)param_1 + iVar4 * 6 + 0x22);
      iVar2 = iVar2 + 1;
      puVar5[2] = *(undefined2 *)((int)param_1 + iVar4 * 6 + 0x24);
    } while (iVar2 < (int)*param_4);
  }
  uVar1 = param_1[1];
  *param_5 = *param_1;
  param_5[1] = uVar1;
  *param_6 = uVar3;
  return;
}
