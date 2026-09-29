// OoT3D decomp @ 003115c4  name=FUN_003115c4  size=316

void FUN_003115c4(undefined4 param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;

  piVar1 = DAT_00311704;
  puVar5 = (uint *)*DAT_00311700;
  iVar2 = *(int *)(*DAT_00311704 + 0xc);
  if ((iVar2 != 0) && (*(uint *)(iVar2 + 0x40) == param_2)) {
    return;
  }
  if (param_2 != 0) {
    for (iVar2 = *(int *)(*DAT_00311704 + 4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x44)) {
      if (param_2 <= *(uint *)(iVar2 + 0x40)) {
        if ((iVar2 != 0) && (*(uint *)(iVar2 + 0x40) == param_2)) goto LAB_003116dc;
        break;
      }
    }
    if ((code *)*DAT_00311708 == (code *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(code *)*DAT_00311708)(0x10000,0x100,0,0x48);
    }
    if (iVar2 != 0) {
      FUN_00343280(iVar2,0x48);
    }
    *(uint *)(iVar2 + 0x40) = param_2;
    iVar3 = *piVar1;
    iVar4 = *(int *)(iVar3 + 4);
    if (iVar4 == 0) {
      *(int *)(iVar3 + 4) = iVar2;
    }
    else if (param_2 < *(uint *)(iVar4 + 0x40)) {
      *(int *)(iVar2 + 0x44) = iVar4;
      *(int *)(iVar3 + 4) = iVar2;
    }
    else {
      for (iVar3 = *(int *)(iVar4 + 0x44); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x44)) {
        if (param_2 < *(uint *)(iVar3 + 0x40)) {
          *(int *)(iVar4 + 0x44) = iVar2;
          *(int *)(iVar2 + 0x44) = iVar3;
          if (iVar3 != 0) goto LAB_003116dc;
          break;
        }
        iVar4 = iVar3;
      }
      *(int *)(iVar4 + 0x44) = iVar2;
    }
LAB_003116dc:
    if (param_2 != 0) goto LAB_003116e8;
  }
  iVar2 = 0;
LAB_003116e8:
  *(int *)(*piVar1 + 0xc) = iVar2;
  *puVar5 = *puVar5 | 1;
  return;
}
