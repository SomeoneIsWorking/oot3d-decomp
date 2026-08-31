// OoT3D decomp @ 004527e8  name=FUN_004527e8  size=300

void FUN_004527e8(int *param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int unaff_r5;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;

  iVar4 = 0;
  iVar7 = *(int *)(*(int *)(param_1[1] + 4) + 0xc);
  bVar8 = *(char *)((int)param_1 + 0x15) == '\0';
  if (bVar8) {
    unaff_r5 = 0;
  }
  iVar2 = **(int **)(*(int *)(param_1[1] + 4) + 0xc);
  iVar5 = (int)*(short *)(iVar2 + 0xc);
  iVar6 = iVar5;
  if (!bVar8) {
    iVar6 = *(int *)(iVar2 + 8) - iVar5;
    unaff_r5 = iVar5;
  }
  if (0 < iVar6) {
    do {
      piVar3 = (int *)(*(int *)(iVar7 + 0x10) + unaff_r5 * 0xc);
      iVar2 = *piVar3;
      if (*(char *)(param_1[0x1b] + (uint)*(byte *)(iVar2 + 3)) != '\0') {
        bVar1 = *(byte *)(iVar2 + 2);
        piVar3 = (int *)(*(int *)(piVar3[2] + 0xc) + (short)(ushort)bVar1 * 0x1cc);
        func_0x0032471c(param_1 + 9);
        if (*(char *)(*piVar3 + 2) == '\0') {
          func_0x002dd6d0(param_1 + 9);
        }
        else {
          func_0x0047d68c(param_1[4],1,param_1 + 9);
        }
        (**(code **)(*param_1 + 0x24))(param_1,piVar3);
        (**(code **)(*param_1 + 0x20))(param_1,piVar3,bVar1);
        (**(code **)(*param_1 + 0x14))(param_1,piVar3,bVar1);
        func_0x002f9c74(param_1 + 9);
        func_0x00466e0c(param_1[0x17] + unaff_r5 * 0x18);
      }
      iVar4 = iVar4 + 1;
      unaff_r5 = unaff_r5 + 1;
    } while (iVar4 < iVar6);
  }
  return;
}
