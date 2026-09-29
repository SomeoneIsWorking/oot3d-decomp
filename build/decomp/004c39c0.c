// OoT3D decomp @ 004c39c0  name=FUN_004c39c0  size=292

void FUN_004c39c0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;

  piVar1 = (int *)param_1[0x11];
  iVar3 = *param_1;
  param_1[0x11] = (int)(piVar1 + 10);
  if (piVar1 != (int *)0x0) {
    iVar2 = iVar3 + *(int *)(iVar3 + 0x38);
    *piVar1 = iVar2;
    piVar1[2] = iVar2 + *(int *)(iVar2 + 0x10);
    piVar1[3] = *piVar1 + *(int *)(*piVar1 + 0x18);
    piVar1[4] = *piVar1 + *(int *)(*piVar1 + 0x20);
    piVar1[5] = *piVar1 + *(int *)(*piVar1 + 0x28);
    piVar1[6] = *piVar1 + *(int *)(*piVar1 + 0x30);
    piVar1[7] = *piVar1 + *(int *)(*piVar1 + 0x38);
    piVar1[8] = *piVar1 + *(int *)(*piVar1 + 0x40);
    piVar1[9] = *piVar1 + *(int *)(*piVar1 + 0x48);
    iVar2 = *piVar1;
    piVar1[1] = *(int *)(iVar2 + 0x44) +
                *(int *)(iVar2 + 0x14) + *(int *)(iVar2 + 0xc) +
                *(int *)(iVar2 + 0x1c) + *(int *)(iVar2 + 0x24) + *(int *)(iVar2 + 0x2c) +
                *(int *)(iVar2 + 0x34) + *(int *)(iVar2 + 0x3c);
  }
  param_1[3] = (int)piVar1;
  piVar1 = (int *)param_1[0x11];
  param_1[0x11] = (int)(piVar1 + 2);
  if (piVar1 != (int *)0x0) {
    iVar3 = *param_1 + *(int *)(iVar3 + 0x24);
    *piVar1 = iVar3;
    piVar1[1] = iVar3 + 0x10;
  }
  param_1[6] = (int)piVar1;
  return;
}
