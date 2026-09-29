// OoT3D decomp @ 00465f70  name=FUN_00465f70  size=200

void FUN_00465f70(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;

  puVar6 = DAT_00465fdc;
  iVar5 = 0;
  do {
    iVar5 = FUN_002ea6c8(DAT_00465fdc,iVar5);
    if (iVar5 == 0) {
      iVar5 = 0;
      goto LAB_00465fc4;
    }
    bVar7 = param_1 <= *(uint *)(iVar5 + 0x18);
    if (*(uint *)(iVar5 + 0x18) <= param_1) {
      bVar7 = *(uint *)(iVar5 + 0x1c) <= param_1;
    }
  } while (bVar7);
  iVar1 = FUN_002ea674(iVar5 + 0xc,param_1);
  if (iVar1 != 0) {
    iVar5 = iVar1;
  }
LAB_00465fc4:
  if (iVar5 != 0) {
    puVar6 = (undefined4 *)(iVar5 + 0xc);
  }
  uVar4 = (uint)*(ushort *)((int)puVar6 + 10);
  piVar3 = (int *)(uVar4 + param_1);
  uVar2 = *(undefined4 *)(param_1 + uVar4 + 4);
  if (*piVar3 == 0) {
    *puVar6 = uVar2;
  }
  else {
    *(undefined4 *)(uVar4 + *piVar3 + 4) = uVar2;
  }
  if (piVar3[1] == 0) {
    puVar6[1] = *piVar3;
  }
  else {
    *(int *)(piVar3[1] + (uint)*(ushort *)((int)puVar6 + 10)) = *piVar3;
  }
  *piVar3 = 0;
  piVar3[1] = 0;
  *(short *)(puVar6 + 2) = *(short *)(puVar6 + 2) + -1;
  return;
}
