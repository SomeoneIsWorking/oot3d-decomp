// OoT3D decomp @ 002d14c4  name=FUN_002d14c4  size=264

void FUN_002d14c4(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  uint *puVar4;

  puVar4 = (uint *)*DAT_002d15cc;
  if (param_3 == 0) {
    return;
  }
  if (param_1 == 0x8892) {
    iVar1 = *(int *)(*DAT_002d15d0 + 0x808);
  }
  else {
    if (param_1 != 0x8893) {
      return;
    }
    iVar1 = *(int *)(*DAT_002d15d0 + 0x80c);
  }
  piVar3 = *(int **)(iVar1 + 8);
  puVar2 = (undefined1 *)piVar3[6];
  if (puVar2 == DAT_002d15d4) {
    FUN_00453f44(*piVar3 + param_2,param_3);
    goto LAB_002d15bc;
  }
  if ((int)puVar2 < (int)DAT_002d15d4) {
    if (puVar2 == &DAT_01010000) {
      FUN_0034338c(piVar3[1] + param_2,param_4,param_3);
      FUN_00453f44(piVar3[1] + param_2,param_3);
      goto LAB_002d15bc;
    }
    if (puVar2 != (undefined1 *)0x1020000 && puVar2 != (undefined1 *)0x1030000) goto LAB_002d15bc;
    FUN_0034338c(piVar3[1] + param_2,param_4,param_3);
    param_4 = piVar3[1] + param_2;
  }
  else if ((int)puVar2 - (int)DAT_002d15d4 != 0x10000 && (int)puVar2 - (int)DAT_002d15d4 != 0x20000)
  goto LAB_002d15bc;
  FUN_002df380(*piVar3 + param_2,param_4,param_3);
LAB_002d15bc:
  *puVar4 = *puVar4 | 2;
  return;
}
